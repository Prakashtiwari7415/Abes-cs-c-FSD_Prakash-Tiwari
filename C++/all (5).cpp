//Taking string input:
// getline(cin,variable);
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1;
	char s2;
	vector<char> s3;
	int N;
	getline(cin,s1);
	cin>>s2;
	cin>>N;
	int i=0;
	int count=0;
	while(i<s1.length()){
	    s3.push_back(s1[i]);
	    count++;
	    if(count==N){
	        s3.push_back(s2);
	        count=0;
	    }
	    i++;
	}
	for(auto x:s3){
	cout<<x;
	}

}
