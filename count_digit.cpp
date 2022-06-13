#include <iostream>
using namespace std;
int main() {
    int count=0;
    int n;
    cin>>n;
while(n!=0){
    n=n/10;
     count++;
}
       cin>>n;


 cout<<count;
}

//OUTPUT
//31247
//The number of didgits will be 5
