//input details of 03 students Id,markE,markM,markS
//store these details within student.dat

//Method 01

/*
#include<stdio.h>

int main()
{
    int i,id,markE,markM,markS;

    FILE *stu;
    stu = fopen("student.dat","w");

    if(stu == NULL)
    {
        printf("File is not created...");
        return -1;
    }

    for(i=0;i<3;i++)
    {
        printf("Enter student ID ,three marks for English,Maths,Science:");
        scanf("%d %d %d %d",&id,&markE,&markM,&markS);

        fprintf(stu, "%d\t%d\t%d\t%d\n",id,markE,markM,markS);
    }

    fclose(stu);

    return 0;
}

*/

//Read these details from the file and calculate &display total,marks for each students

/*

#include<stdio.h>

int main()
{
    int i,id,markE,markM,markS,total;

    FILE *ptr;

    ptr = fopen("student.dat","r");

    if(ptr == NULL)
    {
        printf("The file is not opened");
        return -1;
    }

    fscanf(ptr, "%d %d %d %d",&id,&markE,&markM,&markS);

    while(!feof(ptr))
    {
        total=markE+markM+markS;
        printf("Student ID = %d , Total marks is = %d\n",id,total);
        fscanf(ptr, "%d %d %d %d",&id,&markE,&markM,&markS);
    }

    fclose(ptr);
    return 0;
}

*/

//Method 02

// Above mentioned 2 C codes can be given together

/*

#include<stdio.h>

int main()
{
    int i,id,markE,markM,markS,total;

    FILE *stu;
    stu = fopen("student.dat","w");

    if(stu == NULL)
    {
        printf("File is not created...");
        return -1;
    }

    for(i=0;i<3;i++)
    {
        printf("Enter student ID ,three marks for English,Maths,Science:");
        scanf("%d %d %d %d",&id,&markE,&markM,&markS);

        fprintf(stu, "%d\t%d\t%d\t%d\n",id,markE,markM,markS);
    }

    fclose(stu);

    stu = fopen("student.dat","r");  // could reuse an existing file pointer

    if(stu == NULL)
    {
        printf("File is not opened");
        return -1;
    }

    fscanf(stu, "%d %d %d %d",&id,&markE,&markM,&markS);
    while(!feof(stu))
    {
        total=markE+markM+markS;
        printf("Student ID = %d , Total marks = %d\n",id,total);
        fscanf(stu, "%d %d %d %d",&id,&markE,&markM,&markS);
    }

    fclose(stu);

    return 0;
}

*/

// Method 03

#include<stdio.h>

int main()
{
    int i,id,markE,markM,markS,total;

    FILE *stu;
    stu = fopen("student.dat","w");

    if(stu == NULL)
    {
        printf("File is not created...");
        return -1;
    }

    for(i=0;i<3;i++)
    {
        printf("Enter student ID ,three marks for English,Maths,Science:");
        scanf("%d %d %d %d",&id,&markE,&markM,&markS);

        fprintf(stu, "%d\t%d\t%d\t%d\n",id,markE,markM,markS);
    }

    fclose(stu);

    FILE *ptr;  //  could reuse an existing file pointer OR create new file pointer

    ptr = fopen("student.dat","r");

    if(ptr == NULL)
    {
        printf("File is not opened");
        return -1;
    }

    fscanf(ptr, "%d %d %d %d",&id,&markE,&markM,&markS);
    while(!feof(ptr))
    {
        total=markE+markM+markS;
        printf("Student ID = %d , Total marks = %d\n",id,total);
        fscanf(ptr, "%d %d %d %d",&id,&markE,&markM,&markS);
    }

    fclose(ptr);

    return 0;
}
