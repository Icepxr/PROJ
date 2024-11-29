#include<iostream>
using namespace std;

int main(){
    int check=0,x,y=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
            check++;
        }else{
            y++;
        }
    cout << "Enter an integer: ";
    cin >> x;

    }
    cout << "#Even numbers = "<<check<<endl;

    cout << "#Odd numbers = "<<y;
    return 0;
}
