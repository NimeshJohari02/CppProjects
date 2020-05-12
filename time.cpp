#include<iostream>
using namespace std;
class time{
	int hrs,min,sec;
	public:
		int total_sec;
		void gettime(int h,int m,int s)
		{
			hrs=h;
			min=m;
			sec=s;
		}
		void puttime()
		{
			cout<<"time is "<<hrs<<":"<<min<<":"<<sec<<endl;
		}
		void convert(time t,char ch)
		{
			switch(ch)
			{
				case 'h':
					cout<<"Time is "<<t.hrs<<":"<<t.min<<":"<<t.sec<<endl;
					break;
				case 'p':
					cout<<"time in am/pm is "<<(t.hrs>12?(t.hrs-12):t.hrs)<<" "<<(t.hrs>12?cout<<"pm":cout<<"am")<<":"<<t.min<<":"<<t.sec<<endl;	
			}
		}
		void sum(time t1,time t2)
		{
			int h,m,s,sq,mq;
			sq=(t1.sec+t2.sec)/60;
			s=(t1.sec+t2.sec)%60;
			mq=(sq+t1.min+t2.min)/60;
			m=(sq+t1.min+t2.min)%60;
			h=mq+t1.hrs+t2.hrs;
			if(h>=24)
			h=h-24;
				cout<<"time is "<<h<<":"<<min<<":"<<sec<<endl;
		}
		
		int gethrs()
		{
			return hrs;
			
		}
		int getmin()
		{
			return min;
		}
		int getsec()
		{
			return sec;
		}
};
int main()
{
	time t1,t2;
	char choice;
	t1.gettime(5,13,27);
	t2.gettime(6,48,57);
	cout<<"h to convert to hras format and p for am format";
	cin>>choice;
	t2.convert(t2,choice);
	
	return 0;
}
