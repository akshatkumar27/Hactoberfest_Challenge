#include <iostream>
using namespace std;

class shape{
    public:

    void a(){
        cout<<"\nThis is a Shape"<<endl;
    }
};

class polygon: public shape{
    public:
    void b(){
        cout<<"\nPolygon is a shape"<<endl;
    }
};

class rectangle{
    public: 
    void c(){
        cout<<"\nRectangle is a polygon"<<endl;
    }
};

class triangle {
    public:
    void d(){
        cout<<"\nTriangle is a polygon"<<endl;
    }
};

class square{
  public:
  void e(){
      cout<<"\nSquare is a rectangle"<<endl;
  }
};

int main() {
    shape s;
    s.a();
    polygon p;
    p.b();
    rectangle r;
    r.c();
    triangle t;
    t.d();
    square sq;
    sq.e();
    return 0;
}
