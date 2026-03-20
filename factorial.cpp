#include<iostream>
using namespace std;

int fact(int number){
    if(number==1) return 1;

    return number*fact(number-1);
}
int main(){

    int num=4;
    int num_factorial=fact(num);
    cout<<num_factorial;
    return 0;
}