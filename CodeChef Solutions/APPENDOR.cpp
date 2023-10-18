#include <iostream>
using namespace std;

int main() {
	int T,N,X,Y;
	cin>>T;
	for(int i=0;i<T;i++){
	    int temp=0;
	    cin>>N>>Y;
	    int arr[N];
	   for(int i=0;i<N;i++){ cin>>arr[i]; }
	   for(int i=0;i<N;i++){ temp=(temp|arr[i]); }
	   for(int i=0;i<=Y;i++){
        X=-1;
	       if((temp|i)==Y){
	           X=i;
	           break;
	       }
	   }
	       cout<<X<<endl; 
	}
	return 0;
}
