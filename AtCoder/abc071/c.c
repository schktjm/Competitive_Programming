#include <stdio.h>

int main(){

  int n,a[100000],i;
  int count[100000]={};

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int j,k;
  for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
      if(a[j]<a[j+1]){
	k=a[j];
	a[j]=a[j+1];
	a[j+1]=k;
      }
    }
  }
  int s=0;
  for(i=1;i<n;i++){
    if(a[i-1]==a[i]){
      count[s++]=a[i];
      a[i]=0;
    }
    if(s>1)break;
  }

  if(s<2)printf("0\n");
  else printf("%d\n",count[0]*count[1]);

  return 0;
}
      
