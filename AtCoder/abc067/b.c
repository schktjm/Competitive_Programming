#include <stdio.h>

int main(){

  int l[100],n,k;

  scanf("%d%d",&n,&k);
  int i;
  for(i=0;i<n;i++)scanf("%d",&l[i]);
  int j,tmp;
  for(i=0;i<n;i++){
    for(j=0;j<n-i;j++){
      if(l[j]<l[j+1]){
	tmp=l[j];
	l[j]=l[j+1];
	l[j+1]=tmp;
      }
    }
  }
  //  for(i=0;i<n;i++)printf("%d ",l[i]);
  //printf("\n");
  //printf("%d\n",k);
  int sum=0;
  for(i=0;i<k;i++)sum+=l[i];
  printf("%d\n",sum);

  return 0;

}
