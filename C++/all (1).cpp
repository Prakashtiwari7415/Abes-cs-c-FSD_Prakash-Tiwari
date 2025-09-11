#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> vect(n);
	for(int i=0;i<n;i++){
	    cin>>vect[i];
	}
	int k=count(vect.begin(),vect.end(),1);
	vect.erase(vect.begin()+k);
	for(int i=0;i<n-1;i++){
	    cout<<vect[i]<<" ";
	}
	
}
