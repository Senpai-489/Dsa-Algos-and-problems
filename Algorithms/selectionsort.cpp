#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//selection sort
int main() {
    int n,minIndex;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
     minIndex=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
          minIndex=j;
        }
       
      }
       swap(arr[minIndex],arr[i]);
    }

    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}