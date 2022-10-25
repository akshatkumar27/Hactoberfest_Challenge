#include <iostream>
using namespace std;

class physics{
    protected: 
    int ph;
    public:
    void a(){
        cout<<"\nEnter the Marks of Physics: ";
        cin>>ph;
    }
};

class chemistry{
    protected:
    int ch;
    public:
    void b(){
        cout<<"Enter the Marks of Chemistry: ";
        cin>>ch;
    }
};

class maths{
    protected: 
    int ma;
    public:
    void c(){
        cout<<"Enter the Marks of Maths: ";
        cin>>ma;
    }
};

class marks: public physics,public chemistry,public maths{
    int total;
    float avg;
    public:
    void d(){
        total=ph+ma+ch;
        avg=(total/3);
        cout<<"\nThe Total Marks in Physics is: "<<ph<<endl;
        cout<<"\nThe Total Marks in Chemistry is: "<<ch<<endl;
        cout<<"\nThe Total Marks in Maths is: "<<ma<<endl;
        cout<<"\nThe Average Marks are: "<<avg<<endl;
        
        
    }
};

int main() {
    int s,i;
    marks p[100];
    cout<<"Enter the Number of Student: ";
    cin>>s;
    for(i=0;i<s;i++){
        cout<<"\nEnter the Details of Student "<<i+1<<endl;
        p[i].a();
        p[i].b();
        p[i].c();
    }
    
    for(i=0;i<s;i++){
        p[i].d();
    }
    

    return 0;
}
