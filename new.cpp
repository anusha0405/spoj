#include <bits/stdc++.h>
using namespace std;

char str[5002];

int main() {
   scanf("%s",str);
   while(str[0]!='0')
   {
      int len=strlen(str);
      long long dp[len+1]={0};
     
      dp[0]=1;
      int i=1; 
      while(i<len)
      {
         
         int num=(str[i-1]-'0')*10;
         num+=str[i]-'0';
         
         if(str[i]-'0')
         {
            dp[i]=dp[i-1];
         }	
        
         if(num>9 && num<=26)	
         {
            dp[i]+=dp[i-2<0?0:i-2];
         }
         
         i++;	
      }
      printf("%lld\n",dp[len-1]);
      scanf("%s",str);
   }
   return 0;
}
