#include<iostream>
using namespace std;
int main()

{
    int a,b;
    int and_op,or_op,EXOR_op,NOT,left_shift,right_shift;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    and_op = a&b;
    cout<<"AND operator: "<<and_op<<endl;

    or_op = a|b;
    cout<<"OR operator: "<<or_op<<endl;

    EXOR_op = a^b;
    cout<<"EXOR_op operator: "<<EXOR_op<<endl;

    NOT = ~a;
    cout<<"NOT operator"<<NOT<<endl;

    left_shift = a<<2;
    cout<<"left shift: "<<left_shift<<endl;

    right_shift = a>>2;
    cout<<"right shift: "<<right_shift<<endl;
}