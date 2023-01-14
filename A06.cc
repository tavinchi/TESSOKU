#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=(n);i++)

int main(){
	int N,Q;
	cin >>N>>Q;
	vector<int> a(N+1);
	rep(i,N) cin >>a[i];
	vector<int> L(Q+1);
	vector<int> R(Q+1);
	rep(i,Q) cin >>L[i]>>R[i];

	vector<int> sum(N+1);
	sum.at(0)=0;
	rep(i,N){
		sum[i]=a[i]+sum[i-1];
		a[i]=sum[i];	//いらん
	}

	rep(i,Q){
		cout <<sum[R[i]]-sum[L[i]-1]<<endl;
	}	
}