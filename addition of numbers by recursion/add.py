def add(n,i):
    if(i==0): return n[i]
    else: return n[i]+add(n,i-1)
a=list(map(int,input("Enter the Numbers with Space: ").split()))
print("The Addition is:",add(a,len(a)-1))
