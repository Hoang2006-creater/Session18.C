#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		int id;
		char fullname[100];
		int age;
		char phone[20]; 
	};
	struct Student student;
	//Khai bao bien tu kieu du lieu cau truc 
	printf("Moi ban nhap ten hoc sinh: ");
	fgets(student.fullname, sizeof(student.fullname),stdin);
	printf("Moi ban nhap id: ");
	scanf("%d",&student.id);
	printf("Moi ban nhap tuoi: ");
	scanf("%d",&student.age);
	printf("Moi ban nhap age: ");
	scanf("%s",&student.phone);
	
	
	// Truy suat
	printf("In thong tin sinh vien\n");
	printf("Id la %d\n",student.id);
	printf("Tuoi la %d\n",student.age);
	printf("Ten la %s\n",student.fullname);
	printf("So dien thoai la %s\n",student.phone);
	return 0;
}
