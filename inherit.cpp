#include <iostream>
using namespace std;

class Marks{

    public:
    string name;
    int marks;
    
    void a(){
        cout<<"\nEnter the Name: ";
        cin>>name;
        cout<<"\nEnter the Marks\n";
    }
    
    void e(){
        cout<<"\n-----------------------------------------------\n\nName: "<<name<<endl;
    }
};

class Physics: public Marks{

    public:
    
    void b(){
        cout<<"Physics: ";
        cin>>marks;
    }
    
    int f(){
        cout<<"Physics: "<<marks<<endl;
        return marks;
    }
};

class Chemistry: public Marks{
    public:
    
    void c(){
        cout<<"Chemistry: ";
        cin>>marks;
    }
    
    int g(){
        cout<<"Chemistry: "<<marks<<endl;
        return marks;
    }
};

class Mathematics: public Marks{

    public:
    
    void d(){
        cout<<"Mathematics: ";
        cin>>marks;
    }
    
    int h(){
        cout<<"Mathematics: "<<marks<<endl;
        return marks;
    }
};

int main() {

    int size,k,total;

    cout<<"Enter the Number of Students: ";
    cin>>size;
    
    Marks g[100];
    Physics h[100];
    Chemistry i[100];
    Mathematics j[100];
    
    for(k=0;k<size;k++){
        
        g[k].a();
        h[k].b();
        i[k].c();
        j[k].d();
        
    }

    cout<<"\n------------------- Details -------------------\n";

    for(k=0;k<size;k++){
        
        total=0;
        
        g[k].e();
        total+=h[k].f();
        total+=i[k].g();
        total+=j[k].h();
        
        cout<<"The Total Marks is: "<<total<<endl;
        cout<<"The Average Marks is: "<<(float)total/3<<endl;

    }
    
    return 0;

}
