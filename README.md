# Домашнее задание к работе 11
## Условие задачи
<img width="1102" height="436" alt="image" src="https://github.com/user-attachments/assets/9bdcc220-85c4-41b6-9a74-bb00332db49f" />
Пояснение. Создать структуру для хранения записи, указанной в индивидуальном варианте. Организовать ввод трех значений структур. Выполнить обработку 3 переменных структурного типа согласно варианту: отбор записей по условию, вычисление характеристики, поиск экстремального значения или сортировку. Вывести результат. В отчёте представить описание структуры, ввод данных, основную функцию обработки и результаты проверки.

## Алгоритм и блок-схема
### Алгоритм
1. Начало.
2. Задать признак `found = 0`
3. Ввести данные книги 1: название, автор, год издания, количество страниц, жанр, количество экземпляров.
4. Ввести данные книги 2 (те же поля).
5. Ввести данные книги 3 (те же поля).
6. Ввести год `year`, после которого должны быть изданы книги.
7. Для каждой из книг 1, 2, 3 проверить условие: год издания > `year` и страниц >= 300 и экземпляров > 0.
- Если условие выполнено, вывести данные книги и установить found = 1.
- Если после проверки всех книг found = 0, вывести сообщение «Книги, соответствующие вашим условиям, не найдены.»
8. Конец

### Блок-схема
<img width="402" height="837" alt="image" src="https://github.com/user-attachments/assets/e228597f-6ecb-4d95-b313-a666d7fe41d0" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=blockscheme%20(1).drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22books-filter%22%20name%3D%22Page-1%22%3E7Vxdb7M2FP41kbaLVmDn87JJPzatm7p10tt3N5MbTMJKcGacJtmvnw0mgCEJOITSlFSi%2BGAD8fP4PMcnhg6cLDYPFC3nvxILux1gWJsOvO0AYIKuyf8Jyza0ANCTlhl1LFkrNjw7%2F2FpNKR15VjYT1VkhLjMWaaNU%2BJ5eMpSNkQpWaer2cRNX3WJZjhjeJ4iN2v95lhsHlpHhhHbf8LObB5duRcdWaCosjT4c2SRdcIE7zpwQglh4d5iM8Gu6L2oX8J293uO7m6MYo8VaeB4Dsu2kafx2Tb6xpSsPAuLRkYHjtdzh%2BHnJZqKo2sOMrfN2cLlJZPv%2BoySNzwhLqHc4oqOuLIQffuhA%2BB98OmAidi%2FEX8%2F8hY28dg9WjiuYMSfzoKDC4zf8Jpv%2FyAL5MkqkgnmQJbzL2EEn%2FAS4X5wCcd1C9xS8BH1wy54R%2B5KdoEtuoCbglIE6DumDG8SvSa7%2BQGTBWZ0y6vME0zoyWbrmDW7U22UcjQ4ZBFJzs52Z45h5TsS2X0o5xAjCzIn41Ls8lrIdbFLZhQteFcsMeWQMEzVY0%2FxgWOcsJ0NjkaymQdnSXjOxrEynMpw5JWQN%2FOaOYx3qahrhAa0YnN%2BUmHpu7z7x6%2B80J8Fe0GF5erVdaaIOcT7e4sRTTYW3sQ%2F0HaGPZq62r8r5PFb2GoxdJBlKOynGWqCNENNoxKKgpaidVEUqBQFxygKDlAUHKEoUCkKaqcoMHpVUBS2FK2LolClKDxGUXiAovAIRaFKUVg7RaFZiRcNv%2FdFsHTHuWayNO7pkuTo55Cjp5KjlyJHtwpyWIWCQDoni9eVXwDli0R1XzzGW%2FbRQnRB4DQENIFd9Sa7auE2U0wHdepZg6kFFLeped7Ya2VvmM9c7rUIa8Icxg4Vxpppd9arIiik7bSlnbYUougwZ2KtCG5voDAUVBAT2sV8apnsiUqxRlCmrHPPUCydPTG1QO5mQTYVkPtKVNUfVCGchaamrXDmzhIrFU5wJuEEzRHOQb8K4byUZErDSb%2BjivfqL3fpjs%2BcXCkipH2FscMqhLSYj22FtC4hVdzSsAqQrUIJtFZIc3NZlQopPJOQwuYI6WhYhZBeSsq34aTPE9LPnQLWEFLTqOJnCruYk22V9IOUlPupKqS020rpUa%2BSRDgAWV%2BAjJzh3FUEaKgADSrJgRYC%2BhMoUMNzoB3uCEd8a3aGY7E%2FDizju2Db7cAbwaMJ6NyER2%2BDbU8Y42K4P5JNwgrx0TvRfDzW4l%2FOb0ZH1aSSpUNYzsuwlVkSl%2BUjWdGprBUvLEuwVJzkWRYJ5VI%2BIx5y72JrknbYs27EWj1enLrI952pMG4c9iJE67onS9931fk3SxwSxe9S3hq5IC3sHYboDLOoz%2FYwgWKXhzTvaQBOQhXqopp1PS2oR0AFdYHa1QUVtKCWBRXWBWpPF1TYgloW1GhJRx249nVxjdedtNAWhdaqTVgHerBa59RVMwFoAsMXiWEMaHDMRa%2FYHaPp2yzIEUQdz3vYDj4fj%2Fqh%2BX0S9Wj5iBrld2WwXhMlhnqUoG2oVXKU27WN8lEDR3k5SC9nlEerM9RRHs3QxYy%2BthA8yvWVZYbdHGZ8ksFunYpp0JR3GtomKiyJ4zE%2FceYnYYiTLAPl6awBVJ6vU%2BrDw%2FX5TngHMbt2X6Ug4UxNV3TOOd%2BXDTj2uKKaAw5TM2dHz8mJi3RCdn3CopmxO%2Bs4%2F7IhB2xSyKGZ9rObw4xPMtqtU5N%2BWiFHf6Ssa%2BmVCzmU%2BhWEHJopSeucGckvG3LscUV1hxya6UzaZqnLhhy1%2FfJg6uYym4Pp5YzzaL1PM0IOzZSm3RxmfJLRHsL%2B0SGHaQ7KxRxqgwqCDt2Ua7cNOqoPOvY4o5qDDqCZbD0rJ76GQJ28%2BPYk8ZJe58q4PvQMr%2BKqoirEtn3MyrkzqD5LEI4G2UyhbEnPBjQzuLQ5LG6smH64cMJuSeFUGqSF80OJ%2BvDL%2B2L4%2Fjj46%2Fenl%2Bm3Wzx4maArzUxz7rl0fgJLP8YQ13kkZCmJ%2Bw9mbCuJhFaMKKNgP%2BH5%2Fu0mknJR2CZ1fc9QCApxs6AUtbOwjVYue8z3%2BeFLJ5s7ltTFUuH63hp0%2FhBZDq%2BK5%2Bdxlr7o1WNvrBTL53%2F2fMfCkaWJMJz8DsuE6hqB6g4S69bHcpV62Ojkp52iKcDuxZZm%2Bp1GV5W8NzCXHIWegPqi5DgSkt0knnpIhmf9umhhQo1XdvBi%2FM7cUNviVw%2FDu%2F8B%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
```
## Результат работы программы
```
--- Ввод данных о книгах ---

Книга 1:
Название: Золотая рыбка
Автор: Пушкин
Год издания: 1791
Количество страниц: 60
Жанр: сказка
Количество экземпляров: 13

Книга 2:
Название: Война и мир
Автор: Толстой
Год издания: 1867
Количество страниц: 352
Жанр: роман
Количество экземпляров: 5

Книга 3:
Название: Мцыри
Автор: Лермонтов
Год издания: 1812
Количество страниц: 451
Жанр: стихи\
Количество экземпляров: 0

Введите год, после которого книги должны быть изданы (например, 1950): 1800

--- Книги, изданные после 1800, с >= 300 страниц и > 0 экземпляров ---

Найдена Книга 2:
  Название: Война и мир
  Автор: Толстой
  Год издания: 1867
  Страниц: 352
  Жанр: роман
  Экземпляров: 5

```
## Информация о разработчике
```
Имя: Харитонов Дмитрий Олегович
Группа: бИЦТ-261
Вариант: 28
```
