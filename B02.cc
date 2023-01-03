#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >>a>>b;
	bool flg=false;
	for(int i=a;i<=b;i++){
		if(100%i==0){
			flg=true;
			break;
		}
	}

	if(flg){
		cout <<"Yes"<<endl;
	}else{
		cout <<"No"<<endl;
	}
}