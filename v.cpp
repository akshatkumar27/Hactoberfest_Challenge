#include <iostream>
using namespace std;

class vehicle{
    public:
    float mileage;
    long price;

    void a(){
        cout<<" - Mileage: "<<mileage<<" kmpl"<<endl;
        cout<<" - Price: "<<price<<" Rs"<<endl;

    }
};

class car: public vehicle{
    public:
    long ownership_cost;
    int warranty, seat_capacity;
    string fuel_type;
    
    void b(){
        cout<<" - Ownership Cost: "<<ownership_cost<<" Rs"<<endl;
        cout<<" - Warranty: "<<warranty<<" Years"<<endl;
        cout<<" - Seating Capacity: "<<seat_capacity<<endl;
        cout<<" - Fuel Type: "<<fuel_type<<" LItres"<<endl;

    }
};

class bike: public vehicle{
    public:
    int num_of_cylinders, num_of_gears, fuel_tank_size;
    string cooling_type, wheel_type;
    
    void c(){
        cout<<" - Number of Cylinders: "<<num_of_cylinders<<endl;
        cout<<" - Number of Gears: "<<num_of_gears<<endl;
        cout<<" - Cooling Type: "<<cooling_type<<endl;
        cout<<" - Wheel Type: "<<wheel_type<<endl;
        cout<<" - Fuel Tank Size: "<<fuel_tank_size<<" LItres"<<endl;

    }
};

class audi: public car{
    public:
    string model_type;
    
    void d(){
        cout<<" - Model Type: "<<model_type<<endl;

    }
};

class ford: public car{
    public:
    string model_type;
    
    void e(){
        cout<<" - Model Type: "<<model_type<<endl;

    }
};

class bajaj: public bike{
    public:
    string make_type;
    
    void f(){
        cout<<" - Make Type: "<<make_type<<endl;

    }
};

class tvs: public bike{
    public:
    string make_type;
    
    void g(){
        cout<<" - Make Type: "<<make_type<<endl;

    }
};

int main() {
    
    audi ai;

    ai.mileage=65.45;
    ai.price=650000;
    ai.ownership_cost=350000;
    ai.warranty=3;
    ai.seat_capacity=4;
    ai.fuel_type="Petrol";
    ai.model_type="A56";
    
    ford fd;

    fd.mileage=78.45;
    fd.price=950000;
    fd.ownership_cost=550000;
    fd.warranty=5;
    fd.seat_capacity=4;
    fd.fuel_type="Diesel";
    fd.model_type="F22";
    
    bajaj bj;

    bj.mileage=95.26;
    bj.price=250000;
    bj.num_of_cylinders=3;
    bj.num_of_gears=4;
    bj.fuel_tank_size=45;
    bj.cooling_type="Oil";
    bj.wheel_type="Alloys";
    bj.make_type="Road Bike";
    
    tvs ts;

    ts.mileage=101.45;
    ts.price=350000;
    ts.num_of_cylinders=4;
    ts.num_of_gears=6;
    ts.fuel_tank_size=65;
    ts.cooling_type="Liquid";
    ts.wheel_type="Spokes";
    ts.make_type="Mountain Bike";

    cout<<"\n\n------------- Audi -------------\n"<<endl;
    ai.a();
    ai.b();
    ai.d();
    
    cout<<"\n\n------------- Ford -------------\n"<<endl;
    fd.a();
    fd.b();
    fd.e();
    
    cout<<"\n\n------------- Bajaj -------------\n"<<endl;
    bj.a();
    bj.c();
    bj.f();
    
    cout<<"\n\n------------- TVS -------------\n"<<endl;
    ts.a();
    ts.c();
    ts.g();
    
    return 0;

}
