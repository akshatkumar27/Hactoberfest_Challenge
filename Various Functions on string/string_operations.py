str=input("Enter the string: ")

while(1):
    
    a=int(input("\n1: Convert to UpperCase\n2: Convert to LowerCase\n3: Find Character's Position\n4: Center the String\n5: Count The Number of Characters\n6: Capitalize the String\n7: Replace the String\n8: Replace the Character\n9: Split the String\n10: Convert to Lowercase\n11: Check if String contains Digit or Not\n12: Check if String contains only Num & Alphabets\n13: Check if String Contains only Alphabets\n14: Check if String contains only Numbers\n15: Check if String contains Lowercase\n16: Check if String contains Uppercase\n17: Check if String contains is in Whitespaces\n18: Add New Character to String\n19: Convert Uppercase to Lowercase or Viseversa\n20: Check the Index of Character\n21: Capitalise the String\n22: Length Of String\n23: Add Sapces to the String\n24: Delete Newline in String\n25: Add Character at the Start\n26: Press 0 To Exit\n\nEnter the Number: "))
    
    if(a==0):
        break
    elif(a==1):
        print("\nThe UpperCase of String is:",str.upper())
    elif(a==2):
        print("\nThe LowerCase of String is:",str.lower())
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
    elif(a==8):
        s=(input("\nWhat to Replace: "))
        d=(input("Replace With: "))
        s = str.maketrans(s, d)
        print("The New String is:",str.translate(s))
    elif(a==9):
        s=input("\nEnter the Character: ")
        print(str.split(s))
    elif(a==10):
        print("\nThe LowerCase of String is:",str.casefold())
    elif(a==11):
        print("\nDoes the Given String is Digit or Not:",str.isdigit())
    elif(a==12):
        print("\nDoes the Gievn String Contains Only Num & Alphabets:",str.isalnum())
    elif(a==13):
        print("\nDoes the Gievn String Contains Only Alphabets:",str.isalpha())
    elif(a==14):
        print("\nDoes the Gievn String Contains Only NUmbers:",str.isdecimal())
    elif(a==15):
        print("\nDoes the Gievn String Contains is in Lowercase:",str.islower())
    elif(a==16):
        print("\nDoes the Gievn String Contains is in Uppercase:",str.isupper())
    elif(a==17):
        print("\nDoes the Gievn String Contains is in Whitespaces:",str.isspace())
    elif(a==18):
        s=input("\nEnter the Character: ")
        print('The New String is:',s.join(str))

    elif(a==19):
        print("\nThe New String is:",str.swapcase())

    elif(a==20):
        s=input("\nEnter the Character: ")
        print("The Index of the given Character is:",str.index(s))

    elif(a==21):
        print("\nThe Capitalize of String is:",str.title())

    elif(a==22):
        print("\nThe Length of String is:",len(str))

    elif(a==23):
        print("\nThe Right justified version of the string:",str.rjust(20))

    elif(a==24):
        print("\nThe New String is:",str.splitlines())

    elif(a==25):
        s=input("\nEnter the Character: ")
        print("Does the string starts with the Character:",str.startswith(s))

    else:
        print("\nWrong Choice Try Again")
