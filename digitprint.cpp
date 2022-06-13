#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int count=0;
    int n;
    cin>>n;
    int num =n; //the original value of the number will be gone or become xero while counting the digits so it is stored in a duplicate variable 
while(n!=0){
    n=n/10;
    count++;
  
}
int div=pow(10,count-1);
while(div!=0){
    int q=num/div;
    int r=num%div;
    cout<<q<<endl;
    num=r;
    div=div/10;
}
}
/*OUTPUT:
31427
3
1
4
2
7*/
