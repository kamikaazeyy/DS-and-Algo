//to rotate a number by k digits
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int nod=0;
    int num=n; //duplication of a number
    while(num!=0){
        num/=10;
        nod++;
    }
    k=k%nod; // if k exceeds the number of digits of the original number entered by the user
    if(k<0){ //this if block is used to print the rotation if the entered value of k is in negative.
      k+=nod;
    }
    int div=pow(10,k);
    int mult= pow(10,nod-k);
    int q=n/div;
    int r=n%div;
    int ans=(r*mult)+q;
    cout<<ans<<endl;
}

/*OUTPUT:
123
-4
231
*/
