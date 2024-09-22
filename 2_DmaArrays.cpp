#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
     for(int i =0; i<10; i++){
        arr[i] = i+1 ;
    }
    for(int i=0; i< 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
