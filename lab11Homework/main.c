#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


struct book {
    char title[100];
    char author[100];
    int publication_year;
    int pages;
    char genre[50];
    int quantity;
};

typedef struct book Book;



int main() {
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Book book1, book2, book3;
    int year; 
    printf("--- Ввод данных о книгах ---\n");

    printf("\nКнига 1:\n");
    printf("Название: ");
    scanf("%[^\n]%*c",book1.title);
    printf("Автор: ");
    scanf("%[^\n]%*c", &book1.author);
    printf("Год издания: ");
    scanf("%d", &book1.publication_year);
    printf("Количество страниц: ");
    scanf("%d", &book1.pages);
    printf("Жанр: ");
    scanf(" %[^\n]%*c", &book1.genre);
    printf("Количество экземпляров: ");
    scanf("%d", &book1.quantity);
   
    printf("\nКнига 2:\n");
    printf("Название: ");
    scanf(" %[^\n]%*c", &book2.title);
    printf("Автор: ");
    scanf("%[^\n]%*c", &book2.author);
    printf("Год издания: ");
    scanf("%d", &book2.publication_year);
    printf("Количество страниц: ");
    scanf("%d", &book2.pages);
    printf("Жанр: ");
    scanf(" %[^\n]%*c", &book2.genre);
    printf("Количество экземпляров: ");
    scanf("%d", &book2.quantity);

    printf("\nКнига 3:\n");
    printf("Название: ");
    scanf(" %[^\n]%*c", &book3.title);
    printf("Автор: ");
    scanf("%[^\n]%*c", &book3.author);
    printf("Год издания: ");
    scanf("%d", &book3.publication_year);
    printf("Количество страниц: ");
    scanf("%d", &book3.pages);
    printf("Жанр: ");
    scanf(" %[^\n]%*c", &book3.genre);
    printf("Количество экземпляров: ");
    scanf("%d", &book3.quantity);

    printf("\nВведите год, после которого книги должны быть изданы (например, 1950): ");
    scanf("%d", &year);
    printf("\n--- Книги, изданные после %d, с >= 300 страниц и > 0 экземпляров ---\n", year);


    if (book1.publication_year > year && book1.pages >= 300 && book1.quantity > 0) {
        printf("\nНайдена Книга 1:\n");
        printf("  Название: %s\n", book1.title);
        printf("  Автор: %s\n", book1.author);
        printf("  Год издания: %d\n", book1.publication_year);
        printf("  Страниц: %d\n", book1.pages);
        printf("  Жанр: %s\n", book1.genre);
        printf("  Экземпляров: %d\n", book1.quantity);
    }

    if (book2.publication_year > year && book2.pages >= 300 && book2.quantity > 0) {
        printf("\nНайдена Книга 2:\n");
        printf("  Название: %s\n", book2.title);
        printf("  Автор: %s\n", book2.author);
        printf("  Год издания: %d\n", book2.publication_year);
        printf("  Страниц: %d\n", book2.pages);
        printf("  Жанр: %s\n", book2.genre);
        printf("  Экземпляров: %d\n", book2.quantity);
    }

    if (book3.publication_year > year && book3.pages >= 300 && book3.quantity > 0) {
        printf("\nНайдена Книга 3:\n");
        printf("  Название: %s\n", book3.title);
        printf("  Автор: %s\n", book3.author);
        printf("  Год издания: %d\n", book3.publication_year);
        printf("  Страниц: %d\n", book3.pages);
        printf("  Жанр: %s\n", book3.genre);
        printf("  Экземпляров: %d\n", book3.quantity);
    }

    
    int found = 0;
    if (book1.publication_year > year&& book1.pages >= 300 && book1.quantity > 0) found = 1;
    if (book2.publication_year > year && book2.pages >= 300 && book2.quantity > 0) found = 1;
    if (book3.publication_year > year && book3.pages >= 300 && book3.quantity > 0) found = 1;
    if (found == 0) {
        printf("\nКниги, соответствующие вашим условиям, не найдены.\n");
    }


    return 0; 
}