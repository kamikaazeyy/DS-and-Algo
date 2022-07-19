// to implement the linear search in an array

#include <iostream>

using namespace std;
int LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    cout<<LinearSearch(arr,n,k)<<endl;

    return 0;
}
