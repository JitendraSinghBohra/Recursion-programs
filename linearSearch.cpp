#include<iostream>
using namespace std;

//linear search using recursion
//time complexity: O(n)
//space complexity: O(n)  due to recursion call stack which stores fumction calls.

int linear_search(int *arr,int size,int key){
    //base case
    if(size==0) return 0;

    if(arr[0]==key) return 1;

    return linear_search(arr+1,size-1,key);
}

int main(){
    int arr[]={1,2,3,4,5,6};

    cout<<linear_search(arr,6,3);
}