#include <stdio.h>

int main(){

  int a,n,s4=0,s2=0,s0=0;

  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a%4==0)s4++;
    else if(a%2==0)s2++;
    else s0++;
  }

  int res=0;
  if(s2>0)s2=1;

  if(s0==0)res=1;
  else if(s0==0 && s4==0)res=1;
  else if(s4==n)res=1;
  else if(s2+s0-1<=s4)res=1;

  if(res>0)printf("Yes\n");
  else printf("No\n");

  return 0;

}
