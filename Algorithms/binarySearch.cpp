#include <iostream>
using namespace std;
int main(){
    int n,search;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int s=0,e=n-1;
    cout<<"Enter the elements one by one in ascending order\n ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter search element: ";
    cin>>search;
    while(true){
        int mid=(s+e)/2;
        if(arr[mid]==search){
            cout<<"element found at index "<<mid;
            break;
        }
        if(arr[mid]>search){
            s=mid;
        }
        if(arr[mid]<search){
            e=mid;
        }
        if(mid==0){
            cout<<"element not found";
            break;
        }
    }
    return 0;
}