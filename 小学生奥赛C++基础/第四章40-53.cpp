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
//	cout<<"������һ�����ˣ�"<<t<<endl;
//	return 0;
//}

////����С������ 
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
//	cout<<s<<"�Ƕ�������С��������";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////���Լ��
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
//	cout<<n<<"is the max Լ��";
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

////�ǹȲ���
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
//	cout<<"���д���:"<<count<<endl;
//	return 0;
//}

////����Ч��
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


//��һ��С��λ�ж��ٸ� 
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

//������λ��,�����һ���ж����� 
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

//�����˷ֱ��1��2��4���ĳţ��������ٴγ��� 
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
////����һ��С���������Է����ķ�ʽ���1/8
//int main()
//{
//	double x,y;
//	int i,m,n,r,a,b;
//	cout<<"����һ��С����";
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
//	//�ҵ�m,n������Լ����
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
//	//nΪ���Լ��
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
//	//����һ��С�� 
//	do
//	{
//		cout<<"����һ��С��:";
//		cin>>x;
//	}
//	while(fabs(x-(int)x)<1e-10);
//	//�����С������������ֵ������a 
//	b=1;
//	y=x;
//	while(fabs(y-(int)y)>1e-10)
//	{
//		b*=10;
//		y=x*b;
//	}
//	a=y;
//	//�ҳ�����a�ͷ�ĸb�����Լ��������1����ٷ�������2��շתȡ�෨��
//	//����1����ٷ�
//	for (i=a;i>=1;i--)
//	{
//		if (a%i==0 && b%i==0)
//		{
//			j=i;  //ͬʱ������i�ǴӴ�С�ģ�����i�����Լ������ֵ��j,��������ҵ����Լ����һ��Ҫֹͣ������j����Ϊ1
//			break;  
//		}
//	} 
//	a/=j;
//	b/=j;
//	cout<<x<<"ת��Ϊ������"<<a<<"/"<<b<<endl;
//	return 0;
//}

//�������뱣����λС���� 
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
//	y=(int)(x*m+0.5);		//��һ���������룬����Ҫ��0.5 
//	y/=m;
//	cout<<x<<"����%dС�����ǣ�"<<y<<endl;
//	return 0; 
//}

