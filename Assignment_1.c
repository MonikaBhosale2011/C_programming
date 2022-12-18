//Write a C program to read and print information of a book using structure.
//The output of given problem statement will be Book details like books name, Authors name, ISBN Code and Price.
// Java
// Balagurusamy
// 9765
// 477
    
#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct bookdetail
{
char book_name[20];
char author_name[20];
int ISBN_Code;
float price;
 
};
 
void output(struct bookdetail v[],int n);
 
void main()
{
struct bookdetail b[SIZE];
 
int num,i;
printf("Enter the Numbers of Books:");
scanf("%d",&num);
printf("\n");
for(i=0;i<num;i++)
 
{
 
printf("\t=:Book %d Detail:=\n",i+1);
 
printf("\nEnter the Book Name:\n");
scanf("%s",b[i].book_name);
 
printf("Enter the Author of Book:\n");
scanf("%s",b[i].author_name);
 
printf("Enter the Pages of Book:\n");
scanf("%d",&b[i].ISBN_Code);
 
printf("Enter the Price of Book:\n");
scanf("%f",&b[i].price);
 
}
 
output(b,num);
 
}
 
void output(struct bookdetail v[],int n)
 
{
 
int i,t=1;
for(i=0;i<n;i++,t++)
 
{
 
printf("\n");
 
printf("Book No.%d\n",t);
printf("\t\tBook %d Name is=%s \n",t,v[i].book_name);
printf("\t\tBook %d Author is=%s \n",t,v[i].author_name);
printf("\t\tBook %d Pages is=%d \n",t,v[i].ISBN_Code);
printf("\t\tBook %d Price is=%f \n",t,v[i].price);
printf("\n");
 }
 
}
