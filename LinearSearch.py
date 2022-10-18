#LinearSearch
def search(lst1, N, a):
    for i in range(0, N):
        if (lst1[i] == a):
            return i
    return -1
lst=[]
j=int(input("no. of elements:"))
while i<=j:
    s=int(input()
    lst=lst.append(s)
    j=j+1
x = int(input())
N = len(arr)

result = search(arr, N, x)
if(result == -1):
    print("Element is not present in array")
else:
    print("Element is present at index", result)
