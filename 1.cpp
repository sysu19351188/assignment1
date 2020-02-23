#include<iostream>
#include<string>
using namespace std;

class student {                                                     //定义学生类
public:
	student() {  //构造
		char str2[40] = "Tom";
		numble = 2;
		strcpy_s(name, str2);
		old = 19;
	}
	student(int, char *str, int);                                       
	void print();                                       //打印
private:
	int numble;
	char name[40];
	int old;                                           //数据成员
};
student::student(int a, char b[40], int c) {
	numble =a;
	strcpy_s(name,b);
	old = c;
}

void student::print() {
	cout << numble << " " << name << " " << old << endl;
}
int main() {
	char str1[40] = "Jhon";
	student a(1, str1, 18),b;
	cout << "The first student's numble,name and old is:" << endl;
	a.print();
	cout << "The second student's numble,name and old is:" << endl;
	b.print();
	return 0;
}