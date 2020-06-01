#include <stdio.h>

int main() {
	
	char string[500];
	scanf("%s", string);
	
	int i, consonant, vowel;
	i = consonant = vowel = 0;
	
	while (string[i] != '\0') {
		if (string[i] == 'a' || string[i] =='e'|| string[i] =='i'|| string[i] =='o'|| string[i] =='u'||
		string[i] =='A'|| string[i] =='E'|| string[i] =='I'|| string[i] =='O'|| string[i] =='U' ) {
			vowel += 1;
		}
		else { consonant += 1;}
		
		i+=1;
	}
	
	printf ("자음은 총 %d개입니다. \n모음은 총 %d개입니다.", consonant, vowel);
	
	return 0;
}