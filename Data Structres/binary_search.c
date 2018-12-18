//binary searching
//author= Sarath Molathoti && date = 24/07/2018

#include<stdio.h>
#define max 1000
void main(){
	int a[max],n,l,i,h,m,key;
	printf("Enter size of an array : ");
	scanf("%d",&n);
	printf("Enter the element to search : ");
	scanf("%d",&key);
	printf("Enter array elements :\n");
	for(i=0;i<n;++i){
	   scanf("%d",&a[i]);
	}
	i=0;l=0;h=n;
	m=(l+h)/2;
	while((l<=h)&&(a[m]!=key)){
	     if(key<a[m])
	             h=m-1;
	     else if(key > a[m])
	             l=m+1;
	     m=(l+h)/2;
	}
	if(l>h){
	  printf("Element not found\n");
	}
	else {
	  printf("Element found\n");
        }
}
	
