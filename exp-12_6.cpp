//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-12

//Program-6
#include<iostream>
using namespace std;

int count=0;

class Car{
    public:
    Car()
    {
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }

    ~Car(){
        count--;
        cout<<"No. of objects destroyed: "<<count<<endl;
    }
};

int main(){

    Car c1, c2, c3;
    {
        Car c4, c5;
    }

    return 0;
}