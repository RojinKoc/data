#include<stdio.h>

//SORU4: Listede öðrenci adýna göre kayýt arama yapan fonksiyonu yazýnýz

// Öðrenci yapýsý
struct Student {
    char name[50];
    int age;
    // Diðer öðrenci bilgilerini buraya ekleyebilirsiniz.
};

// Öðrenci listesi
struct Student students[] = {
    {"Rojin", 21},
    {"Rumeysa", 20},
    {"Yaren", 21},
    {"Sabiha", 19},
    // Daha fazla öðrenci eklemek için bu yapýyý kullanabilirsiniz.
};

int numberOfStudents = sizeof(students) / sizeof(students[0]);

// Öðrenci adýna göre arama yapacak fonksiyon
void searchStudentByName(const char *searchName) {
    int found = 0;
    int i;
    for ( i = 0; i < numberOfStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Oðrenci Bulundu: %s, Yasi: %d\n", students[i].name, students[i].age);
            found = 1;
        }
    }

    if (!found) {
        printf("Ogrenci bulunamadi: %s\n", searchName);
    }
}

int main() {
    char nameToSearch[50]; // Aranacak öðrencinin adýný saklamak için bir dizi oluþturun
    printf("Aranacak ogrencinin adini girin: ");
    scanf("%s", nameToSearch); // Kullanýcýdan öðrenci adýný alýn
    searchStudentByName(nameToSearch);

    return 0;
}
