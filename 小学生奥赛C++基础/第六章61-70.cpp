//#include<iostream>

//捉迷藏10-1-3-6。。。。 
//using namespace std;
//
//int main()
//{
//	int a[10];
//	int count=1,i;
//	for (i=0;i<10;i++) a[i]=true;
//	i=9;
//	while(count<=1000)
//	{
//		i=(i+count)%10;
//		count++;
//		a[i]=false;
//	}
//	for (i=0;i<10;i++)
//	{
//		if (a[i]==true)
//		{
//			cout<<i+1<<" ";
//		}
//	}
//	return 0;
//}

//输出   1：1 2 3 4 5   2：2 3 4 5 1  。。。。 
 
 
// #include<iostream>
// using namespace std;
// 
// int main()
// {
// 	int a[6],i,j; 
// 	for (i=1;i<6;i++)
// 		{
// 			a[i]=i;
//		}
//	i=1;
//	cout<<i<<": ";
//	for (i=1;i<6;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
//	for (i=2;i<=10;i++)
//	{
//		a[0]=a[1];
//		cout<<i<<": ";
//		for (j=1;j<5;j++)
//		{
//			a[j]=a[j+1];
//		}
//		a[j]=a[0];
//		for (j=1;j<6;j++)
//		{
//			cout<<a[j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//冒泡算法

//#include<iostream>
//using namespace std;
//
//void fun(int a[5])
//{
//	int i,j,tem;
//	for (i=0;i<4;i++)
//	{
//		for (j=0;j<4-i;j++)
//		{
//			if (a[j]<a[j+1])
//			{
//				tem=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tem;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[5],i;
//	for (i=0;i<5;i++)
//	{
//		cin>>a[i];
//	}
//	fun(a);
//	for (i=0;i<5;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//} 
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char str[100];
//	gets(str);
//	puts(str);
//	puts(str);
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str2;
//	str2+='a';
//	str2+='c';
//	cout<<str2;
//	return 0;
//}

//筛选法求素数
//int main()
//{
//	int i,j,a[101],count=0;
//	for(i=0;i<101;i++) a[i]=1;
//	a[0]=a[1]=0;
//	i=2;
//	while (i<101)
//	{
//		for (j=2;j<101;j++)
//		{
//			if (i*j<101)
//			{
//				a[i*j]=0;
//			}
//		}
//		i++;
//	}
//	i=0;
//	while(i<101)
//	{
//		if (a[i])
//		{
//			cout<<i<<" ";
//			count++;
//		}
//		i++;
//	}
//	cout<<endl;
//	cout<<count;
//	return 0;
//} 

//int main()
//{
//	char ch;
//	string str1,str2;
//	getline(cin,str1);
//	cout<<str1;
//	puts("87");
//	return 0;
//}

//int main()
//{
//	char ch;
//	string str1,str2;
//	getline(cin,str1);
//	int i=0;
//	str2="";
//	while((ch=str1[i])!='\0')
//	{
//		if ('a'<= ch && ch <='z' || 'A'<= ch && ch <='Z' )
//		{
//			ch++;
//		}
//		if ('z'<ch || 'Z'<ch && ch <'a')
//		{
//			ch-=26;
//		}
//		str2+=ch;
//		i++;
//	}
//	cout<<str2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int make,boli,mani,nike;
//	bool tj[4];
//	for (make=1;make<=4;make++)
//	{
//		for(boli=1;boli<=4;boli++)
//		{
//			for(mani=1;mani<=4;mani++)
//			{
//				nike=10-mani-boli-make;
//				tj[0]=(make==1)+(boli==4)+(mani==3)+(nike==2)==2;
//				tj[1]=(make==4)+(boli==1)+(mani==2)+(nike==3)==2;
//				tj[2]=(make==3)+(boli==4)==1;
//				tj[3]=(make==1)+(boli==3)+(mani==2)+(nike==4)==2;
//				if(tj[0]&&tj[1]&&tj[2]&&tj[3])
//				{
//					cout<<"make:"<<make<<endl;
//					cout<<"boli:"<<boli<<endl;
//					cout<<"mani:"<<mani<<endl;
//					cout<<"nike:"<<nike<<endl;
//				}
//			}
//		}
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int teacher,nike,glair;
//	for(teacher=1;teacher<=3;teacher++)
//	{
//		for (nike=1;nike<=3;nike++)
//		{
//			for(glair=1;glair<=3;glair++)
//			{
//				if ((nike==2)+(glair==3)+(teacher==3)+(glair!=3)==3)
//				{
//					//if (nike!=glair&&teacher!=nike&&teacher!=glair)
//					if (nike*glair*teacher==1*2*3)
//					{
//						cout<<teacher<<endl;
//						cout<<glair<<endl;
//						cout<<nike<<endl;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;

//15根骨头和15个玉米，问骨头在什么位置。1-9，数到就取出，30个围成一个圈 
//int main()
//{
//	int a[30],i,count=0,n;
//	for (i=0;i<30;i++) a[i]=1;
//	i=0;
//	while(count<15)
//	{
//		n=1;
//		while (n<9)
//		{
//			if(a[i])
//			{
//				n++;
//			}
//			i++;
//			i=i%30;
//		}
//		while (a[i]!=1)
//		{
//			i++;
//			i=i%30;
//		}
//		a[i]=0;
//		count++;
//	}
//	for(i=0;i<30;i++)
//	{
//		if(a[i]==1)
//		{
//			cout<<i+1<<" "<<endl;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[31],i,num=0,k=0;
//	for(i=1;i<31;i++) a[i]=1;
//	i=1;
//	while(num<15)
//	{
//		i=(i-1)%30+1;
//		if (a[i]) k++;
//		if (k==9) 
//		{
//			a[i]=0;
//			num++;
//			k=0;
//		}
//		i++;
//	}
//	for (i=1;i<=30;i++)
//	{
//		if (a[i])
//		cout<<i<<" ";
//	}
//} 


//#include<iostream>
//using namespace std;
//int main()
//{
//	const int M=10;
//	int i,j,p,n;
//	int a[M+1];
//	for (i=1;i<=M;i++) a[i]=i+1;
//	a[M]=1;
//	cout<<"n=";
//	cin>>n;
//	p=M;
//	for (i=1;i<=M;i++)
//	{
//		for (j=1;j<=n-1;j++) p=a[p];
//		cout<<a[p]<<" ";
//		a[p]=a[a[p]];
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[11],count=0;
//	int i,n,p;
//	for (i=1;i<11;i++) a[i]=i+1;
//	a[10]=1;		//表示每个数的下一个数是几。a[10]=1，10的下一个数是1
//	cin>>n;
//	p=10;
//	while(count<10)
//	{
//		for (i=0;i<n-1;i++)
//		{
//			p=a[p];			
//		}
//		cout<<a[p]<<" ";
//		count++;
//		a[p]=a[a[p]];
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int a[4],i,sum=0;
//	string t[4];
//	t[0]="1,2,3,4,5,6,7";
//	t[1]="1,3,5,7";
//	t[2]="2,3,6,7";
//	t[3]="4,5,6,7";
//	cout<<"读心术猜数"<<endl;
//	system("pause");      //暂停 
//	for (i=1;i<4;i++) 
//	{
//		system("cls");	//清屏 
//		cout<<"第"<<i<<"张："<<t[i]<<"有没有"<<endl;
//		cin>>a[i];
//	}
//	sum=a[3]*4+a[2]*2+a[1];
//	cout<<sum;
//	return 0;
//}


