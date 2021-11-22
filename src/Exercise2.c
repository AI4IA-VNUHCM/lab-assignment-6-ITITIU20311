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

int sosanh(const char *s1, const char *s2)
{
    for ( ; *s1 == *s2; s1++, s2++)
	if (*s1 == '\0')
	    return 0;
    return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
}

void Ex2(int n, char *str[]){
	//Your codes here
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			int xet=sosanh(str[i],str[j]);
			if(xet==1){
				char x[40]="";
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
