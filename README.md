# Домашнее задание к работе 11
## Условие задачи
<img width="1102" height="436" alt="image" src="https://github.com/user-attachments/assets/9bdcc220-85c4-41b6-9a74-bb00332db49f" />
Пояснение. Создать структуру для хранения записи, указанной в индивидуальном варианте. Организовать ввод трех значений структур. Выполнить обработку 3 переменных структурного типа согласно варианту: отбор записей по условию, вычисление характеристики, поиск экстремального значения или сортировку. Вывести результат. В отчёте представить описание структуры, ввод данных, основную функцию обработки и результаты проверки.

## Алгоритм и блок-схема
### Алгоритм
1. Начало.
2. Ввести данные трёх книг `(b1, b2, b3)` функцией `InputBook()`: название, автор, год издания, число страниц, жанр, количество экземпляров.
3. Ввести год `year`.
4. Для каждой книги вызвать `check(kniga, year)`. Она возвращает `1`, если год издания больше `year`, страниц не меньше `300` и экземпляров больше `0`.
5. Если `check` вернула `1`, вывести книгу функцией `OutputBook()`.
6. Если для всех трёх книг check вернула `0`, вывести `«Книги, соответствующие вашим условиям, не найдены.»`.
7. Конец

### Блок-схема
<img width="545" height="832" alt="image" src="https://github.com/user-attachments/assets/3b5227bf-087b-4335-94d2-a09b91f9ca58" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=blok-schema.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%9A%D0%BD%D0%B8%D0%B3%D0%B8%22%20id%3D%22books1%22%3E7Vtbb%2BI4FP41kaYPrRIbQngkvcyuNN0dTVfa6b6Z2JBMTYyMaWF%2B%2FdqJTa60EEKgVakU7ONLnPOd850Tm1rwerb6ytE8vGeYUAvYeGXBGwsAZ%2BAM5JeSrFMJALaWTHmEda9M8BD9Jlpoa%2BkywmRR6CgYoyKaF4UBi2MSiIIMcc5eit0mjBbvOkdTUhE8BIhWpf9GWISp1AODTP4HiaahubPjDtOWGTKd9ZMsQoTZS04Eby14zRkTaWm2uiZUac%2FoJR13t6V1szBOYrHLgCiuGaJFC7E2DyyXOVdF2QtRSiibcjSzoD8nPJoRQXi57XvW4L%2BEkSAPcxSoGV6kSUhZKGZU1hxZnEQrYjBO65ReM8rUnFQp8RIj%2FvTFAvBucAfv7ixwrcrJ50L2XwjOnogZIZuwO3b7rpqJxaJ%2BJjv5pDOlZTVT%2BtjPiC71Y4%2BdpIs9Bvob6i6EC7LKKUsr9yth8qH5WnYJc%2Fj3Ndgvma2AnpaZWTxd1y4x1FWkLXW6mTkDUxY0nvXY4p2g5SGbjZeLXXA6EBc38Mh40gYuQUiCpy8GnTVB%2FEJ%2BqzbVbMvVytW4VD6zj6NnWZyKZJpUNOZKhSWhFBW6NoDZcWpw9ko4u0WcnUELQLOl%2BPTi7dby91LMl8JnTJnMRWseDIrI9kERWdAGshh8cBcGr7pwEye093dC2GsBqsWv8cNfawz%2Bm%2Fz4cf%2BT3P%2BIeXjZT%2BcluJJPVPFkSx6QjUODCspqkgddZVyEbMpiRG8zqc%2FZMsZErUcq0s%2F6fGNsri3gFxFird0ULQUr2gdZReKnGn7V17XHXMvNSs%2BcVNamEktF5Qap6mO%2BLRuW1Mw4TCZoScU3NCbUR8HTNFm9sak0A9NmIxCfEq0tDOttgBOKRPRcVPOBpLqT832S6hh0Rqo9pw1ShR%2BcVOE5kGq%2FDahqSdVtTKrwk1TrSbXXHanu5HxnQqrJR%2FvvSP11SKrweKTqlDzVa4NUex%2BcVJ0CldqqAlw0U%2BtOr9WqnNdRXmly3YNngKUZmtI5qBoJtEt03i8aidvGjkQ8eUfO33VGZUkGH8qrY3m%2BKvuJxL9Nrj0LjhT2qjxKrjfJ1UuuUJd1h7SpX6ym5aGeLe2gW5M7dkQ2gzbIhjh7pADNg30%2BiMd4pDaOZXVMWfDUGPB82NWbrwfEXT30O4vkU290vvFl47slladZkR5U0vpmFbsBAZrlYptt57NBp2nGVZNMdQOqU0Y1XUMrqDbMsPGxQTWptEmeH4t4bYFvuynUJ3hVSLMN1jJf9zS3dpM%2Bk8GZA1PzjtMMmNrgW%2BNroApLN1DUvpmaWKfPHdHYaNuuwmSwLGGSvLoV9Y2kbmJZDuTYJMdRUToKEB3phlmEcQoZWUS%2F9V2VgueKDJKH7PtWX6aNfhSHMlkS%2F5CVMBlQIxDKfmBSDpVLGEzeziVqUdFDLu0r4Dq706TpwiaTBTmYAb1mjpYRxbtxtV2TFdyVZ5FhQ5I7fMv8bKNPDc2dIPoYejtbZDoPP7CKywnDj7dH9DFYfoafreEHQm9YTLlPFIychm9Z%2BPD97rNlxBrPOwUjwjNHpnNG7J0VIw73YcR6TD4ZMZeQD4bgVBzY8KcUxiDfDwfu6GlmL%2F1wBtT42le2DXungrfpllNX8O5HpK%2FtGB4OfS3VbQmIFR44%2BsbksLzD3%2BLGpNNwA8w4yynNxCkYSWYze5vJrm%2Fs282kdRvolX6n49j20Yyg9rHAdjPIQU5pNF8oaN84JUxOIP%2BMFxEmJijveU7Yzmng5uROOu8gd4rn65PBXcN6%2FszOe%2FvMzhn2CmheghbO7F4jrePBticMU45wRLIxMYvJ6%2Bi%2F8sZSRnOUO8%2FN07J7PByLXun198dRVrP%2FRkm9NfunHnj7Pw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## Реализация программы
Программа написана на языке C++
```c++

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
Book InputBook();
int check(Book kniga, int year);


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Book book1, book2, book3, b1, b2, b3;
    int year;
    printf("--- Ввод данных о книгах ---\n");

    printf("\nКнига 1:\n");
    b1 = InputBook();
    printf("\nКнига 2:\n");
    b2 = InputBook();
    printf("\nКнига 3:\n");
    b3 = InputBook();

    printf("\nВведите год, после которого книги должны быть изданы (например, 1950): ");
    scanf("%d", &year);
    printf("\n--- Книги, изданные после %d, с >= 300 страниц и > 0 экземпляров ---\n", year);
    
    if (check(b1, year) == 1)
    {
        printf("\n Найдена книга 1: \n");
        OutputBook(b1);
    }
    if (check(b2, year) == 1)
    {
        printf("\n Найдена книга 2: \n");
        OutputBook(b2);
    }
    if (check(b3, year) == 1)
    {
        printf("\n Найдена книга 3: \n");
        OutputBook(b3);
    }
    if (check(b3, year) == 0 && check(b2, year) == 0 && check(b1, year) == 0)
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
    return b;
}
int check(Book kniga, int year) {
    if (kniga.publication_year > year && kniga.pages >= 300 && kniga.quantity > 0)
    {
        return 1;
    }
    else {
        return 0;
    }
}
Book OutputBook(Book buk) {
    printf(" Название: %s\n", buk.title);
    printf(" Автор: %s\n", buk.author);
    printf(" Год издания: %d\n", buk.publication_year);
    printf(" Количество страниц: %d\n", buk.pages);
    printf(" Жанр: %s\n", buk.genre);
    printf(" Количество экземпляров: %d\n", buk.quantity);
}
```
## Результат работы программы
```
--- Ввод данных о книгах ---

Книга 1:
Название: Золотая рыбка
Автор: Пушкин
Год издания: 1796
Количество страниц: 56
Жанр: сказка
Количество экземпляров: 5

Книга 2:
Название: Война и мир
Автор: Толстой
Год издания: 1865
Количество страниц: 531
Жанр: роман
Количество экземпляров: 7

Книга 3:
Название: Мастер и маргарита
Автор: Булгаков
Год издания: 1914
Количество страниц: 345
Жанр: роман
Количество экземпляров: 4

Введите год, после которого книги должны быть изданы (например, 1950): 1742

--- Книги, изданные после 1742, с >= 300 страниц и > 0 экземпляров ---

 Найдена книга 2:
 Название: Война и мир
 Автор: Толстой
 Год издания: 1865
 Количество страниц: 531
 Жанр: роман
 Количество экземпляров: 7

 Найдена книга 3:
 Название: Мастер и маргарита
 Автор: Булгаков
 Год издания: 1914
 Количество страниц: 345
 Жанр: роман
 Количество экземпляров: 4

```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
```
