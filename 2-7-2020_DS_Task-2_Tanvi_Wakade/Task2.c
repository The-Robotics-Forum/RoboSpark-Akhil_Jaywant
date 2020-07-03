 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 


int push(char ele, char *stack, int top)
{   
    top = top + 1;
    stack[top] = ele;
    return top;    
}



int pop(char *stack, int top)
{   
    top = top - 1;
    return top;
}



int top_element(char *stack, int top)
{
    return stack[top];
}

 int main()
 {
     char str[100] , stack[100];
     int top=-1 , flag =0;

     printf("\nEnter the string : ");
     gets(str);
     fflush(stdin);

    for (int i =0 ; i<strlen(str) ;i++)
    {
        if(str[i]=='(' || str[i]==')' || str[i]=='{' || str[i]=='}' || str[i]=='[' || str[i]==']' )
        {
           continue;
        }
        else 
        {
             printf("\n The string can only have brackets !");
            return 0;
        }
    }
     for (int i =0 ; i<strlen(str) ;i++)
    {
        
         if(str[i] == '(' || str[i] == '[' || str[i] == '{')
         {
             top = push(str[i] , stack , top);
         }
         else 
         {
             if(top == -1)
             {
                 printf("\n The string is unbalanced !");
                 flag =1;
                 break;
             }
             else 
             {
                top = pop (stack,top);
             }
         }
     }
     if(flag == 0)
     {
         if(top==-1)
            printf("\n The string is balanced !!");

         else 
            printf("\n The string is unbalanced !");
     }


 }