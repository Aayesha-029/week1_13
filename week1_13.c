#include<stdio.h>
int stack[100];
int top=-1;
char push(char x)
{
stack[++top]=x;

}

void pop()
{
    stack[top--];

}
int main()
{
   char exp[100];
   int i;
   printf("enter expression:");
   scanf("%s",exp);
   for(i=0;exp[i]!='\0';i++)
   {
       if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
          {
            push(exp[i]);
          }
          else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
          {
              if(top==-1)
               {
                printf("Not Balenced");
                return 0;
               }
               pop();
          }
   }
   if(top==-1)
   {
    printf("Balenced");
   }
   else
   {
    printf("Not Balenced");
   }
 return 0;   

}
