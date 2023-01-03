#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin >>a.at(i);
	}

	bool flg=false;

	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			for(int k=j+1;k<N;k++){
				if(a.at(i)+a.at(j)+a.at(k)==1000){
					flg=true;
					break;
				}
			}
		}
	}

	if(flg){
		cout <<"Yes"<<endl;
	}else{
		cout <<"No"<<endl;
	}
}