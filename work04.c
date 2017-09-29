#include <stdio.h>
#include <string.h>

int main(){
  printf("strcmp compares two strings and returns a number less than 0 if the 1st input goes to the left of the right input when sorted in alphabetical order and vice versa. Also it returns 0 when the inputs are the same\n");
  printf("strcmp(\"a\",\"b\"):   %d\n",strcmp("a","b"));
  printf("strcmp(\"a\",\"e\"):   %d\n",strcmp("a","e"));
  printf("strcmp(\"a\",\"aa\"):  %d\n",strcmp("a","aa"));
  printf("strcmp(\"ee\",\"a\"):  %d\n",strcmp("ee","a"));
  printf("strncmp is like strcmp but it only checks up the the nth character of the string\n");
  printf("strncmp(\"abcdefg\",\"abc\"): %d\n)",strncmp("abcdefg","abc",3));
}
