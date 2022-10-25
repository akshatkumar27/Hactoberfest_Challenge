s=['0','1','2','3','4','5','6','7','8','9']
a=input("Enter the String: ")
c=0
for i in a:
    if(i in s):c+=(int(i))
print("The Sum is:",c)
