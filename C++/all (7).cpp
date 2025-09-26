//Taking string input:
// getline(cin,variable);
//int asci=static_cast<int>(c);
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1;
	int K;
	cin>>K;
	cin.ignore();
	getline(cin,s1);
	int max=0;
	char t;
	for(int i=0;i<s1.length();i++){
	    int asci=static_cast<int>(s1[i]);
	    if(max<asci){
	        max=asci;
	        t=s1[i];
	    }
	}
	cout<<t<<" ";
	cout<<max;

    return 0;
}
