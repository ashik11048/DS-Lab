#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int sum=0, result[4];
    for(int i=0; i<4; i++){
        sum+=arr[i];
        result[i]=sum;
    }
    for(int i=0; i<4; i++){
       cout<< result[i]<<" ";
    }
}
