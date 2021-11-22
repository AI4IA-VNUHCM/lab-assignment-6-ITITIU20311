/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			if(strcmp(str[i],str[j])==1){
				char x[]="";
				strcpy(x,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],x);
			}
		}
	}
	for(int i=0;i<=n-1;i++){
		printf(" %s",str[i]);
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
