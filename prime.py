a=int(input("Enter the Number: "))
c=0
for i in range(1,a+1):
    if(a%i==0):c+=1
if(c==2):print("Its a Prime Number")
else: print("Its Not a Prime Number")
