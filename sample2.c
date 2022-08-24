#include <stdio.h>
int main()
{
   #$LLR-21
   char name[50];
   int marks, i, num;
   #$LLR-21
   printf("Enter number of students: ");
   scanf("%d", &num);
   #$LLR-22
   FILE *fptr;
   fptr = (fopen("C:\\student.txt", "a"));
   #$LLR-22
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);
      printf("Enter marks: ");
      scanf("%d", &marks);
      fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
   }
   #$LLR-21
   fclose(fptr);
   #$LLR-21
   return 0;
}