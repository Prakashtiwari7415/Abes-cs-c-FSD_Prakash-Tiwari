#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
	int n;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<3;i++){
	    
	    swap(arr[i],arr[i+3]);
	}
	for(int i=6;i<n-3;i++){
	    swap(arr[i],arr[i+3]);
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	

}
