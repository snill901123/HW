// U0924014�B�ӵq���v�Ҧ��A½�����s 
//4.26�L�ϫ� 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){  //i��ܲĴX�C 
		if(i==1||i==n){
			for(int a=1;a<=n;a++){  //�L�W��ɻP�U��ɪ��j�� 
				cout<<"*";
			}
			cout<<endl;
		}else{
			cout<<"*"; //�Y 
			for(int b=1;b<=n-2;b++){  //�L�Ů檺�j�� 
				cout<<" ";
			}
			cout<<"*"<<endl; //�� 
		}
	}
}
