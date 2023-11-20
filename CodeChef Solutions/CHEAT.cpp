//Dracula eats
 #include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    
	    for(int i=2;i<=n;i+=7){
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

