#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct info
{
    int pages;
    char name[100];
    char genre[100];
    char author[100];
    int instock;
    int stocknumb;
    int price;
    struct info *next;
};
struct customer
{
    char custo_name[100];
    int status;
    char book_name[100];
    char lend_date[10];
    char date_of_return[10];
    char email[100];
    struct customer *next;
};
int len(char str[])
{
return strlen(str);
}
int main()
{
int run;
printf("\nis this the first time you run this program\n");
scanf("%d",&run);
if(run==1)
{
    struct info *info_head;
    struct info *info_node=NULL;
    info_node=malloc(sizeof(struct info));
    int pages;
    char name[100];
    char genre[100];
    char author[100];
    int instock;
    int stocknumb;
    int price;
    printf("\nenter the following\n");
    printf("\nthis will be your first book\n");
    printf("\nenter the pages of the book\n");
    scanf("%d",&pages);
    printf("\nenter the name of the book\n");
    fgets(info_node->name,100,stdin);
    printf("\nenter the name of the genre of the book\n");
    fgets(genre,100,stdin);
    printf("\nenter the name of the author\n");
    fgets(author,100,stdin);
    printf("\nis the book in our stock\n");
    scanf("%d",&instock);
    printf("\nenter the number of books in the stock\n");
    scanf("%d",&stocknumb);
    printf("\nthe price of the book\n");
    scanf("%d",&price);
    for(int i=0;i<100;i++)
    {
        info_node->name[i]=name[i];
        info_node->genre[i] = genre[i];
        info_node->author[i] = author[i];
    }
    info_node->pages = pages;
    info_node->instock = instock;
    info_node->stocknumb = stocknumb;
    info_node->next=NULL;
    printf("\nthe data is \n");
    printf("\nthe number of pages %d \nthe name %s \nthe genre %s \nthe author name %s \nthe instock %d\n",info_node->pages,info_node->name,info_node->genre,info_node->author,info_node->instock);
    printf("\nthe stock number %d\n",info_head->stocknumb);    
    /*now we go for the customer  */
    struct customer *custo__head;
    struct customer *custo_node=NULL;
    custo_node=malloc(sizeof(struct customer));
    char custo_name[100];
    int status;
    char book_name[100];
    char lend_date[10];
    char date_of_return[10];
    char email[100];
    printf("\nnow enter the details of the customer\n");
    printf("\nenter the name of the customer\n");
    fgets(custo_name,100,stdin);
    printf("\ndid he ake a book\n");
    scanf("%d",&status);
    printf("\nenter the date he took the book\n");
    fgets(lend_date,10,stdin);
    printf("\nenter the return date\n");
    fgets(date_of_return,10,stdin);
    printf("enter the email of the customer");
    fgets(email,100,stdin);

    for(int t=0;t<=100;t++)
    {
        custo_node->custo_name[t]=custo_name[t];
        custo_node->status=status;
        custo_node->book_name[t]=name[t];
        custo_node->email[t]=email[t];
    }
    for(int t=0;t<=10;t++)
    {
        custo_node->lend_date[t]=lend_date[t];
        custo_node->date_of_return[t]=date_of_return[t];
    }
    custo_node->next=NULL;
}
else
{
    printf("\nhehe\n");
}
}