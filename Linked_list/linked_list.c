#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];  
    float price;     
    int pages;        
    char language[30];
    float weight;       
    int year;        
    struct Book* next; 
};

int main() {
    struct Book b1;
    strcpy(b1.title, "Гаррі Поттер і філософський камінь");
    b1.price = 920.0;
    b1.pages = 322;
    strcpy(b1.language, "Українська");
    b1.weight = 310.0;
    b1.year = 2002;

    struct Book b2;
    strcpy(b2.title, "Гаррі Поттер і Таємна кімната");
    b2.price = 930.0;
    b2.pages = 352;
    strcpy(b2.language, "Українська");
    b2.weight = 340.0;
    b2.year = 2002;

    struct Book b3;
    strcpy(b3.title, "Гаррі Поттер і в'язень Азкабану");
    b3.price = 950.0;
    b3.pages = 384;
    strcpy(b3.language, "Українська");
    b3.weight = 380.0;
    b3.year = 2002;

    b1.next = &b2;
    b2.next = &b3;
    b3.next = NULL;

    struct Book* p = &b1;
    while (p != NULL) {
        printf("Назва: %s\n", p->title);
        printf("Ціна: %.2f\n", p->price);
        printf("Сторінок: %d\n", p->pages);
        printf("Мова: %s\n", p->language);
        printf("Вага: %.1f\n", p->weight);
        printf("Рік: %d\n\n", p->year);
        p = p->next;
    }

    return 0;
}