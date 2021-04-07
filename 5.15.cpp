// U0924014劉承皓版權所有，翻版必究 
//5.15印三角形 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"輸入三角形的邊長"<<endl; 
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
	cout<<"輸入三角形的邊長"<<endl; 
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<'*';
		}
		cout<<endl;
	}
	
	//c
	cout<<endl<<"----c----"<<endl;
	cout<<"輸入三角形的邊長"<<endl; 
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
	cout<<"輸入三角形的邊長"<<endl; 
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
