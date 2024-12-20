#include <stdio.h>
#include <string.h>

int main() {
struct Student {
    char name[100];
    int age;
    char phoneNumber[20];
};
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
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
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}

