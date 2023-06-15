//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,t;
//	i=t=0;
//	while (1)
//	{
//		t+=1;
//		i+=3;
//		if (i>=17)
//		{
//			break;
//		}
//		t+=1;
//		i--;
//	}
//	cout<<"爬出来一共花了："<<t<<endl;
//	return 0;
//}

////求最小公倍数 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x,y,s,i=1;
//	cin>>x>>y;
//	if (x<y)
//	{
//		x=x^y;
//		y=x^y;
//		x=x^y;
//	}
//	s=x*i;
//	while (s%y!=0)
//	{
//		i++;
//		s=x*i;
//	}
//	cout<<s<<"是二数的最小公倍数。";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////最大公约数
//int main()
//{
//	int m,n,r;
//	cin>>m>>n;
//	if (m<n)
//	{
//		m=m^n;
//		n=m^n;
//		m=m^n;
//	}
//	r=m%n;
//	while(r!=0)
//	{
//		m=n;
//		n=r;
//		r=m%n;
//	}
//	cout<<n<<"is the max 约数";
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int x,y,n;
//	cin>>x>>y;
//	if (x<y)
//	{
//		x=x^y;
//		y=x^y;
//		x=x^y;
//	}
//	n=y;
//	while(!(x%n==0 && y%n==0))
//	{
//		n--;
//	}
//	cout<<n;
//	return 0;
//}

////角谷猜想
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long long x,count = 0;
//	cout<<"x=";
//	cin>>x;
//	while(x!=1)
//	{
//		cout<<x<<"-->";
//		if (x%2==1)
//		{
//			x=3*x+1;
//		}
//		else
//		{
//			x=x/2;
//		}
//		count+=1;
//	}
//	cout<<x<<endl;
//	cout<<"运行次数:"<<count<<endl;
//	return 0;
//}

////蝴蝶效益
// #include<iostream>
// using namespace std;
// 
// int main()
// {
// 	int i=1;
// 	double n1,n2;
// 	n1=0.99;
// 	n2=1.01;
// 	while (i<=15)
// 	{
// 		n1*=n1;
// 		n2*=n2;
// 		cout<<i<<"    "<<n1<<"    "<<n2<<endl;
// 		i++;
//	}
//	return 0;
// }

#include<iostream>
//using namespace std;
//int main()
//{
//	int n,x,y,d,r;
//	cin>>n>>x>>y;
//	while(n)
//	{
//		d=x/y;
//		r=x%y;
//		cout<<d;
//		x=r*10;
//		n--;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	double x,y;
//	long long num=1;
//	cin>>x;
//	do
//	{
//		num*=10;
//		y=x*num;
//	}
//	while(fabs(y-(int)y)>1e-9);
//	cout<<y;
//	return 0;
//}


//数一数小数位有多少个 
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char ch;
//	bool flag=false;
//	int count=0;
//	while ((ch=getchar()) != '\n')
//	{
//		if (flag)
//		{
//			if ('0'<=ch && ch<='9')
//			{
//				count++;
//			}
//			else
//			{
//				count=0;
//				break;
//			}
//		}
//		if (ch=='.') flag=true;
//	}
//	cout<<"total:"<<count;
//	return 0;
//}

//书香座位数,求最后一排有多少人 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int sum=0;
//	int i=1,x=15;
//	sum+=x;
//	do
//	{
//		cout<<i<<"  x="<<x<<"   sum="<<sum<<endl;
//		i++;
//		x+=2;
//		sum+=x;
//	}
//	while(sum<=315);
//	cout<<315-(sum-x);
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x=6;
//	while (1)
//	{
//		if ((x+6)%13==0 && (x-6)%12==0)
//		{
//			break;
//		}
//		x++;
//	}
//	cout<<x;
//	return 0;
//}

//int main()
//{
//	int x=0;
//	do
//	{
//		x++;
//	}
//	while(!((x+6)%13==0 && (x-6)%12==0));
//	cout<<x;
//	return 0;
//}

//三个人分别隔1秒2秒4秒拍撑，听到多少次撑声 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int time,t,n,g,f,count;
//	time=0;
//	t=n=g=count=1;
//	f=1;
//	do
//	{
//		f=0;
//		time++;
//		if (t<10)
//		{
//			f=1;
//			t++;
//		}
//		if (n<10 && time%2==0)
//		{
//			f=1;
//			n++;
//		}
//		if (g<10 && time%4==0)
//		{
//			f=1;
//			g++;
//		}
//		if (f==1) 
//		{
//			count++;
//		}
//	}
//	while(t+n+g<30);
//	cout<<count;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n,nike,glr,num=0;
//	n=0;
//	do
//	{
//		n++;
//		nike=(n-1)%20+1;
//		glr=(n-1)%30+1;
//		if (nike==glr) num++;
//	}
//	while (n<1000);
//	cout<<num;
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
////输入一个小数，把他以分数的方式输出1/8
//int main()
//{
//	double x,y;
//	int i,m,n,r,a,b;
//	cout<<"输入一个小数：";
//	cin>>x;
//	i=1;
//	do
//	{
//		i*=10;
//		y=x*i;
//	}
//	while(fabs(y-int(y))>1e-10);
//	if (i>y)
//	{
//		m=i;
//		n=y;
//	}
//	else
//	{
//		m=y;
//		n=i;
//	}
//	//找到m,n间的最大公约数。
//	cout<<m<<"  "<<n<<endl;
//	do
//	{
//		r=m%n;
//		if (r!=0)
//		{
//			m=n;
//			n=r;
//		}
//	}
//	while(r!=0);
//	//n为最大公约数
//	a=y/n;
//	b=i/n;
//	cout<<a<<"/"<<b<<endl;
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	double x,y;
//	int a,b,i,j;
//	//输入一个小数 
//	do
//	{
//		cout<<"输入一个小数:";
//		cin>>x;
//	}
//	while(fabs(x-(int)x)<1e-10);
//	//把这个小数化成整数赋值给分子a 
//	b=1;
//	y=x;
//	while(fabs(y-(int)y)>1e-10)
//	{
//		b*=10;
//		y=x*b;
//	}
//	a=y;
//	//找出分子a和分母b的最大公约数，方法1，穷举法，方法2：辗转取余法。
//	//方法1：穷举法
//	for (i=a;i>=1;i--)
//	{
//		if (a%i==0 && b%i==0)
//		{
//			j=i;  //同时整除，i是从大到小的，所以i是最大公约数。赋值给j,这个方法找到最大公约数就一定要停止，否则j最后会为1
//			break;  
//		}
//	} 
//	a/=j;
//	b/=j;
//	cout<<x<<"转化为分数后："<<a<<"/"<<b<<endl;
//	return 0;
//}

//四舍五入保留几位小数。 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	double x,y;
//	int n,m=1;
//	x=3.14159;
//	cout<<"n=";
//	cin>>n;
//	for (int i=1;i<=n;i++)
//	{
//		m*=10;
//	}
//	y=(int)(x*m+0.5);		//配一个四舍五入，所以要加0.5 
//	y/=m;
//	cout<<x<<"保留%d小数后是："<<y<<endl;
//	return 0; 
//}

