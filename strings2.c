#include <string.h> 
#include <stdio.h> 
int main(){
char str[1000]; 
scanf("%[^\n]s",str); 
int len=strlen(str); 
int temp=0,i,j,count=0;
for(i=len;i>0;i--)
{
  count++;
  if(str[i]==' '){
    
  for(j=i+1;j<=len-temp;j++)
  {
    printf("%c",str[j]);
  }
  printf(" ");
    temp+=count;
    count=0;
    
  }
if(i==1){
  for(j=i-1;j<=len-temp;j++)
  {
    printf("%c",str[j]);
  }
}}
}
