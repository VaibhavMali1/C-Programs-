#include <stdio.h>  
struct store  
{  
    double price;  
    union  
    {  
        struct{  
        char *title;  
        char *author;  
        int number_pages;  
        } book;  
      
        struct {  
        int color;  
        int size;  
        char *design;  
        } shirt;  
    }item;  
};  
  int main()  
{  
    struct store s;  
    s.item.book.title = "RICH DAD POOR DAD";   
    s.item.book.author = "ROBERT KIYOSAKI";  
    s.item.book.number_pages = 336;  
    printf("Size is %ld", sizeof(s));  
    return 0;  
}  