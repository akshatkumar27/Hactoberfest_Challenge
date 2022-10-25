import simpy
def fetch_values_of_multiple_events(env):
t1, t2 = env.timeout(1, value=&#39;spam&#39;), env.timeout(2,
value=&#39;eggs&#39;)
r1, r2 = (yield t1 &amp; t2).values()
# assert r1 == &#39;spam&#39; and r2 == &#39;eggs&#39;
print(r1)

print(r2)
env = simpy.Environment()
proc = env.process(fetch_values_of_multiple_events(env))
env.run()