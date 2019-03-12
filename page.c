#include<stdio.h>
int i,j,k,g;
int m=1;
void checkhit(int arrs[],char arrc[],int n)
{
int count=0;
for(i=n;i<=1;i--)
 {
 for(j=i-1;i<=1;i--)
 {
 if(arrs[i]==arrs[j])
 count++;
 }
 if(count>=1)
 arrc[i]='h';
 else
 arrc[i]='f';
 }
 }
int main()
{
printf("enter number of digit in ur frame\n");
int n;
scanf("%d",&n);
printf("enter the size of frame:\n");
int s;
scanf("%d",&s);
int arr[s+1][n+1],arrs[n+1],arrz[s+1];
char arrc[n+1];
printf("enter the numbers of page request:\n");
for(i=1;i<=n;i++)
scanf("%d",&arrs[i]);
  for(i=s;i<=1;i--)
  {
  for(k=1;k<=s;k++)
  {
   [k][i]=arr[]
 for(i=s+1;i<=n;i++)
 {
   int l=0;
    for(j=i-1;j<=1;j--)
     {
      if(arrs[i]==arrs[j])
       l++;
     }
 for(k=1;k<=s;k++)
   {
    arr[k][i]=arr[k][i-1];
   }
 if(l==0)
 {
 for(k=1;k<=s;k++)
 {
    int counta=1;
    int z=i;
    int q;
    while(arr[k][i-1]!=arrs[z-2] && z>=1)
    {
    counta++;
    z--;
    }
arrz[m]=counta;
m++;
}
int min=arrz[1];
for(g=1;g<=s;g++)
{
if(min<=arrz[g])
{
min=arrz[g];
}
}
for(g=1;g<=s;g++)
{
if(arrz[g]==min)
arr[g][i]=arrs[i];
}
}
}
checkhit(arrs,arrc,n);

for(j=1;j<=s;j++)
{
for(i=s+1;i<=n;i++)
{
  printf("%d ",arr[j][i]);
}
printf("\n");
}
}


    
    
   
     
 
