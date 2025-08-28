//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-12

//Program-2
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Marks{
    public:

    int MTT;
    int DCLD;
    int EDC;
    int NT;
    int SS;

    Marks();
    void display();
};

Marks::Marks(){
     cout<<"Enter MTT marks:";
        cin>>MTT;

        cout<<"Enter DCLD marks:";
        cin>>DCLD;

        cout<<"Enter EDC marks:";
        cin>>EDC;

        cout<<"Enter NT marks:";
        cin>>NT;

        cout<<"Enter SS marks:";
        cin>>SS;
}

void Marks::display(){
    cout<<endl<<"MTT: "<<MTT<<"\n"<<"DCLD: "<<DCLD<<"\n"<<"EDC: "<<EDC<<"\n"<<"NT: "<<NT<<"\n"<<"SS: "<<SS;
}

int main(){

    Marks m1;
    m1.display();

    return 0;
}