import simpy
from random import seed, randint
seed(23)

class EV:
    def __init__(self, env):
        self.env = env
        self.drive_proc = env.process(self.drive(env))
        self.bat_ctrl_proc = env.process(self.bat_ctrl(env))
        self.bat_ctrl_reactivate = env.event()
    def drive(self, env):
        while True:
            # Drive for 20-40 min

            yield env.timeout(randint(20, 40))
            # Park for 1–6 hours
            print(&#39;Start parking at&#39;, env.now)
            self.bat_ctrl_reactivate.succeed()  # &quot;reactivate&quot;
            self.bat_ctrl_reactivate = env.event()
            yield env.timeout(randint(60, 360))
            print(&#39;Stop parking at&#39;, env.now)
    def bat_ctrl(self, env):
        while True:
            print(&#39;Bat. ctrl. passivating (stop charging) at&#39;, env.now)
            yield self.bat_ctrl_reactivate  # &quot;passivate&quot;
            print(&#39;Bat. ctrl. reactivated (start Charging) at&#39;, env.now)
            # Intelligent charging behavior here …
            yield env.timeout(randint(30, 90))

env = simpy.Environment()
ev = EV(env)
env.run(until=150)