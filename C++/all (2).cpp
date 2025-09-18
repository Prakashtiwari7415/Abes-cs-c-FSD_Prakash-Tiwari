// 2d vector representattion:                               
//   vector<vector<int>> mat(N,vector<int>(M));(N-rows,M-coloumn)
// 1d vector- vector<int> mat(N);
// Insering an element:
//  mat[row_no.].insert(mat[row_no].begin()+indx,val);
//for(auto row:mat)
//    for(auto num:row)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,M;
	cin>>N;
	cin>>M;
	vector<vector<int>> mat(N,vector<int>(M));
	for(int i=0;i<N;i++){
	    for(int j=0;j<M;j++){
	        cin>>mat[i][j];
	    }
	}
	for(int i=0;i<N;i++){
	   int x= accumulate(mat[i].begin(),mat[i].end(),0);
	   int m=*max_element(mat[i].begin(),mat[i].end());
	   int mi=*min_element(mat[i].begin(),mat[i].end());
	   cout<<x<<" ";
	   cout<<m<<" ";
	   cout<<mi<<" "<<endl;
	}
	

}
