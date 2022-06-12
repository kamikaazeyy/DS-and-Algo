//to print fibonacci number till n 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the limit";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        cout<<a<<endl;
        int c=a+b;
        a=b;
        b=c;
    }

    return 0;
}

/*OUTPUT:
These are the first 10 fibonacci numbers
0
1
1
2
3
5
8
13
21
34
55
*/
