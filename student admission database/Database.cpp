#include <bits/stdc++.h>
#define cg cin.getline
using namespace std;

class Student {
    public:
        int age,check;
        char name[1000],gmail[1000],branch[1000],phone[1000];
};

Student s[1000];
int n=0;

void add() {
    char temp[100]= {0};
    cin.getline(temp,100);
    cout<<("\n----------------Enter the Student's Data----------------\n\nEnter the Name: ");
    cg(s[n].name,1000);
    cout<<"Enter the Age: ";
    cin>>s[n].age;
    cg(temp,100);
    cout<<"Enter the Gmail: ";
    cg(s[n].gmail,1000);
    cout<<"Enter the Phone: ";
    cg(s[n].phone,1000);
    cout<<"Enter the Branch: ";
    cg(s[n].branch,1000);
    n++;
}

void display() {
    if(n==0) {
        cout<<"\nRecord is Empty\n";
    } else {
        cout<<"\n\nSr\tName\t\tAge\tPhone\t\tGmail\t\tBranch\n";
        for(int i=0; i<n; i++) {
        	if(s[i].check!=1){
        		cout<<i+1<<"\t"<<s[i].name<<"\t"<<s[i].age<<"\t"<<s[i].phone<<"\t"<<s[i].gmail<<"\t"<<s[i].branch<<endl;
			} 
            
        }
    }

}

void edit() {
    if(n==0) {
        cout<<"\nRecord is Empty\n";
    } else {
        int a;
        display();
        cout<<"\nEnter Sr no: ";
        cin>>a;
        a-=1;
        if(a<=n) {
            char temp[100]= {0};
            cin.getline(temp,100);
            cout<<("\n----------------Enter the Student's Data----------------\n\nEnter the Name: ");
            cg(s[a].name,1000);
            cout<<"Enter the Age: ";
            cin>>s[a].age;
            cg(temp,100);
            cout<<"Enter the Gmail: ";
            cg(s[a].gmail,1000);
            cout<<"Enter the Phone: ";
            cg(s[a].phone,1000);
            cout<<"Enter the Branch: ";
            cg(s[a].branch,1000);
            cout<<"\nRecord Updated\n";
        } else {
            cout<<"\nRecord Not Found\n";
        }
    }
}

void delet() {
	if(n==0){
		cout<<"\nRecord is Empty\n";
	}else{
		int a;
		display();
		cout<<"\nEnter Sr no: ";
        cin>>a;
        a-=1;
        if(a==0){
        	n=0;
		}else if(a<=n){
        	s[a].check=1;
        cout<<"\nRecord Deleted\n";
		}else{
			cout<<"\nRecord Not Found\n";
		}
	}
}

int main() {
    int a;
    while(1) {
        cout<<"\n\n1: Add the Data\n2: Edit The Data\n3: Display the Data\n4: Delete The Data\n5: Enter '0' to Exit\nEnter the Choice: ";
        cin>>a;
        if(a==1) {
            add();
        } else if(a==2) {
            edit();
        } else if(a==3) {
            display();
        } else if(a==4) {
            delet();
        } else if(a==0) {
            cout<<"\nThanks\n";
            break;
        } else {
            cout<<"\nWrong Choice Try Again\n";
        }
    }

    return 0;
}
