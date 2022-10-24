a=list(map(int,input("Enter the Numbers with spaces: ").split()))
b=set(a)
for i in b:
    if(a.count(i)>1): print("The Number",i,"is repeated",a.count(i),"Times")
