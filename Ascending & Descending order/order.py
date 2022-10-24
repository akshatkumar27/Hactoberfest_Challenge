a=input("Enter the Numbers with ',': ")
a=a.split(',')

i=0
while(i<len(a)):
    a[i]=int(a[i])
    i=i+1

for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        if(a[i]>a[j]):
            c=a[i]
            a[i]=a[j]
            a[j]=c
            
print("\nAscending Order is:",a)

for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        if(a[i]<a[j]):
            c=a[i]
            a[i]=a[j]
            a[j]=c
            
print("\nDescending Order: ",a)
