#include<stdio.h>
int stack[100];
int top=-1;
void push(char x)
{
stack[++top]=x;

}

char pop()
{
  return stack[top--];

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
                printf(" Expression is Not Balenced");
                return 0;
               }
              char ch=pop();
              if((ch=='(' && exp[i]!=')')||
                 (ch=='{' && exp[i]!='}')||
                 (ch=='[' && exp[i]!=']'))
              {
                  printf("Expression is NOT Balenced");
                  return 0;
          }

          }   
   }
 
   if(top==-1)
   {
    printf(" Expression is Balenced");
   }
   else
   {
    printf(" Expression is Not Balenced");
   }
 return 0;   

}

