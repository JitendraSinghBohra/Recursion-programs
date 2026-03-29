#include<iostream>
using namespace std;

int fact(int number){
    if(number==1) return 1;

    return number*fact(number-1);
}
int main(){
    int num1=6;
    int num=4;
    int num_factorial=fact(num1);
    cout<<num_factorial;
    return 0;
}