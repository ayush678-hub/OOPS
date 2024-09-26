#include<iostream>
using namespace std;
class TollBooth{
    unsigned int total_no_of_cars;
    double total_amount;
    public:
    TollBooth(){
        total_no_of_cars=0;
        total_amount=0;
    }
    void payingcar(){
        total_no_of_cars++;
        total_amount+=0.5;
    }
    void nonpaycar(){
        total_no_of_cars++;
        total_amount=0.0;
    }
    void display(){
        cout<<"Total number of cars :"<<total_no_of_cars<<endl;
        cout<<"Total amount of money collected :"<<total_amount<<endl;
    }
};
int main(){
    TollBooth a;
    TollBooth();
    int key;
    cout<<"Enter the ESC key to count the number of cars and total amount : ";
    cin>>key;
    if(key=='27'){

    }
    a.display();
    return 0;
}