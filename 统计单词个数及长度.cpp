#include<iostream>
#include<windows.h>
#include<string>


using namespace std;

int main(){
	string word;

	int count=0;

	int length=0;

	cout<<"����������������:"<<endl;

	while(1){
		if((cin>> word) == 0){
			break;
		}
			count++;
			length+=word.length();

	}
	cout<<"count="<<count<<endl;
	cout<<"length"<<length<<endl;

	system("pause");

	return 0;
}