str=input("Enter the string: ")
while(1):
    a=int(input("\n1: Convert to UpperCase\n2: Convert to LowerCase\n3: Find Character's Position\n4: Center the String\n5: Count The Number of Characters\n6: Capitalize the String\n7: Replace the Character\n8: Split the String\n9: Press 0 To Exit\n\nEnter the Number: "))
    if(a==0): break
    elif(a==1): print("\nThe UpperCase of String is:",str.upper())
    elif(a==2):print("\nThe LowerCase of String is:",str.lower())
    elif(a==3):
        s=input("\nEnter the Character: ")
        print("\nThe Index of the given Character is:",str.find(s))
    elif(a==4):
        t=input("\nEnter the Character: ")
        print("The Centered String is:",str.center(len(str)+10,t))
    elif(a==5):
        s=input("\nEnter the Character: ")
        print("The Character Occurs:",str.count(s))
    elif(a==6):
            print("\nThe Capitalize of String is:",str.capitalize())
    elif(a==7):
        s=(input("\nWhat to Replace: "))
        d=(input("Replace With: "))
        print("The New String is:",str.replace(s,d))
    elif(a==8): print(str.split())
    else:
        print("\nWrong Choice Try Again")
