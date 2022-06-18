//The main motiv of this problem is to find out the number of bulbs that will be left on after the final fluctuation
//Which will be the perfect squares: They are the numbers which have the odd number of factors for example 36.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i*i<=n;i++){
        cout<<i*i<<endl;
    }
}
