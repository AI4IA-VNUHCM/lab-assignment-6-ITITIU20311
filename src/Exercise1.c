/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void docso(int x){
	if(x==1){
		printf("one");
	}
	if(x==2){
		printf("two");
	}
	if(x==3){
		printf("three");
	}
	if(x==4){
		printf("four");
	}
	if(x==5){
		printf("five");
	}
	if(x==6){
		printf("six");
	}
	if(x==7){
		printf("seven");
	}
	if(x==8){
		printf("eight");
	}
	if(x==9){
		printf("nine");
	}
}
//doctu 10 den 19
void dochangchuc(int x){
	if(x==0){
		printf("ten");
	}
	if(x==1){
		printf("eleven");
	}
	if(x==2){
		printf("twelve");
	}
	if(x==3){
		printf("thirteen");
	}
	if(x==4){
		printf("fourteen");
	}
	if(x==5){
		printf("fifteen");
	}
	if(x==6){
		printf("sixteen");
	}
	if(x==7){
		printf("seventeen");
	}
	if(x==8){
		printf("eighteen");
	}
	if(x==9){
		printf("nineteen");
	}
}
int docsohanghuc(int x){
	if(x==2){
		printf("twenty");
	}
	if(x==3){
		printf("thirty");
	}
	if(x==4){
		printf("fourty");
	}
	if(x==5){
		printf("fifty");
	}
	if(x==6){
		printf("sixty");
	}
	if(x==7){
		printf("seventy");
	}
	if(x==8){
		printf("eighty");
	}
	if(x==9){
		printf("ninety");
	}
}

void Ex1(int n){
	//Your codes here
	int a,b,c,d;
	d=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	a=n%10;
	if(a!=0){
		docso(a);
		printf(" thousand");
	}
	if(b!=0){
		printf(" ");
		docso(b);
		printf(" hundred");
	}
	if(c!=0){
		if(c==1){
			printf(" ");
			dochangchuc(d);
		}else{
			printf(" ");
			docsohanghuc(c);
			printf(" ");
			docso(d);
		}
	}


	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
