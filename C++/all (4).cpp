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
	int N,M,K;
	cin>>N;
	cin>>M;
	cin>>K;
	int j=0;
	vector<vector<int>> mat(N,vector<int>(M));
	for(int i=0;i<N;i++){
	    for(int j=0;j<M;j++){
	        cin>>mat[i][j];
	    }
	}
	for(int i=0;i<N/2;i++){
	   swap(mat[i][j+3],mat[N-1-i][j]);
	   swap(mat[i][j+4],mat[N-1-i][j+1]);
	}
	for(int i=0;i<N;i++){
	    for(int j=0;j<M;j++){
	        cout<<mat[i][j]<<" ";
	    }
	    cout<<endl;
	}
	

}
