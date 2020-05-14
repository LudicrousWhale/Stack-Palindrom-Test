#include <stdio.h>
#include <stdlib.h>

    int top=-1;
    int front=0;
    int stack[5];
    void push(char);
    void pop();

int main()
{
    int i,b,d;


    char s[5],c;
    printf("Enter the string: ");
    scanf("%d",&b);
    for(i=0;s[i]!= '\0';i++)
    {

        c=s[i];
        push(c);
    }
    for(i=0;i<(strlen(s)/2);i++)
    {

        if(stack[top]==stack[front])
        {

            pop();
            front++;
        }
        else
        {
            printf("%s is not a palindrome",s);
        }
        if((strlen(s)/2)==front)
        {

            printf("%s is a palindrome",s);
            front=0;
            top=-1;

        }
    }


    return 0;
}
void push(char a)
{

    top++;
    stack[top]=a;

}
void pop()
{


    top--;
}
