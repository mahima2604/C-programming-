#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==str[len-i-1])
        {
            count++;
        }
    }
    if(count==len)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
