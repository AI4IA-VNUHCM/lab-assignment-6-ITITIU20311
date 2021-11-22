/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int len=strlen(str);
	int start=0,end=0;
	int startmax,endmax,startmin,endmin;
	int min=1,max=1;
	while(end<len){
		if(end<len && str[end]!=' '){
			end++;
		}else{
			max=end-start+1;
			min=end-start+1;
			break;
		}
	}
	start=0;
	end=0;
	while(end<len){
		if(end<len && str[end]!=' '){
			end++;
		}else{
			int wlen=end-start+1;
			if(wlen>max){
				max=wlen;
				startmax=start;
				endmax=end;
			}
			if(wlen<min){
				max=wlen;
				startmax=start;
				endmax=end;
			}
			start=end+2;
		}
	}
	printf("%d",max);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
