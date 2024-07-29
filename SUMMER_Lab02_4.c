#include <stdio.h>

int main(){
	int a, b, c, d;
	int bunmo, bunja;
	int cnt=2;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	bunja = (a*d)+(b*c);
	bunmo = b*d;
	
	while(cnt<=bunja && cnt<=bunmo){
		if((bunja%cnt!=0)||(bunmo%cnt!=0)){
			cnt++;
		}
		else {
			bunja /= cnt;
			bunmo /= cnt;	
		}
	}
	
	printf("%d %d", bunja, bunmo);
	
}
