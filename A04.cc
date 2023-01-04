#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;

	int x=0,count=0;
	while(N>0){
		x=N%2+x*10;
		N/=2;
		count++;
	}

	N=0;
	for(int i=0;i<count;i++){
		N=x%10+N*10;
		x/=10;
	}

	printf("%010d",N);

/*		//教科書の解
	int N;
	cin >>N;

	for(int x=9;x>=0;X--){
		int wari=(1<<x);	//2のx乗
		cout <<(N/x)%2<<endl;
	}
	
*/
}