#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ParnStack{
    int Top;
    int Capacity;
    char *Array;
};
int isFull(struct ParnStack *Stack){
    if(Stack->Top==Stack->Capacity-1)
        return 1;
    else
        return 0;    
}
//Check the Stack is Empty
int isEmpty(struct ParnStack *Stack){
    if(Stack->Top==-1){
        return 1;}
    else
        return 0;        
}
void Push(struct ParnStack* Stack,char new_data){
    if(isFull(Stack))
        printf("The Stack is Full !\n");
    else{
        Stack->Array[++Stack->Top]=new_data;
    }
}
char Pop(struct ParnStack* Stack){
    char x;
    if(isEmpty(Stack))
        printf("The Stack is Empty !\n");
    else{
        x=Stack->Array[Stack->Top--];
    }
    return x;
}
int isPair(char char1, char char2) 
{ 
    if (char1 == '(' && char2 == ')') 
        return 1; 
    else if (char1 == '{' && char2 == '}') 
        return 1; 
    else if (char1 == '[' && char2 == ']') 
        return 1; 
    else
        return 0; 
} 
  
int CheckExp(char exp[]) 
{ 
    struct ParnStack Stack;
    int n=strlen(exp);
	Stack.Array = (char *)malloc(sizeof(char) * n);
	Stack.Capacity = n;
	Stack.Top = -1;    
    int i = 0;
    char x;
    while (exp[i])  
    { 
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '['){
            Push(&Stack, exp[i]); 
            //printf("%c\n",Stack.Array[Stack.Top]);
        }
        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']')  
        { 
            if(Stack.Top==-1)
                return 0;
            else
            {
                x=Pop(&Stack);
                if (!isPair(x, exp[i])) 
                    return 0; 
            }
            
        } 
        i++;
        
    } 
  
    if (Stack.Top==-1) 
            return 1; //balanced 
    else
        return 0;
} 
int main() 
{ 
    char exp[] = "{{{}}}{}"; 
    if (CheckExp(exp)) 
        printf("Balanced \n"); 
    else
        printf("Not Balanced \n"); 
    return 0; 
} 
