#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		int id;
		char fullname[100];
		int age;
		char phone[20]; 
	};
	//Khai bao bien tu kieu du lieu cau truc 
	struct Student user01={1,"Vu Duc Huy Hoang",18,"0769220000"};
	// Truy suat
	printf("In thong tin sinh vien\n");
	printf("Id la %d\n",user01.id);
	printf("Tuoi la %d\n",user01.age);
	printf("Ten la %s\n",user01.fullname);
	printf("So dien thoai la %s\n",user01.phone);
} 
