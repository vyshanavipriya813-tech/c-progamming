#include<stdio.h>
#include<math.h>
int main()
{
int T,S,B,capacity_in_KB;
scanf("%d%d%d",&T,&S,&B);
capacity_in_KB=(2*T*S*B*512)/1024;
printf("%d KB", capacity_in_KB);
return 0;
}
