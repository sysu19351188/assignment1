#include<iostream>
#include<string>
using namespace std;

class student {                                                     //����ѧ����
public:
	student() {  //����
		char str2[40] = "Tom";
		numble = 2;
		strcpy_s(name, str2);
		old = 19;
	}
	student(int, char *str, int);                                       
	void print();                                       //��ӡ
private:
	int numble;
	char name[40];
	int old;                                           //���ݳ�Ա
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