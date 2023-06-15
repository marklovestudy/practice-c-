//#include<iostream>
//using namespace std;

//int main()
//{
//	int i,j;
//	for (i=1;i<=3;i++)
//	{
//		for (j=1;j<=5;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	} 
//	return 0;
//}

//奇怪的图形 
#include<iostream>
#include<iomanip>
using namespace std;

//int main()
//{
//	int i,j;
//	for(i=1;i<=5;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main()
//{
//	int i,j;
//	for (i=1;i<=5;i++)
//	{
//		for (j=1;j<=2*5-1;j++)
//		{
//			if (5-i<j && j<5+i)
//			{
//				cout<<"*";
//			}
//			else
//			{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//int main()
//{
//	int i,j;
//	for (i=1;i<=5;i++)
//	{
//		cout<<setw(41-i)<<" ";
//		for (j=1;j<=2*i-1;j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//九九乘法表
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int i,j;
//	for (i=1;i<=9;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			cout<<j<<"*"<<i<<"="<<setw(2)<<i*j<<"  ";
//		}
//		cout<<endl;
//	}
// } 

//鸡兔同笼  35头，94足
#include<iostream>
using namespace std;

//int main()
//{
//	int ji,tu;
//	for (ji=1;ji<=34;ji++)
//	{
//		for(tu=1;tu<=23;tu++)
//		{
//			if(ji+tu==35 && ji*2+tu*4==94)
//			{
//				cout<<"鸡："<<ji<<"  "<<"兔子："<<tu;
//				break;
//			}
//		}
//	}
//	return 0;
// } 

//int main()
//{
//	int ji,tu;
//	for (ji=1;ji<=34;ji++)
//	{
//		tu=35-ji;
//		if(ji*2+tu*4==94)
//		{
//			cout<<"鸡："<<ji<<"  "<<"兔子："<<tu;
//			break;
//		}
//	}
//	return 0;
// } 

//百钱买百鸡

//#include<iostream>
//#include<iomanip>
//using namespace std;

//int main()
//{
//	int g,m,x;
//	cout<<setw(5)<<"公鸡"<<setw(5)<<"母鸡"<<setw(5)<<"小鸡"<<endl;
//	for (g=1;g<=33;g++)
//	{
//		for(m=1;m<=49;m++)
//		{
//			for(x=1;x<=98;x++)
//			{
//				if(g+m+x==100 && g*3+m*2+x/3==100 && x%3==0)
//				{
//					cout<<setw(5)<<g<<setw(5)<<m<<setw(5)<<x<<endl;
//				}
//			 } 
//		}
//	 } 
//	return 0;
// } 

//int main()
//{
//	int g,m,x;
//	cout<<setw(5)<<"公鸡"<<setw(5)<<"母鸡"<<setw(5)<<"小鸡"<<endl;
//	for (g=1;g<=33;g++)
//	{
//		for(m=1;m<=49;m++)
//		{
//			for(x=3;x<=98;x+=3)
//			{
//				if(g+m+x==100 && g*3+m*2+x/3==100)
//				{
//					cout<<setw(5)<<g<<setw(5)<<m<<setw(5)<<x<<endl;
//				}
//			 } 
//		}
//	 } 
//	return 0;
// } 

//int main()
//{
//	int g,m,x;
//	cout<<setw(5)<<"公鸡"<<setw(5)<<"母鸡"<<setw(5)<<"小鸡"<<endl;
//	for (g=1;g<=33;g++)
//	{
//		for(m=1;m<=49;m++)
//		{
//			x=100-g-m;
//			if(g*3+m*2+x/3==100 && x%3==0)
//			{
//				cout<<setw(5)<<g<<setw(5)<<m<<setw(5)<<x<<endl;
//			}
//			
//		}
//	 } 
//	return 0;
// } 

//三位数的各位之和等于各位之积
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int ge,shi,bai;
//	for (shi=1;shi<=7;shi++)
//	{
//		for (bai=shi+1;bai<=8;bai++)
//		{
//			for (ge=bai+1;ge<=9;ge++)
//			{
//				if (ge+shi+bai==ge*shi*bai)
//				{
//					cout<<bai<<shi<<ge;
//				}
//			}
//		}
//	}
//	return 0;
// } 

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a1,a2,a3,a4,n;
//	for(a4=0;a4<=1;a4++)
//		for(a3=0;a3<=1;a3++)
//			for(a2=0;a2<=1;a2++)
//				for(a1=0;a1<=1;a1++)
//				{
//					n=a4*8+a3*4+a2*2+a1;
//					cout<<a4<<a3<<a2<<a1<<"b  "<<n<<endl;
//				}
//	return 0;
//}

////模拟超市
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int p,sumone,sum,n;		//p每件商品价格，sumone一位同学总消费，sum所有学生总消费,n是消费人数，0结束一个人消费，-1结束一天消费。 
//	n=0;
//	sum=0;
//	do
//	{
//		cout<<"请消费："<<endl; 
//		sumone=0;
//		do
//		{
//			cin>>p;
//			sumone+=p;
//		} 
//		while(p && p!=-1);
//		n+=1;
//		sum+=sumone;
//		cout<<"这位同学消费："<<sumone<<endl;
//	}
//	while(p!=-1);
//	cout<<"合计消费："<<sum<<"  合计人数："<<n<<endl;
//	return 0;
// } 

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i,n;
//	cin>>n;
//	cout<<n<<"=";
//	for (i=2;n!=1;i++)
//	{
//		while(n%i==0)
//		{
//			cout<<i;
//			n/=i;
//			if(n!=1)
//			{
//				cout<<"*";
//			}
//		}
//	}
//	return 0;
}
