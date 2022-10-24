def fibo(n):
    if(n<2): return n
    else: return fibo(n-2)+fibo(n-1)
a=int(input("Enter the Number: "))
for i in range(1,a):
    print(fibo(i),end=' ')
