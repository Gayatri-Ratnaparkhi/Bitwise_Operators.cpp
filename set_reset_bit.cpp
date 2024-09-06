#include<iostream>
using namespace std;
int main()
{
    int bit_set,bit_reset;
    int i;
    int set, reset;

    cout<<"Enter the number to be set or reset: ";
    cin>>i;

    cout<<"Enter the bit to be changed: ";
    cin>>bit_set>>bit_reset;

    set = i|(1<<bit_set);                         //using or operator to convert from 0 to 1
    reset = i&(~(1<<bit_reset));                    //using and operator to convert from 1 to 0

    cout<<"set: "<<set<<endl;
    cout<<"Reset: "<<reset<<endl;
}