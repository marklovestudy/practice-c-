//#include<iostream>
//using namespace std;

//ָ��ļ�ʹ�� 
//int main()
//{
//	int a,*p;
//	a=10;
//	p=&a;
//	cout<<*p<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char c1,*p1;
//	c1='a';
//	p1=&c1;
//	(*p1)++;
//	cout<<c1<<endl;
//	cout<<(*p1)++<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void toupiao(int b[],int n)
//{
//	int x,i;
//	for (i=1;i<=n;i++) 
//	{
//		cout<<i<<":";
//		cin>>x;
//		b[x]++;
//	}
//}
//
//int main()
//{
//	int i,a[6],n,*p;
//	cout<<"������ʵ��������";
//	cin>>n;
//	for (p=a;p<=a+5;p++)
//	{
//		*p=0;
//	}
//	p=a;
//	toupiao(p,n);
//	for (i=0;i<=5;i++)
//	{
//		switch(i)
//		{
//			case 0:
//				cout<<"��Ȩ:"<<a[i]<<endl;
//				break;
//			default:
//				cout<<i<<"��Ʊ����"<<a[i]<<endl;
//				break; 
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[4]={55,66,77,88};
//	int i,sum=0,*p;
//	p=a;
//	for(i=0;i<4;i++)
//	{
//		sum+=*(p+i);
//	}
//	cout<<"�ܷ�Ϊ��"<<sum;
//}

//��Ĵ�����ʹ�� 
#include<iostream>
#include<string>
using namespace std;

class artist
{
	private:
		string name;
		int age;		
		void pp()
		{
			cout<<name<<"��˧"<<endl;
			cout<<"���䣺"<<age<<endl;
		}
			
	public:
		string country;
		void set(string ss,int n)
		{
			name=ss;
			age=n;
			pp();	//pp()Ϊ���ں��������������ڵ��á� 
		}
		
		void display()
		{
			cout<<"***********************"<<endl;
			cout<<"С����������"<<name<<endl;
			cout<<"С���������䣺"<<age<<endl;
			cout<<"......................"<<endl; 
		}
};

int main()
{
	artist st1,st2;
	st1.set("mark",38);
	//cin>>st1.name;	//���ⲻ�ܵ��á� 
	st1.display();
	//st1.pp();		//������ò��У���Ϊpp()���ڲ�������ֻ�����ڵ��á� 
	st2.set("weiwei",29);
	st2.display();
	return 0;
}

//#include<iostream>
//using namespace std;
//
//class student
//{
//	public:
//		char name[100];
//		int age;
//};
//
//int main()
//{
//	student st1;
//	cout<<"putin name and age:";
//	cin>>st1.name>>st1.age;
//	cout<<"name:"<<st1.name<<"   age:"<<st1.age<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class date
//{
//	private:
//	public:
//		int year,month,day;
//		void display()
//		{
//			cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl; 
//		}
//};
//
//int main()
//{
//	date date1;
//	cin>>date1.day;
//	cin>>date1.month;
//	cin>>date1.year;
//	date1.display();
//	return 0;
//}
