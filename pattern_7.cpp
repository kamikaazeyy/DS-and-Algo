// to print the following pattern
/*
*	
	*	
		*	
			*	
				*	
        */
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){//the star will be printed in the ith row of the ith column
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}
