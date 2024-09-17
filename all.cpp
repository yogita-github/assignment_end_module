#include<iostream>
using namespace std;
//Day1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	cout<<"A is: "<<a<<"B is : "<<b<<endl;
//	int sum = a+b;
//	cout<<sum;
//}
//4
//5
//A is: 4B is : 5
//9

//#include<iostream>
//using namespace std;
//class Complex{
//	int real,img;
//	public:
//	void getNum();
//	void showNum();
//	void setReal(int);
//	void setImg(int);
//};
//void Complex::getNum()
//{
//	cout<<"Enter real and imaginary number: "<<endl;
//	cin>>real>>img;	
//}
//void Complex::showNum()
//{
//	cout<<"Complex Number is: "<<real<<"+"<<img<<"i"<<endl;
//}
//int main()
//{
//	Complex obj;
//	obj.getNum();
//	obj.showNum();
//}
//Enter real and imaginary number:
//4
//7
//Complex Number is: 4+7i

//#include<iostream>
//using namespace std;
//int main()
//{
//	bool a=true;
//	bool b=false;
//	cout<<"a is "<<a<<endl;
//	cout<<"b is "<<b<<endl;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	const int var = 10;
////	----gives error since var is constant we cannot change it
//	var = var+10;
//	cout<<var;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	const int var = 10;
//	cout<<var;
//}
//10

//constant pointer to integer
//int main()
//{
//	int a=60,b=13;
//	int* const ptr = &a;
//	*ptr = 15;
//	cout<<a<<" "<<b<<endl;
//}
//15 13

//pointer to a constant integer
//int main()
//{
//	int a=60,b=30;
//	const int* ptr = &a;
//	ptr = &a;
//	cout<<a<<" "<<b<<endl;
//}
//60 30

//constant pointer to constant integer
//int main()
//{
//	int a=56,b=45;
//	const int* const ptr = &a;
//	cout<<a<<" "<<b;
//}
//56 45

//int main()
//{
//	int num = 10;
//	int &refnum = num;
//	cout<<refnum;
//}
//10

//int main()
//{
//	int num = 50;
//	int &refnum = num;
//	cout<<refnum<<endl;
//	num = 100;
//	cout<<refnum<<endl;
//	cout<<&refnum<<endl;
//}
//50
//100
//0x6ffe14

//swapping two numbers using temp variable
//int main()
//{
//	int a=90,b=67;
//	cout<<a<<" "<<b<<endl;
//	swap(a,b);
//	cout<<a<<" "<<b<<endl;
//}
//void swap(int a,int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;	
//}
//90 67
//67 90

//int main()
//{
//	int a=45,b=89;
//	cout<<a<<" "<<b<<endl;
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	cout<<a<<" "<<b;
//}
//45 89
//89 45

//Constructor
//class Complex{
//	public:
//	int real,img;
//	void show();
//	Complex();
//	Complex(int,int);
//};
//void Complex::show()
//{
//	cout<<"Complex number is :"<<real<<"+"<<img<<"i"<<endl;
//}
//Complex::Complex()
//{
//	cout<<"Default constructor called!!";
//}
//Complex::Complex(int r,int i){
//	real = r;
//	img = i;
//}
//int main()
//{
//	Complex obj1(8,9);
//	obj1.show();
//}
//Complex number is :8+9i

//funtion overloading
//void add(int a,int b)
//{
//	cin>>a>>b;
//	cout<<"sum is : "<<a+b<<endl;
//}
//void add(double a,double b)
//{
//	cin>>a>>b;
//	cout<<"sum is : "<<a+b<<endl;
//}
//int main()
//{
//	add(2,4);
//	add(5.7,8.9);
//}
//5
//4
//sum is: 9
//5.5
//6.6
//sum is:12.1

//Day2
//int main()
//{
//	int arr[10];
//	for(int i=0;i<10;i++)
//	{
////		cin>>arr[i];
//cin>>*(arr+i);
//	}
//	for(int i = 0;i<10;i++)
//	{
////		cout<<arr[i];
//cout<<*(arr+i);
//	}
//}
//1
//2
//3
//4
//5
//6
//7
//8
//9
//0
//1234567890

//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	cout<<sizeof(arr)<<endl;
//	cout<<sizeof(arr[0])<<endl;
//	int length = sizeof(arr)/sizeof(arr[0]);
//	cout<<length;
//}
//20
//4
//5

//int main()
//{
//	int arr[]={1,2,3,4};
//	int *ptr=arr;
//	cout<<arr<<endl;
//	cout<<*arr<<endl;
//	cout<<*ptr<<endl;
//	cout<<ptr<<endl;
//}
//0x6ffe00
//1
//1
//0x6ffe00

//**************Assignment1**************************
//1)Find out maximum elements in an array
//int main()
//{
//	int max = 0;
//	int arr[5]={1,2,3,4,5};
//	for(int i =0;i<=5;i++)
//	{	
//		if(arr[i+1]>arr[i]){
//			max = arr[i+1];	
//		}
//	}
//	cout<<max;	
//}
//5

//2)calculate average of all elements of array using pointer
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	float avg;
//	int sum=0;
//	for(int i=0;i<=5;i++)
//	{
//		sum = sum +  *(arr+i);
//	}
//	avg = (float)sum/5;
//	cout<<avg<<endl;
//}
//3

//3)copy elements of 1 d array into another using pointer
//int main()
//{
//	int i;
//	int arr[5]={1,2,3,4,5};
//	
//	for(int i=0;i<5;i++)
//	{
//		cout<<arr[i]<<endl;
//	}
//	int *ptr2 = &arr[i];
//	for(i=0;i<5;i++)
//	{
//		cout<<*(ptr2+i);
//	}
//}
//1
//2
//3
//4
//5
//12345

//4)addition of 2 matrices
//int main()
//{
//	int arr[3][3];
//	int arr2[3][3];
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>arr2[i][j];
//		}
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr2[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j]+arr2[i][j];
//		}
//		cout<<endl;
//	}
//}
//123
//456
//789
//123
//456
//789
//246
//81012
//141618

//5)transpose of a matrix
//int main()
//{
//	int arr[3][3];
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[j][i];
//		}
//		cout<<endl;
//	}
//}
//1
//2
//3
//4
//5
//6
//7
//8
//9
//123
//456
//789
//147
//258
//369

//3)sqaure of all elements of 2d array
//int main()
//{
//	int arr[3][3];
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>arr[i][j];
//		}
//	}
//	for(int i=0;i<3;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++)
//		{
//			cout<<arr[i][j]*arr[i][j];
//		}
//		cout<<" "<<endl;
//	}
//}
//2
//2
//2
//2
//2
//2
//2
//2
//2
//444
//444
//444

//1)Store the details of 2 books in an array
//#include<string.h>
//class books
//{
//	float price;
//	int id;
//	public:
//	void getdata();
//	void putdata();
//};
//void books::getdata()
//{
//	cout<<"enter id and price: ";
//	cin>>id>>price;	
//}
//void books::putdata(){
//	cout<<"id is: "<<id<<"price is: "<<price<<endl;
//}
//int main()
//{
//	books b1[2];
//	for(int i=0;i<2;i++)
//	{
//		b1[i].getdata();
//	}
//	for(int i=0;i<2;i++)
//	{
//		b1[i].putdata();
//	}	
//}
//enter id and price: 1
//200
//enter id and price: 2
//340
//id is: 1price is: 200
//id is: 2price is: 340




//2d array
//int main()
//{
//	int arr[2][2];
//	for(int i =0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
////			cin>>arr[i][j];
//			cin>>*(*(arr+i)+j);
//		}
//	}
//	for(int i =0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
////			cout<<arr[i][j];
//			cout<<*(*(arr+i)+j)<<endl;
//		}
//		cout<<endl;
//	}
//}
//1
//2
//3
//4
//12
//34

//malloc function
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr;
//	int n,i;
//	printf("Enter elements: ");
//	scanf("%d",&n);
//	ptr = (int*) malloc(n*(sizeof(int)));
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&ptr[i]);
//	}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d",ptr[i]);
//	}
//	free(ptr);
//}
//1
//2
//3
//123

//11111111111111111111111doubt
//int main()
//{ 
//	int* p;
//	char* q;
//	float* r;
//	p = new int(10);
//	cout<<*p<<endl;
//	q = new char('A');
//	cout<<*q<<endl;
//	r = new float(4.5);
//	cout<<*r<<endl;
//	delete p;
//	delete q;
//	delete r;
//	cout<<*r<<endl;
//	cout<<*q<<endl;
//	cout<<*p<<endl;
//}
//10
//A
//4.5
//10
//A
//4.5
//4.5
//A
//11213296

//int main()
//{
//	int n;
//	cout<<"enter number: "<<endl;
//	cin>>n;
//	int *p = new int[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>p[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<p[i]<<endl;;
//	}
//	delete[] p;
//	for(int i=0;i<n;i++)
//	{
//		cout<<p[i]<<endl;
//	}
//}
//enter number:
//4
//1
//2
//3
//4
//1
//2
//3
//4
//7805424
//0
//7799120
//0

//int main()
//{
//	int n;
//	cout<<"Enter n: ";
//	cin>>n;
//	char * str = new char[n];
//	cin>>str;
//	cout<<"name is "<<str;
//	delete[] str;
//}
//Enter n: 4
//char
//name is char

//int main()
//{
//	int num;
//	cout<<"Enter total students: ";
//	cin>>num;
//	float* ptr;
//	ptr= new float[num];
//	cout<<"enter gpa: "<<endl;
//	for(int i=0;i<num;i++)
//	{
//		cin>>*(ptr+i);
//	}
//	for(int i=0;i<num;i++)
//	{
//		cout<<*(ptr+i)<<endl;
//	}
//	delete[] ptr;
//	for(int i=0;i<num;i++)
//	{
//		cout<<*(ptr+i)<<endl;;
//	}
//}
//Enter total students: 4
//enter gpa:
//1
//2
//3
//4
//1
//2
//3
//4
//1.50722e-038
//0
//1.50714e-038
//0

//accept number of subjects with their name and marks and find thier average
//#include<string.h>
//int main()
//{
//    int sum = 0, n, i;
//    float avg;
//    cout << "Enter number of subjects: " << endl;
//    cin >> n;
//    int* ptr = new int[n]; 
//    cout << "Enter the marks for " << n << " subjects: " << endl;
//    for (i = 0; i < n; i++)
//    {
//        cin >> ptr[i]; 
//    }
//    for (i = 0; i < n; i++)
//    {
//        sum += ptr[i]; 
//    }
//    avg = static_cast<float>(sum) / n;  
//    cout << "Average is: " << avg << endl;
//    delete[] ptr; 
//    return 0;
//}
//Enter number of subjects:
//4
//Enter the marks for 4 subjects:
//10
//20
//10
//20
//Average is: 15

//#include<stdlib.h>
//class A{
//	public:
//		int a;
//	public:
//		A()
//		{
//			a =10;
//			cout<<"Inside constructor "<<endl;
//		}
//		void show()
//		{
//			cout<<"in show()"<<endl;
//		}
//};
//int main()
//{
//	A* a =new A;
//	cout<<a->a<<endl;
//	cout<<"object created using new"<<endl;
//	A * b= (A*) malloc(sizeof(A));
//	cout<<"object created using malloc"<<endl;
//}
//Inside constructor
//10
//object created using new
//object created using malloc

//class library{
//	int id;
//	int section;
//	public:
//		void getId();
//		void getSection();
//		void displayAll();
//		library();
//		~library(){
//			cout<<"dest called"<<endl;
//		}
//};
//library::library()
//{
//	id = ident;
//	section = sec;
//	cout<<"constrctor invoked"<<endl;
//}
//void library::getId()
//{
//	cout<<"Enter id: "<<endl;
//	cin>>id;
//}
//void library::getSection()
//{
//	cout<<"Enter section: "<<endl;
//	cin>>section;
//}
//void library::displayAll()
//{
//	cout<<"Id is: "<<id<<" Section is: "<<section<<endl;
//	
//}
//
//int main()
//{
//	library lib1;
//	lib1.getId();
//	lib1.getSection();
//	lib1.displayAll();
//}
//constrctor invoked
//Enter id:
//1
//Enter id:
//2
//Id is: 2 Section is: 0
//dest called

//class Demo{
//	public:
//		Demo()
//		{
//			cout<<"Object created"<<endl;
//		}
//		~Demo()
//		{
//			cout<<"Object Destructed"<<endl;
//		}
//};
//int main()
//{
//	Demo d1,d2,d3,d4;	
//}
//Object created
//Object created
//Object created
//Object created
//Object Destructed
//Object Destructed
//Object Destructed
//Object Destructed

//int count = 0;
//class Demo{
//
//	public:
//		Demo()
//		{
//			count++;
//			cout<<"Object created:-"<<count<<endl;
//		}
//		~Demo()
//		{
//			cout<<"Object Destructed:-"<<count<<endl;
//			count--;
//			
//		}
//};
//int main()
//{
//	Demo d1,d2,d3,d4;	
//}
//Object created:-1
//Object created:-2
//Object created:-3
//Object created:-4
//Object Destructed:-4
//Object Destructed:-3
//Object Destructed:-2
//Object Destructed:-1

//class Demo{
//	int* ptr;
//	public:
//		Demo()
//		{
//			ptr = new int;
//			*ptr = 10;
//		}
//		void display()
//		{
//			cout<<*ptr<<endl;
//		}
//		~Demo()
//		{
//			cout<<"Destructor called"<<endl;
//			if(ptr)
//			{
//				delete ptr;
//				cout<<"in if block"<<endl;
//			}
//			ptr = NULL;
//		}
//};
//int main()
//{
//	Demo obj;
//	obj.display();
//	obj.~Demo();
//}
//10
//Destructor called
//in if block
//Destructor called

//^^^^^^^^^^^^imp question
//#include<string.h>
//class string1
//{
//	int len;
//	char *ptr;
//	public:
//		void chardisplay();
//		string1();
//		string1(char*);
//		void stringdisplay();
//		string1(char,int);
//		string1(int);
//		~string1()
//		{
//			cout<<"destructor called";
//			if(ptr)
//			{
//				delete ptr;
//				cout<<"in if block";
//			}
//		}
//};
//string1::string1()
//{
//	len=1;
//	ptr = new char[len];
//	*ptr='A';
//}
//void string1::chardisplay()
//{
//	cout<<"length is"<<len<<endl;
//	cout<<"char is"<<*ptr<<endl;
//}
//void string1::stringdisplay()
//{
//	cout<<"length is"<<len<<endl;
//	cout<<"string is"<<ptr<<endl;
//}
//string1::string1(char *sptr)
//{
//	len = strlen(sptr);
//	ptr = new char[len+1];
//	strcpy(ptr,sptr);
//}
//string1::string1(char ch,int l)
//{
//	int i;
//	len = l;
//	ptr =new char[len+1];
//	for(i=0;i<len;i++)
//	{
//		ptr[i]=ch;
//	}
//	ptr[i]='\0';
//}
//string1::string1(int l){
//	int i;
//	len=l;
//	ptr = new char[len+1];
//	cout<<"accept string";
//	cin>>ptr;
//}
//int main()
//{
//	string1 c1;
//	c1.chardisplay();
//	string1 c2("rahul");
//	c2.stringdisplay();
//	string1 c3('*',60);
//	c3.stringdisplay();
//	string1 c4(5);
//	c4.stringdisplay();
//}
//length is1
//char isA
//length is5
//string israhul
//length is60
//string is************************************************************
//accept string

//^^^^^^^^^^^^vvv imp question
//1)size from user is taken,ptr is initialized
//2)function declarataion in class
//3)constructor of taking size 
//4)get  function to take values
//5)show function to display values
//6)max and min function to find minimum and maximum element

//class score{
//	
//	int size;
//	int* ptr;
//public:
//	score();
//	void get();
//	void show();
//	int max();
//	int min();
//	
//	~score()
//	{
//	cout<<"i am inside destructor "<<endl;
//	cin>>size;
//	ptr=new int[size];
//	}
//};
//score::score()
//	{
//		cout<<"i am inside constructor "<<endl;
//		cout<<"enter size: "<<endl;
//		cin>>size;
//		ptr=new int[size];
//	}
//void score::get()
//{
//	cout<<"enter scores for the same "<<endl;
//	for(int i=0;i<size;i++)
//		cin>>ptr[i];
//
//}
//void score::show()
//{
//	for(int i=0;i<size;i++)
//		cout<<"scores are : "<<ptr[i]<<endl;
//}
//int score::max()
//{
//	int m=ptr[0];
//	for(int i=1;i<size;i++)
//	if(ptr[i]>m)
//	m= ptr[i];
//	return m;	
//}
//int score::min()
//{
//	int n=ptr[0];
//	for(int i =1;i<size;i++)
//	if(ptr[i]<n)
//	n = ptr[i];
//	return n;	
//}
//int main()
//{
//	score s1;
//	s1.get();
//	s1.show();
//	cout<<"Max element is: "<<s1.max()<<endl;
//	cout<<"Min element is: "<<s1.min()<<endl;
//}
//i am inside constructor
//enter size:
//3
//enter scores for the same
//10
//20
//30
//scores are : 10
//scores are : 20
//scores are : 30
//Max element is: 30
//Min element is: 10
//i am inside destructor

//Inheritance
//--public
//class Fruits{
//	public:
//	int a,b;
//	int area()
//	{
//		return a*b;
//		
//	}
//};
//int main()
//{
//	Fruits obj;
//	obj.a=78;
//	obj.b = 33;
//	cout<<"area is: "<<obj.area()<<endl;	
//}
//area is: 2574

//--protected
//class Fruits{
//	protected:
//	int a,b;
//	int area()
//	{
//		return a*b;
//		
//	}
//};
//int main()
//{
//	Fruits obj;
//	obj.a=78;
//	obj.b = 33;
//	cout<<"area is: "<<obj.area()<<endl;	
//}
//gives error since protected

//class Fruits{
//	protected:
//	int a=10,b=45;
//};
//class Mango:public Fruits{
//	public:
//		void summation()
//		{
//			int sum = a+b;
//			cout<<sum<<endl;	
//		}	
//};
//int main()
//{
//	Mango m1;
//	m1.summation();
//}
//55

//int main()
//{
//	Fruits obj;
//	obj.a=78;
//	obj.b = 33;
//	cout<<"area is: "<<obj.area()<<endl;	
//}
//gives error since protected

//class Fruits{
//	protected:
//	int a=10,b=45;
//};
//class Mango:public Fruits{
//	public:
//		void summation()
//		{
//			int sum = a+b;
//			cout<<sum<<endl;	
//		}	
//};
//int main()
//{
//	Fruits m1;
//	m1.summation();
//}
//-----gives error since we are trying to access derived class memebers by base class
//object



