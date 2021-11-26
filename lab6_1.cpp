#include<iostream>
using namespace std;
int main(){
    int N,even=0,odd=0; 
    while(N!=0){
        cout << "Enter an integer: ";
        cin>>N;
        if(N%2==0 && N!=0){
            even++;
        }else if(N%2!=0){
            odd++;
        }
    }
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd<<endl;
    return 0;
}
