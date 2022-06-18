//to find out the prime factors of a number.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int div=2;div*div<=n;div++){
        while(n%div==0){
            n/=div;
            cout<<div<<" ";
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }

}
