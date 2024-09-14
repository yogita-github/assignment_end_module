
//10)C++ Program to remove all special characters from a given string.
//#include<iostream>
//using namespace std;
//void remspecialchar(string a)
//{
//	for(int i=0;i<a.size();i++)
//	{
//		if(a[i]<'A'|| a[i]>'Z' && a[i]<'a' || a[i]>'z' )
//		{
//			a.erase(i,1);
//			i--;
//		}
//	
//	}	cout<<a;
//}
//int main()
//{
//	string a = "Hellooo$$$$$$$$$$oooooooo";
//	remspecialchar(a);
//	return 0;
//}
//9)C++ Program to Reverse a Number
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int number;
//	int rem1,rem2,rem3;
//	cout<<"Enter the number: ";
//	cin>>number;
//	rem1 = number%10;
//	number = number/10;
//	rem2 = number%10;
//	number = number/10;
//	rem3 = number%10;
//
//	cout<<"Reversed number is:"<<rem1<<rem2<<rem3;		
//}

//8)C++ Program to Find number of Digits in any number
#include<iostream>
using namespace std;
//456 -->3
int main()
{
	int n,count=0;
	cout<<"Enter number: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		while(n!=0){	
		n = n / 10;
			count++;
		}
	
	}
	cout<<"Count of number is :"<<count;
}



