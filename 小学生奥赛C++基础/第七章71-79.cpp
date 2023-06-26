//函数
//71函数的创建
//72函数的参数
//函数全局变量和局部变量，函数的返回值，函数的最大值最小值

//73丑数

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//bool choushu(int n)
//{
//	while (n%2==0)
//	{
//		n/=2;
//	}
//	while (n%3==0)
//	{
//		n/=3;
//	}
//	while (n%5==0)
//	{
//		n/=5;
//	}
//	return (n==1);
//}
//
//int main()
//{
//	int i;
//	for (i=1;i<=100;i++)
//	{
//		if (choushu(i))
//		{
//			cout<<setw(6)<<i;
//		}
//	}
//	return 0;
//} 

//回文数 
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//bool huiwen(int n)
//{
//	int sum=0,tem=n;
//	while(tem)
//	{
//		sum=sum*10+tem%10;
//		tem/=10;
//	}	
//	return (sum==n);
//}
//
//int main()
//{
//	int i;
//	for(i=100;i<=10000;i++)
//	{
//		if(huiwen(i))
//		{
//			cout<<setw(6)<<i;
//		}
//	}
//	return 0;
//}

//巴德巴赫猜想，任何一个n>=4的偶数都可以分成二个素数相加

//#include<iostream>
//using namespace std;

//int fun(int n)
//{
//	int i;
//	for (i=2;i<n;i++)
//	{
//		if (n%i==0)
//		{
//			break;
//		}
//	}
//	return i==n? 1:0;
//}
//
//int main()
//{
//	int re,i,n,x1,x2;
//	cout<<"输入一个数n>=4:"<<endl;
//	cin>>n;
//	for (i=2;i<n;i++)
//	{
//		re=fun(i);
//		if (re==1)
//		{
//			x1=i;
//			x2=n-x1;
//			re=fun(x2);
//			if (re==1)
//			{
//				cout<<n<<"="<<x1<<"+"<<x2<<endl;
//			}
//		}
//	}
//	return 0;
//} 

//#include<iostream>
//#include<cmath>
//using namespace std;
//int zs(int n)
//{
//	int i;
//	if (n==1) return 0;
//	if (n==2)
//	{
//		return 1;
//	}
//	else if (n>=3)
//	{
//		for(i=2;i<=sqrt(n);i++)
//		{
//			if (n%i==0)
//			{
//				return 0;
//			}
//		} 
//		return 1;
//	}
//}
//
//int main()
//{
//	int i,j,n;
//	do
//	{
//		cin>>n;
//	}
//	while (n<4);
//	for (i=4;i<=n;i+=2)
//	{
//		for (j=2;j<=i/2;j++)
//		{
//			if (zs(j) && zs(i-j))
//			{
//				cout<<i<<"="<<j<<"+"<<i-j<<endl;
//			}
//		}
//		if(j>i/2) cout<<"failed"<<endl;
//	}
//	return 0;
//}

//求n以内的各数和的和
//#include<iostream>
//using namespace std;
//
//int fun(int n)
//{
//	int sum=0,i;
//	for (i=1;i<=n;i++)
//	{
//		sum+=i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i,n,sum=0;
//	cin>>n;
//	for (i=1;i<n;i++) sum+=fun(i);
//	cout<<sum;
//	return 0;
//} 

//求三位数的超级素数，如733，73，7，都是素数。
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int zs(int n)
//{
//	int i;
//	if (n==1) return 0;
//	if (n==2) return 1;
//	if (n>=3)
//	{
//		for (i=2;i<=sqrt(n);i++)
//		{
//			if (n%i==0) return 0;
//		}
//		return 1;
//	}
//}
//
//int fun(int n)
//{
//	int re;
//	while (n)
//	{
//		if (zs(n)) n/=10;
//		else return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i,re,count=1;
//	for (i=100;i<=999;i++)
//	{
//		re=fun(i);
//		if (re)
//		{
//			cout<<"第"<<count<<"个超级素数："<<i<<endl;
//			count++;
//		}
//	}	
//	return 0;
//} 

//找出数组中第n大的数 
//#include<iostream>
//using namespace std;
//
//int fun(int *a,int sz,int n)
//{
//	int i,j,count;
//	for (i=0;i<sz;i++)
//	{
//		count=0;
//		for (j=0;j<sz;j++)
//		{
//			if (a[j]>a[i]) count++;
//		}	
//		if (count == n-1) return a[i];
//	}
//}
//
//int main()
//{
//	int a[10]={1,2,3,4,5,6,7,8,9,0},n;
//	cin>>n;
//	int re=fun(a,10,n);
//	cout<<"第"<<n<<"大的数为："<<re;
//	return 0;
//}

//输入五个数，把这五个数的排名打印出来 
//#include<iostream>
//using namespace std;
//int fun(int x,int a[])
//{
//	int i,n;
//	n=1;
//	for (i=0;i<5;i++)
//	{
//		if (a[i]>x) n++;
//	}
//	return n;
//}
//
//int main()
//{
//	int a[5],i;
//	for (i=0;i<5;i++) cin>>a[i];
//	for (i=0;i<5;i++) cout<<a[i]<<"   名次为："<<fun(a[i],a)<<endl;
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	int a[100],i,re,n;
//	re=rand()%100+1;
//	cout<<re<<endl;
//	for (i=0;i<100;i++) a[i]=i+1;
//	do
//	{
//		cout<<"输入您要猜的数："<<endl;
//		cin>>n; 
//		if (n>re) cout<<"大了"<<endl;
//		if (n<re) cout<<"小了"<<endl;
//	}
//	while (n!=re);
//	cout<<"猜对了，这个数是"<<n<<endl;
//	return 0; 
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n,i,l=1,r=100;
//	cin>>n;
//	do
//	{
//		i=(l+r)/2;
//		cout<<i<<endl;
//		if (i>n) r=i-1;
//		if (i<n) l=i+1;
//	}
//	while(i!=n);
//	return 0;
// } 

//#include<iostream>
//using namespace std;
//
//int seach(int a[],int len,double key)
//{
//	int l=0,r=len-1,mid;
//	do
//	{
//		mid=(l+r)/2;
//		cout<<a[mid]<<endl;
//		if (a[mid]==key) return 1;
//		else if (a[mid]>key) r=mid-1;
//		else if (a[mid]<key) l=mid+1;
//	}
//	while(l<=r);
//	return 0;
//}
//
//int main()
//{
//	const int MAX=100;
//	int a[MAX];
//	double n;
//	for (int i=0;i<MAX;i++) a[i]=i+1;
//	cout<<"n=";
//	do
//	{
//		cin>>n;
//	}
//	while(n<1 || n>100);
//	if (seach(a,MAX,n)) cout<<"找到了";
//	else cout<<"没找到";
//}

//#include<iostream>
//#include<string>
//#define MAX 5
//using namespace std;
//int seach(string name,string a[])
//{
//	int i;
//	for (i=0;i<MAX;i++)
//	{
//		if (name==a[i]) return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	string name,a[MAX]={"nike","make","mani","boli","glair"};
//	cin>>name;
//	if (seach(name,a)) cout<<"找到了"<<endl;
//	else cout<<"没找到"; 
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//void fun(int n)
//{
//	if (n==1) {
//	}
//	else fun(n-1);
//	cout<<setw(4)<<n;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	fun(n);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void fun(int n);
//
//int main()
//{
//	int n;
//	cin>>n;
//	fun(n);
//	return 0;
//}
//
//void fun(int n)
//{
//	if (n<10) cout<<n;
//	else 
//	{
//		cout<<n%10;
//		fun(n/10);
//	}
//}

//#include<iostream>
//using namespace std;
//
//int fun(int a[],int n)
//{
//	int t;
//	if (n==1) t=a[0];
//	else 
//	{
//		if (fun(a,n-1)>a[n-1]) t=fun(a,n-1);
//		else t=a[n-1];
//	}
//	return t;
//}
//
//int main()
//{
//	int a[5]={3,2,11,4,5};
//	int re=fun(a,5);
//	cout<<"最大数为："<<re;
//	return 0;
//}

#include<iostream>
using namespace std;

//int gcd(int a,int b)
//{
//	if (a==b)
//	{
//		return a;
//	}
//	else
//	{
//		if (a>b) return gcd(a-b,b);
//		else return gcd(b,b-a);
//	}
//}

//int gcd(int a,int b)
//{
//	if (b==0) return a;
//	else 
//	{
//		if (a>b) return gcd(b,a%b);
//		else return gcd(a,b%a);
//	}
//}
//
//int main()
//{
//	int x,y,z;
//	cin>>x>>y>>z;
//	x=gcd(x,y);
//	x=gcd(x,z);
//	cout<<x<<endl;
//	return 0;
//}
