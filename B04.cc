#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;

	int x=N,count=0;
	while(N>0){
		N/=10;
		count++;
	}

	int ans=0;
	for(int i=0;i<count;i++){
		int kake=(1<<i);	//2のi乗
		ans+=x%10*kake;
		x/=10;
	}

	cout <<ans<<endl;
}