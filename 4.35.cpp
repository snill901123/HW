// U0924014劉承皓版權所有，翻版必究 
//4.35
#include<bits/stdc++.h>
using namespace std;
int fac(int x);
double b(int n);
double c(int accuracy,int x);
int main(){
	//a 計算階乘
	int n;
	cout<<"輸入要計算階乘的數字"<<endl;
	cin>>n;
	cout<<n<<"!="<<fac(n)<<endl;
	
	//b  輸入精確度並估計e的值 
	double e;
	int accuracy;
	cout<<"輸入e的精確度"<<endl;
	cin>>accuracy;
	cout<<"e:"<<b(accuracy)<<endl;
	
	//c  輸入精確度並估計e^x的值  
	double e_x;
	int c_accuracy,c_x;
	cout<<"請輸入e^x的精確度"<<endl;
	cin>>c_accuracy;
	cout<<"請輸入x的"<<endl;
	cin>>c_x;
	cout<<"e^"<<c_x<<"="<<c(c_accuracy,c_x);
}

int fac(int x){
	int sum=1,count=1;
	while(count!=x&&x!=0){
		count++;
		sum*=count;
	}
	return sum;
}
double b(int n){
	double e_sum=1;
	for(int i=1;i<=n;i++){
		e_sum+=1.0/fac(i);
	}
	return e_sum;
}
double c(int accuracy,int x){
	double c_sum=1;
	for(int i=1;i<=accuracy;i++){
		c_sum+=double(pow(x,i))/fac(i);
	}
	return c_sum;
}
