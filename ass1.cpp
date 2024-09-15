
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
//#include<iostream>
//using namespace std;
////456 -->3
//int main()
//{
//	int n,count=0;
//	cout<<"Enter number: ";
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		while(n!=0){	
//		n = n / 10;
//			count++;
//		}
//	
//	}
//	cout<<"Count of number is :"<<count;
//}

//7)Write a template function swap () to swap the variables of int, char and complex types
//#include<iostream>
//using namespace std;
//
//template<class A,class B>
//void func(A a,B b){
//	cout<<a<<endl<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	
//	cout<<a<<endl<<b<<endl;
//	
//}
//int main()
//{
//	func(1,45);
//	return 0;
//}

//6)WRITE A CPP PROGRAM TO CHANGE THE CASE OF EACH CHARACTER IN A GIVEN STRING.
// A-Z == 65 to 90 and  a-z == 97 -122
//#include <iostream>
//#include<cstring>
//using namespace std;
//
//void toLowerCase(string s){
//    for(int i =0; i < s.size(); i++){
//        if(s[i] >= 'A' && s[i] <= 'Z'){
//            s[i] = s[i] + 32 ;
//        }
//    }
//    cout<<endl<<"To Lower Case :  " <<s;
//}
//string toUpperCase(string s){
//    for(int i =0; i < s.size(); i++){
//        if(s[i] >= 'a' && s[i] <= 'z'){
//            s[i] = s[i] - 32 ;
//        }
//    }
//    return s;
//}
//int main(){
//    cout<<"Enter name : ";
//    string name;
//    getline(cin,name);
//    toLowerCase(name);
//    cout<<endl<<"To Upper Case :  " << toUpperCase(name);
//}

//5)WRITE A CPP PROGRAM TO DISPLAY SUMMATION OF  EVEN AND ODD NUMBERS IN AN ARRAY OF INTEGERS.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5]={1,1,1,2,2};
//	int even_sum=0,odd_sum=0;
//	for (int i =0;i<5;i++)
//	{
//		if(i%2 == 0)
//		{
////			even_sum+=arr[i];
//			even_sum = even_sum+arr[i];
//		}
//		else{
////			odd_sum+=arr[i];
//			odd_sum = odd_sum+arr[i];
//		}
//	}
//	cout<<"Even sum is: "<<even_sum<<endl;
//	cout<<"Odd sum is: "<<odd_sum<<endl;	
//}

//4)WRITE A CPP PROGRAM TO DISPLAY FACTORIAL FROM NUMBER 5 TO 8.
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	for(int i=5;i<9;i++)
//	{
//		int fact=1;
//		for(int j=1;j<=i;j++)
//		{
//			fact = fact *j;
//		}
//		cout<<"Factorial of "<<i<<" is "<<fact<<endl;
//	}
//}
//3)WRITE A CPP PROGRAM TO DISPLAY 1ST 25 PRIME NUMBER.
//#include<iostream>
//using namespace std;
//
//int main() {
//    int count = 0;
//    int num = 2;
//
//    while (count < 25) {
//        int isPrime = 1;  
//
//        for (int i = 2; i < num; i++) {
//            if (num % i == 0) {
//                isPrime = 0;
//                break;
//            }
//    	}
//        if (isPrime) {
//            cout << num << " ";  
//            count++;
//        }
//        num++;
//    }
//    return 0;
//}

//2)WRITE A CPP PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PALINDROM OR NOT.
//#include<iostream>
//using namespace std;
//
//int main() {
//    int num, reversed = 0, original;
//    cout << "Enter a number: ";
//    cin >> num;
//    original = num;
//    while (num > 0) {
//        reversed = reversed * 10 + num % 10;
//        num /= 10;
//    }
//    cout << (original == reversed ? "Palindrome" : "Not a palindrome") << endl;
//    return 0;
//}

//1)WRITE A CPP PROGRAM TO SWAP 2 VARIABLES WITHOUT USING 3RD VARIABLE.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b;
//	cout<<"enter two numbers: "<<endl;
//	cin>>a>>b;
//	cout<<"Before swapping: "<<a<<" "<<b<<endl;
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	cout<<"After swapping: "<<a<<" "<<b;
//}


