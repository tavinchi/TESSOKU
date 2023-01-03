#include <bits/stdc++.h>
using namespace std;
int main(){
	int N,x;
	cin >>N>>x;
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin >>a.at(i);
	}

	bool flg=false;
	for(int i=0;i<N;i++){
		if(a.at(i)==x){
			flg=true;
		}
	}
	if(flg){
		cout <<"Yes"<<endl;
	}else{
		cout <<"No"<<endl;
	}
}