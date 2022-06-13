#include <iostream>
using namespace std;
int main() {
    int n,reverse=0,rem;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n!=0){
       rem=n%10;//to find the last digit of the number
       reverse=reverse*10+rem;// to ad the lst digit into reverse so that it can become the first digit of our resulting variable
       n=n/10;//to update the number
    }
    cout<<reverse;
}

// OUTPUT
// enter the number
// 312467
// 764213
