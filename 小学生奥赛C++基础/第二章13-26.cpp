//#include<iostream>
//using namespace std;
//int main()
//{
//	bool f1=-2,f2=0,f3=2;
//	cout<<f1<<endl;
//	cout<<f2<<endl;
//	cout<<f3<<endl;
//	if (f1)
//		cout<<"真"<<endl;
//	if (f2)
//		cout<<"假"<<endl;
//	return 0; 
//} 

//int main()
//{
//	int n,n1,n2,len1,len2;
//	cin>>n;		//输入当前电梯在几层
//	cin>>n1>>n2;	//输入当前1号和2号分别在几层
//	n>n1?  len1=n-n1:len1=n1-n;  
//	n>n2?  len2=n-n2:len2=n2-n; 
//	len1<len2? cout<<n1<<n2:cout<<n2<<n1;
//	return 0;  
//}

//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;

//int main()
//{
//	srand(time(0));
//	int n,a;
//	cin>>n;
//	a=rand()%5+1;
//	if (n==a)
//		cout<<"ok,10$ to you";
//	else
//		cout<<"give GM 2$.";
//	return 0;
//}

//int main()
//{
//	srand(2);
//	int a,b,c;
//	a=rand();
//	b=rand();
//	c=rand();
//	cout<<a<<endl;
//	cout<<b<<endl;
//	cout<<c<<endl;
//	return 0;
//}

//#include<iostream>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//
//int main()
//{
//	srand(time(0));
//	int a,b,n;
//	a=rand()%90+10;
//	b=rand()%90+10;
//	cout<<a<<"+"<<b<<"="<<endl;
//	cin>>n;
//	if (n==a+b)
//		cout<<"you are right";
//	else
//		cout<<"you are wrong";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int lucheng,shijian;
//	float feiyong;
//	cin>>lucheng;
//	if (lucheng>10)
//		feiyong=6+(10-2)*1.8+(lucheng-10)*1.8*1.5;
//	else
//		if (lucheng>2)
//			feiyong=6+(lucheng-2)*1.8;
//		else
//			feiyong=6;
//	cin>>shijian;
//	feiyong += (shijian/3)*1;
//	cout<<feiyong<<endl;
//	return 0;
//}

//判断胖瘦
//#include<iostream>
//using namespace std;
//int main()
//{
//	float weight,hight,bmi;
//	cin>>weight>>hight;
//	bmi=weight/(hight*hight);
//	if (bmi<18.5)
//		cout<<"thinny."<<endl;
//	else
//		if(bmi<24)
//			cout<<"nomal"<<endl;
//		else
//			if(bmi<28)
//				cout<<"little fat"<<endl;
//			else
//				if(bmi<40)
//					cout<<"fat"<<endl;
//				else
//					cout<<"very fat"<<endl;
//	return 0;
//} 

#include<iostream>
using namespace std;

int main()
{
	int n;
	char score;
	cin>>n;
	switch(n/10)
	{
		case 10:
		case 9:
			score='A';
			break;
		case 8:
		case 7:
			score='B';
			break;
		case 6:
			score='C';
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			score='D';
			break;
		default:
			score=' ';
			break;
	}
	cout<<score<<endl;
	return 0;
}
