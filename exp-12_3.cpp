//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-12

//Program-3
#include<iostream>
using namespace std;

class Num{
    public:

    int num1, num2;

    Num(int a, int b){
        num1=a;
        num2=b;
    }

    void display(){
        cout<<"Num-1: "<<num1<<endl<<"Num-2: "<<num2;
    }
};

int main(){

    Num n1(23,78);
    n1.display();

    return 0;
}