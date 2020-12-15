#include<iostream>
using namespace std;

int main(){
    int num=1, x=0, y=0;
    while(num!=0){
    cout << "Enter an integer: ";
    cin >> num;
    if(num%2==0 and num!=0){
        x++;
    }else if(num!=0){

        y++;
    }
    }
    cout << "#Even numbers = " << x << "\n";
    cout << "#Odd numbers = " << y;
    return 0;
}