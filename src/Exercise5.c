/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int findend(char *str,int start,int len){
	if(str[start]=="("){
		for(int i=start+1;i<len,i++){
			if(str[i==""])
		}
	}
}

void Ex5(char *str){
	//Your codes here
	int len = strlen(str);
	for(int i=0;i<len,i++){
		if(str[i]=="}" || str[i]=="]" || str[i]==")"){
			printf("Invalid!");
		}else{
			
		}	
	} 
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
