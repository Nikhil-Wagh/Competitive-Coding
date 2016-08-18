#include<stdio.h>
using namespace std;

double copas[15][15];
int n,t,cont;

int main(){
	scanf("%d%d",&n,&t);
	copas[1][1]=t;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(copas[i][j]>=1){
				copas[i+1][j+1]+=(copas[i][j]-1)/2;
				copas[i+1][j]+=(copas[i][j]-1)/2;
				cont++;
			}
		}
	}
	printf("%d",cont);
}
