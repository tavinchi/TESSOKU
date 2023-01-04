#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >>N;

	for(int x=9;x>=0;x--){
		int wari=(1<<x);
		cout << (N/wari)%2;
	}

/*		//教科書の解
	int N;
	cin >>N;

	for(int x=9;x>=0;X--){
		int wari=(1<<x);	//2のx乗
		cout <<(N/x)%2<<endl;
	}
	
*/
}