//#include<iostream>
//using namespace std;

//int main()
//{
//	int i;
//	long long n=1;
//	for(i=1;i<=64;i++)
//	{
//		n*=2;
//		cout<<i<<"  "<<n<<endl;
//	}
//	return 0;
//}

//int main()
//{
//	char i;
//	for (i='a';i<='z';i++)
//		cout<<i<<' ';
//	cout<<endl;
//	for (i='Z';i>='A';i--)
//		cout<<i<<' ';
//	return 0;
//}

//int main()
//{
//	char n;
//	n='a';
//	n+=3;
//	cout<<n<<' ';
//	return 0;
// } 

//int main()
//{
//	int n,m,num;
//	cin>>num;
//	n=num;
//	m=0;
//	for(;n;)
//	{
//		m=m*10+n%10;
//		n/=10;
//	}
//	if (m==num)
//		cout<<"yes:"<<num;
//	else
//		cout<<"no:"<<num;
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int i,a1,a2,a3;
//	a1=a2=1;
//	cout<<setw(5)<<a1;
//	cout<<setw(5)<<a2;
//	for(i=3;i<=10;i++)
//	{
//		a3=a1+a2;
//		cout<<setw(5)<<a3;
//		a1=a2;
//		a2=a3;
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	char shelf;
//	for(i=1;i<=4;i++)
//		if ((i!=1)+(i==3)+(i==4)+(i!=4)==3)
//			break;
//	shelf='A'+i-1;
//	cout<<shelf;
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;

//int main()
//{
//	int x,y,symbol,ans,tem;
//	int i,score=0,n=10;
//	srand(time(0));
//	for (i=0;i<10;i++)
//	{
//		x=rand()%9+1;
//		y=rand()%9+1;
//		if (rand()%2==0)
//			{
//			symbol=x+y;
//			cout<<x<<"+"<<y<<endl;
//			}
//		else
//			{
//			x>y? symbol=x-y:symbol=y-x;
//			cout<<x<<"差"<<y<<endl;
//			}
//		cin>>ans;
//		if (ans==symbol)
//		{
//			score+=10;
//		}
//	}
//	cout<<"最后得分为："<<score<<endl;
//	return 0;
//}
