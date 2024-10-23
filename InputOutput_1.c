//1.1
/*#include<stdio.h>
int main()
{
    printf("My name is Rayhan Parvaz");

    return 0;
}
*/
//1.2
/*#include<stdio.h>
int main()
{
    int n;
    n=5;
    printf("The value of n=%d\n",n);

    return 0;
}
*/
//1.3-1.4
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");

    scanf("%d",&n);
    printf("The number is=%d",n);

    return 0;
}
*/
//1.5
/*#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number:");

    scanf("%f",&n);
    printf("The number is=%.2f",n);

    return 0;
}
*/
//1.6
/*#include<stdio.h>
int main()
{
    long n;
    printf("Enter a number :");

    scanf("%ld",&n);
    printf("Number is=%ld",n);
}
*/
//1.7
/*#include<stdio.h>
int main()
{
    double n;
    printf("Enter a number :");

    scanf("%lf",&n);
    printf("Number is=%lf",n);
}
*/
//1.8
/*#include<stdio.h>
int main()
{
    char n;
    printf("Enter a number :");

    scanf("%c",&n);
    printf("Output=%c",n);//%d
}
*/
//1.9
/*#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Enter a character=%c",n);
    return 0;
}
*/
//1.10
/*#include<stdio.h>
int main ()
{
    char n;
    printf("Enter a character:");
    scanf("%c",&n);
    printf("Enter a Number=%d",n);
    return 0;
}
*/
//1.11Write a program that read any lower case character and display in upper case?
/*#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a lower character:");
    scanf("%c",&ch);
    printf("Enter a upper character =%c",ch-32);
    return 0;
}
*/
//1.12Write a program that read any Upper case character and display in lower case?
/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a upper charater:");
    scanf("%c",&ch);
    printf("Enter a lower charater:%c",ch+32);
    return 0;
}
*/
//1.13. Write a program that read any decimal number and display equivalent octal number
/*#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a decimal number :");
    scanf("%d",&n);
    printf("Octal value=%o",n);
    return 0;
}
*/
//1.14-15. Write a program that read any decimal number and display equivalent hexadecimal number
/*#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a decimal number :");
    scanf("%d",&n);
    printf("hexadecimal value=%X",n);
    return 0;
}
*/
//1.16. Write a program that read any octal number and display equivalent decimal number.
/*#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a octal number :");
    scanf("%o",&n);
    printf("Decimal value=%d",n);
    return 0;
}
*/
//1.17. Write a program that read any hexadecimal number and display equivalent decimal number
/*#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a hexadecimal number :");
    scanf("%X",&n);
    printf("Decimal value=%d",n);
    return 0;
}
*/
//1.18.Read and display your name?
/*#include<stdio.h>
int main ()
{
    char n[20];
    printf("Enter your name=");
    scanf("%s",&n);
    printf("My name is:%s",n);
    return 0;
}
*/
//1.19 Read and display a line of text
/*#include<stdio.h>
int main ()
{
    char n[20];
    printf("Enter text=");
    scanf("%[^\n]",&n);
    printf("The test is:%s",n);
    return 0;
}
*/
//1.20
/*#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day = %d\nMonth = %d\nYear = %d\n",d,m,y);
}
*/
//1.21
/*#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date (DD-MM-YYYY): ");
    scanf("%d-%d-%d",&d,&m,&y);
    printf("Day = %d\nMonth = %d\nYear = %d\n",d,m,y);
}
*/
//1.22
/*#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter date (DD,MM,YYYY): ");
    scanf("%d%*c%d%*c%d",&d,&m,&y);
    printf("Day = %d\nMonth = %d\nYear = %d\n",d,m,y);
}
*/

