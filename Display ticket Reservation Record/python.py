name=[]
id=[]
cost=[]
arr=[]
dep=[]
phone=[]
gmail=[]

def new():
    name.append(input("Enter the Name: "))
    id.append(input("Enter the ID: "))
    phone.append(input("Enter Phone Number: "))
    gmail.append(input("Enter Gmail: "))
    arr.append(input("Enter Arrival Time: "))
    dep.append(input("Enter Departure Time: "))
    cost.append(input("Enter the Cost: "))
    
def display():
    if(name==[]):
        print("\nThe Records are Empty")
    else:
        print("Sr  Name\tID\tPhone\t\tArrival\t\tDeparture\tCost")
        for i in range(0,len(name)):
            print(str(i+1)+": "+name[i]+"   "+id[i]+"   "+phone[i]+"   "+gmail[i]+"   "+arr[i]+"   "+dep[i]+"   "+cost[i]+"Rs3")
    
    
def edit():
    if(name==[]):
        print("\nThe Records are Empty")
    else:
        for i in range(0,len(name)):
            print("\n",i+1,": ",name[i],id[i],phone[i],gmail[i],arr[i],dep[i],cost[i])
        s=int(input("\n\nEnter the Record Number: "))
        print("\n",s,": ",name[s-1],id[s-1],phone[s-1],gmail[s-1],arr[s-1],dep[s-1],cost[s-1])
        
        while(1):
            c=int(input("\n1: Change Name\n2: Change ID\n3: Change Phone\n4: Change Gmail\n5: Change Arrival Time\n6: Change Departure Time\n7: Change Cost\n8: Enter 0 TO Exit\n\nWhat to change, Enter the Choice: "))
            if(c==0):
                break
            elif(c==1):
                g=input("\nEnter New Name: ")
                name[s-1]=g
                print("\nName Changed")
            elif(c==2):
                g=(input("\nEnter the New ID: "))
                id[s-1]=g
                print("\nId Changed")
            elif(c==3):
                g=(input("\nEnter the New Phone: "))
                phone[s-1]=g
                print("\nPhone Changed")
            elif(c==4):
                g=input("Enter New Gmail: ")
                gmail[s-1]=g
                print("\nGmail Changed")
            elif(c==5):
                g=(input("\nEnter the New Arrival Time: "))
                arr[s-1]=g
                print("Arrival Time Changed")
            elif(c==6):
                g=t(input("\nEnter the New Departure Time: "))
                dep[s-1]=g
                print("DEparture Time Changed")
            elif(c==7):
                g=(input("\nEnter the New Cost: "))
                cost[s-1]=g
                print("\nCost Changed")
            else:

                print("\nWrong Choice Try Again")
            print(s,name[s-1],id[s-1],phone[s-1],gmail[s-1],arr[s-1],dep[s-1],cost[s-1])
            
def delete():

    if(name==[]):
        print("\nThe Records are Empty")
    else:
        for i in range(0,len(name)):

            print("\n",i+1,": ",name[i],id[i],phone[i],gmail[i],arr[i],dep[i],cost[i])
        s=int(input("\nEnter the Record Number: "))
        if (s-1)<=(i):

            name.pop(s-1)
            id.pop(s-1)
            cost.pop(s-1)
            arr.pop(s-1)
            dep.pop(s-1)
            phone.pop(s-1)
            gmail.pop(s-1)
            print("\nDeleted")
        else:

            print("\nRecord Not Found")
        
while(1):

    a=int(input("\n1: Enter New Record\n2: Display Records\n3: Edit The Record\n4: Delete the Record\n5: Enter 0 to Exit\n\nEnter your Choice: "))
    if(a==0):

        break
    elif(a==1):

        new()
    elif(a==2):

        display()
    elif(a==3):

        edit()
    elif(a==4):

        delete()
    else:

        print("\nWrong Choice Try Again")
