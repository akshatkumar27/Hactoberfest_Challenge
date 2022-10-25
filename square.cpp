#include <iostream>
using namespace std;

class add{
    int num;
    float i;
    public:
    void sqr(){
        cout<<"Enter the Number: ";
        cin>>num;
        cout<<"The Square Root is: ";
        for(i=1;i<=num;i+=0.000001){
            if(i*i>=num){
                cout<<i;
                break;
            }
        }
    }
};

int main() {
    add a;
    a.sqr();
    return 0;
}
