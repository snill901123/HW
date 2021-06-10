// U0924014劉承皓版權所有，請勿抄襲
//9.19
#include<bits/stdc++.h>
#include"Date.h"
using namespace std;
int main(){
	cout<<"Test 1 : 256 2021\n";  //(a)1
	Date test1(256,2021);
	test1.toString();
	cout<<"\n";
	cout<<"Test 2 : 6/4/21\n";    //(a)2
	Date test2(6,4,21);
	test2.toString();
	cout<<"\n";
	cout<<"Test 3 : 3  17, 2021\n";	  //(a)3
	Date test3("March",17,2021);
	test3.toString();
	cout<<"\n";
	
	cout<<"Test 4 : Now time\n";    //  (c)  date of three formats
	time_t temp;  
	struct tm *nowTime;
	time(&temp);
	nowTime=localtime(&temp);
	Date myDay1(nowTime->tm_yday,nowTime->tm_year+1900);
	myDay1.toString();
	Date myDay2(nowTime->tm_mon+1,nowTime->tm_mday,nowTime->tm_year+1900);
	myDay2.toString();
	string everyMonth[12]{"January","February","March","April","May","June","July","August","September","October","November","December"};
	string strMon;
	for(int i=0;i<12;i++){
		if(nowTime->tm_mon==i){
			strMon=everyMonth[i];
		}
	}
	Date myDay3(strMon,nowTime->tm_mday,nowTime->tm_year+1900);
	myDay3.toString();
}
