import java.util.*;
public class Main{
	public static void main(String[]argv){
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int[]month=new int[4]=186,386,586,986;
		double[]perSec=new double[4]=0.09,0.08,0.07,0.06;
		double[]discount=new double[4]=0.8,0.7,0.6,0.5;
		for(int i=0;i<4;i++){
			if(a==month[i]){
				double money=b*perSec[i];
				if(money<=a){
					System.out.println(a);
				}else{
					money*=discount[i];
					System.out.println(money);
				}
			}
		}
	}
}
