#include<stdio.h>
int main()
{
char c;
int uvowel,lvowel;
scanf("%d",&c);
uvowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
lowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
if(uvowel || lvowel)
   printf("%d" is a vowel",c);
else
   printf("%d" is a consonant",c);
return 0;
