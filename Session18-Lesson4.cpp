#include <stdio.h>
#include <string.h>
int main(){
struct Student {
    int id;            
    char name[100];    
    int age;           
    char phoneNumber[20]; 
};

    struct Student students[50];
    int n = 5; 
    for (int i = 0; i < n; i++) {
        students[i].id = i + 1;

        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Nhap ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

