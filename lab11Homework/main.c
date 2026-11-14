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
Book OutputBook(Book buk);
Book Input();
int check(Book kniga, int year);


int main() {
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Book book1, book2, book3, b1, b2, b3
    int year; 
    printf("--- Ввод данных о книгах ---\n");

    printf("\nКнига 1:\n");
    b1=InputBook();
    printf("\nКнига 2:\n");
    b2=InputBook();
    printf("\nКнига 3:\n");
    b3=InputBook();
    
    printf("\nВведите год, после которого книги должны быть изданы (например, 1950): ");
    scanf("%d", &year);
    printf("\n--- Книги, изданные после %d, с >= 300 страниц и > 0 экземпляров ---\n", year);

    if check(b1,year)==1)
{
    printf("\n Найдена книга 1: \n");
    OutputBook(b1);
}
    if check(b2,year)==1)
{
    printf("\n Найдена книга 2: \n");
    OutputBook(b2);
}
    if check(b3,year)==1)
{
    printf("\n Найдена книга 3: \n");
    OutputBook(b3);
}
    if (check(b3,year)==0 && check(b2,year)==0 && check(b1,year)==0)
    {
        printf("\nКниги, соответствующие вашим условиям, не найдены.\n");
    }

    return 2;
}
Book InputBook()
{
    Book b;
    printf("Название: ");
    scanf(" %[^\n]%*c", b.title);
    printf("Автор: ");
    scanf("%[^\n]%*c", &b.author);
    printf("Год издания: ");
    scanf("%d", &b.publication_year);
    printf("Количество страниц: ");
    scanf("%d", &b.pages);
    printf("Жанр: ");
    scanf(" %[^\n]%*c", &b.genre);
    printf("Количество экземпляров: ");
    scanf("%d", &b.quantity);
    return b:
}
int check(Book kniga, int year){
    if (kniga.publication_year>year && kniga.pages>=300 && lniga.quantity >0) 
    {
        return 1;
    }
    else {
        return 0;
    }
}
Book OutputBook(Book buk) {
    printf("Название: ", buk.title);
    printf("Автор: ", buk.author);
    printf("Год издания: ", buk.publication_year);
    printf("Количество страниц: ", buk.pages);
    printf("Жанр: ", buk.genre);
    printf("Количество экземпляров: ", buk.quantity);
