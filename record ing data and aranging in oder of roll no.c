#include<stdio.h>
#include<string.h>
struct stud
{
    int roll;
    char name[10];

}student[50],temp;

int main()
{
    int no,j,i=0;
    printf("Enter \"END\" to stop entry");
    printf("\nEnter the name of student : ");
    scanf("%s",student[i].name);
    while(strcmp(student[i].name,"END")!=0)
    {
        printf("\nEnter the roll no :");
        scanf("%d",&student[i].roll);
        i++;
        printf("\nEnter the name of student : ");
        scanf("%s",student[i].name);
    }
    no=i;i=0;
    for (i=0;i<no-1;i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(student[i].roll > student[j].roll)
            {
                temp =student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }

    for(i=0;i<no;i++)
    {
        printf("\nName : %s",student[i].name);
        printf("\nRoll no : %d",student[i].roll);

    }
}
