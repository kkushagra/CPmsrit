#include<string.h>
#include<stdio.h>
main(){int t=10,c,i;while(t--){c=1;char s[21];scanf("%s",s);for(i=0;i<strlen(s);i++){if(s[i]=='T')c*=2;else if(s[i]=='D')c*=2;else if(s[i]=='L'||s[i]=='F')c*=2;else continue;}printf("%d\n",c);}}

