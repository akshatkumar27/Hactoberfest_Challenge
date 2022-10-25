import simpy
import random
class Atmcash():
  def __init__(self,env):
   self.env=env
   self.atm = simpy.Resource(self.env,capacity=2)
   self.cash= simpy.Container(self.env,init=16000,capacity=16000)
   self.monitor = self.env.process(self.monitor(self.env))
  def monitor(self, env):
    while(1):
      if(self.cash.level &lt; 500):
        print(&#39;Unfortunately cash has run out try other ATM &#39;)
        self.env.process(withdraw(self.env, fcash))
      yield self.env.timeout(10)
def withdraw(env,fcash):
  for i in range(21): 
    cashwd = random.randint(500,1000)
    with fcash.atm.request() as req:
     yield req
    print(f&#39;Person {i} requested cash  {cashwd}&#39;)
    yield fcash.cash.get(cashwd)
    yield env.timeout(random.randint(2,5))
    print(f&#39;Person {i} recieved cash at {env.now}&#39;)
  

env=simpy.Environment()
fcash=Atmcash(env)
env.process(withdraw(env, fcash))
print(201235)
env.run(until=80)