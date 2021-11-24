/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int len=strlen(str);
	int start=0;
	while(str[start]==' '){
		for(int i = 0; i <= len; i++) {
		str[i] = str[i + 1];
	}
	}
	int end=len-1;
	int count;
	while(str[end]==' '){
		str[end]='\0';
		end=end-1;
	}
	for(int i = 0; i < len; i++){
		if(str[i]== ' ' && str[i+1]==' ') {
			for(int j = i + 1; j < len; j++) {
				str[j] = str[j + 1];
			}
			i--;
			len--;
		}
	}
	printf("%s",str);

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}