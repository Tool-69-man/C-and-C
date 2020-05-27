#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr1[] = { 0,1,2,3,4,5 };
	string arr2[] = { "rttttt","wwwww","qqqqqqqq","asd","lkkkk","vvvvvv" };
	//string arr2 =  "qwerty" ;
	double arr3[] = { 9.9,8.8,7.7,6.6,5.5,4.4 };
	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(string);
	int len3 = sizeof(arr3) / sizeof(double);
	cout<< "len all:" << len1<<"	" << len2<<"	" << len3 << endl;
	int* iptr1 = arr1;
	string* iptr2 = arr2;
	//char* iptr2 = ;
	double* iptr3 = arr3;
	cout << *iptr1 << "	" << *iptr2 << "	" << *iptr3<<endl;
	iptr1++;
	iptr2++;
	iptr3++;
	
	cout <<*iptr1 << "	" <<*iptr2 << "	" <<*iptr3 << endl;
	iptr1++;
	iptr2++;
	iptr3++;
	
	cout <<*iptr1 << "	" <<*iptr2 << "	" <<*iptr3 << endl;
	iptr1++;
	iptr2++;
	iptr3++;
	
	cout <<*iptr1 << "	" <<*iptr2 << "	" <<*iptr3 << endl;
	iptr1++;
	iptr2++;
	iptr3++;
	
	cout <<*iptr1 << "	" <<*iptr2 << "	" <<*iptr3 << endl;
	iptr1++;
	iptr2++;
	iptr3++;

	return 0;
}