//Taking string input:
// getline(cin,variable);
//int asci=static_cast<int>(c);
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1;
	int N;
	int M;
	int K;
	cin>>K;
	cin>>N;
	cin>>M;
	cin.ignore();
	getline(cin,s1);
	int count=0;
	for(int i=0;i<s1.length();i++){
	    int asci=static_cast<int>(s1[i]);
	    if(asci>=N &&asci<=M){
	        count++;
	    }
	}
	cout<<count;

}
