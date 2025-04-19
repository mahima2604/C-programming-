#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int count;
    char flag[100];
    for(int i=0;i<len;i++)
    {
        count=1;
        if(flag[i]==1)
        {
            continue;
        }
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                flag[j]=1;
            }
        }
        printf("%c %d \n",str[i],count);
    }
}
