#include<iostream>
using namespace std;

void myString(char *&p,int N){ //ใช้ referenceเพื่อที่จะเปลี่ยนค่าได้เลยไม่ต้องจองที่ใหม่
	p = new char[N+1];  //N+1 เพราะ ตัวสุดท้ายของ array string คือ \0  
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	p[N] = 0; //ให้ \0 มีค่าเป็น0
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
