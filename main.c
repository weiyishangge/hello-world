#include <stdio.h>


/* squeeze: delete all c from s */
void squeeze(char s[], char c)
{
	int i,j;
	for (i = j = 0;s[i] != '\0';i++)
	{
		if (s[i] != c)
		{
			s[j++] = s[i];
			
		}
	}
	s[j] = '\0';
	
}



void main()
{
	char s[] = "abcdabcdabcd";
	char c[] = 'c';
	squeeze(s,c);

	return ;
}