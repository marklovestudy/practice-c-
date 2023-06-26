//#include<iostream>
//using namespace std;

//指针的简单使用 
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
//	cout<<"请输入实到人数：";
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
//				cout<<"弃权:"<<a[i]<<endl;
//				break;
//			default:
//				cout<<i<<"号票数："<<a[i]<<endl;
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
//	cout<<"总分为："<<sum;
//}

//类的创建和使用 
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
			cout<<name<<"很帅"<<endl;
			cout<<"年龄："<<age<<endl;
		}
			
	public:
		string country;
		void set(string ss,int n)
		{
			name=ss;
			age=n;
			pp();	//pp()为类内函数，可以在类内调用。 
		}
		
		void display()
		{
			cout<<"***********************"<<endl;
			cout<<"小艺术家名："<<name<<endl;
			cout<<"小艺术家年龄："<<age<<endl;
			cout<<"......................"<<endl; 
		}
};

int main()
{
	artist st1,st2;
	st1.set("mark",38);
	//cin>>st1.name;	//类外不能调用。 
	st1.display();
	//st1.pp();		//类外调用不行，因为pp()是内部函数，只能类内调用。 
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
//			cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl; 
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
