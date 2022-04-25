#include <stdio.h>
// #pragma pack(1)
struct store
{
    double price;
    char *title;
    char *author;
    int num_pages;
    int color;
    int size;
    char *design;
};

int main()
{
    struct store book;
    // book.title = "The Alchemist";
    // book.author = "Paulo Coelho";
    // book.num_pages = 197;
    // book.price = 23;
    printf("%ld bytes", sizeof(book));
    return 0;
}