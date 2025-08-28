//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-12

//Program-1
#include<iostream>
using namespace std;

class Marks{
    public:

    int MTT;
    int DCLD;
    int EDC;
    int NT;
    int SS;

    Marks(){
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
};

int main(){

    Marks m1;

    return 0;
}