// to print the following pattern 
//6
//*	*	*	*	*	*	
//*	*	*	*	*	
//*	*	*	*	
//*	*	*	
//*	*	
//*	

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){  //to print the pattern in reverse
            cout<<"*\t";
        }
        cout<<endl;
    }
}
