#include<stdio.h>
#include<string.h>
int main() {
   char str[100];
   scanf("%[^\n]",str);
   int len=strlen(str);
   getchar();
   char find;
   scanf("%c",&find);
   getchar();
   char replace;
   scanf("%c",&replace);
   for(int i=0;i<len;i++)
   {
       if(str[i]==find)
       {
           str[i]=replace;
       }
       printf("%c",str[i]);
   }
}
