// U0924014劉承皓版權所有，請勿抄襲
//9.19 "Date.h"
#include<bits/stdc++.h>
using namespace std;
class Date{
	public:
		Date(int d,int y){
			if(d>0&&d<=365){
				day_3=d;
			}else{
				throw invalid_argument("date must be 1-365");
			}
			year=y;
			count=1;
		}
		Date(int m,int d,int y){
			if(m<=12&&m>0){
				month=m;
			}else{
				throw invalid_argument("month must be 1-12");
			}
			day_2=checkDay(d);
			year=y;
			count=2;
		}
		Date(string m,int d,int y){
			string monthPerYear[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
			for(int i=0;i<12;i++){
				if(m==monthPerYear[i]){
					month=i+1;
					strMonth=m;
				}
			}
			day_2=checkDay(d);
			year=y;
			count=3;
		}
		int checkDay(int x){
			int monthDay[13]{0,31,28,39,30,31,30,31,31,30,31,30,31};
			if(x>0&&x<=monthDay[month]){
				return x;
			}
			if(month==2&&x==29&&(year%400==0||(year%4==0&&year%100!=0))){
				return x;
			}
			throw invalid_argument("Invalid day for current month and year");
		}
		void toString(){
			if(count==1){
				cout<<setw(3)<<setfill('0')<<day_3<<"  "<<year<<"\n";
			}else if(count==2){
				cout<<setw(2)<<setfill('0')<<month<<'/'<<setw(2)<<setfill('0')<<day_2<<'/'<<year%100<<"\n";
			}else if(count==3){
				cout<<strMonth<<" "<<day_2<<", "<<year<<"\n";
			}
		}
	private:
		int month,day_3,day_2,year;  //day_3為可能是三位元的天數
		int count;		//count控制輸出時的型態
		string strMonth;
};
