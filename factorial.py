def fact(n):
    if(n==1): return n
    else: return n*fact(n-1)
a=int(input("Enter the Number: "))
print("The Factorial is:",fact(a))

'''
OR
''' 

import math
a=int(input("Enter the Number: "))
print("The Factorial is:",math.factorial(a))
