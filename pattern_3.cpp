//to print the following pattern
        //*	
			//*	*	
		//*	*	*	
	//*	*	*	*	
//*	*	*	*	*	
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int stars=1;
    int spaces=n-1;
    for (int i=1;i<=n;i++){
       for(int j=1;j<=spaces;j++){
           cout<<"\t";
       } 
       for(int j=1;j<=stars;j++){
           cout<<"*\t";
       }
       cout<<endl;
       stars++;
       spaces--;
    }
}
