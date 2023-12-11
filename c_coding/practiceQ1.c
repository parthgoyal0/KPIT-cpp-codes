#include<stdio.h>
struct student{
    char name[25];
    int roll_number;
    int marks[5];
};
struct student s[5];
int main(){
    for(int i=0;i<5;i++){
    printf("Enter the student name : \n");
    scanf("%s",&s[i].name);
    printf("enter student's roll number : \n");
    scanf("%d",&s[i].roll_number);
    printf("enter student's marks : \n");
    for(int j=0;j<5;j++){
        scanf("%d",&s[i].marks[j]);
    }
        
    }
    display();
    return 0;
}
void display(){
    int sum[5]={0,0,0,0,0},p=0;
    int max=sum[0];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum[i]+=s[i].marks[j];
        }
    }
    for(int k=0;k<5;k++){
        if(sum[k]>max){
            max=sum[k];
            p=k;
        }
    }
    printf("Student with the highest marks is: \n");
    printf("Name : %s\nRoll number : %d\nMarks : %d\n",s[p].name,s[p].roll_number,max);
}