// U0924014�B�ӵq���v�Ҧ��A½�����s 
//5.15�L�T���� 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"��J�T���Ϊ����"<<endl; 
	cin>>n;
	//a
	cout<<"----a----"<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	
	//b
	cout<<endl<<"----b----"<<endl;
	cout<<"��J�T���Ϊ����"<<endl; 
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	
	//c
	cout<<endl<<"----c----"<<endl;
	cout<<"��J�T���Ϊ����"<<endl; 
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int a=2;a<=i;a++){
			cout<<" ";
		}
		for(int j=1;j<=n-i+1;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	
	//d
	cout<<endl<<"----d----"<<endl;
	cout<<"��J�T���Ϊ����"<<endl; 
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int a=1;a<=n-i+1;a++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<'*';
		}
		cout<<endl;
	}
}
