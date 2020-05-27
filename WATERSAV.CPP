#include <stdio.h>
#include<conio.h>


void main(){
	void insert(int a[],int);
	int water_level(int a[],int);
	int n,a[100];
		clrscr();
			printf(" \n Enter size of an array:-");
			scanf("%d",&n);
	insert(a,n);
	printf ( "Maximum water that can be accumulated is %d",water_level(a, n));
}



int water_level(int a[], int n)
{
	// initialize output
	int result = 0,lmax=0,rmax=0,l=0,h=n-1, m,p;

	//traverse the array
	while (l <= h) {
		if (a[l] < a[h]) {
			if (a[l] > lmax)
				lmax = a[l];
			else
				result =result+(lmax-a[l]);
		     l++;
		}
		else {
			if (a[h] > rmax)
				rmax = a[h];
		       else
				result = result+(rmax-a[h]);
			h--;
		}
	}

	return result;
}
void insert(int a[],int n){
	int i;
		printf("\n Enter Element in an array:-");
		for(i=0;i<n;i++){

			scanf("%d",&a[i]);
		}
}
