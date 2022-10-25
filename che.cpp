#include <iostream>
using namespace std;

class mammals{
    public:
    void a(){
        cout<<"I am Mammal\n"<<endl;
    }
};

class marine_animals{
    public:

    void b(){
        cout<<"I am Marine Animal\n"<<endl;
    }
};

class blue_whale: public mammals,public marine_animals{
  public:

  void c(){
      cout<<"I Belong to Both Categories: Mammal as well as Marine Animals\n"<<endl;
  }
};

int main() {
    mammals m;
    m.a();
    
    marine_animals n;
    n.b();
    
    blue_whale o;
    o.c();
    
    blue_whale p;
    p.a();
    p.b();
    p.c();
    
    return 0;
}
