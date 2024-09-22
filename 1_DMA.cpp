#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    *a = 10;
    cout << *a << endl;

    float *f = new float;
    *f = 1.11 ;
    cout << *f << endl;

    int *arr = new int[10];
    for(int i =0; i<10; i++){
        arr[i] = i+1 ;
    }
    for(int i=0; i< 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}