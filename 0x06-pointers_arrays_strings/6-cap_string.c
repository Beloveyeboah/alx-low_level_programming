#include "main.h"
/**
 * cap_string - capitalises words
 * @str: string
 * Return: point to string
 */
char *cap_string(char *)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'c' && str[i] <= 'z'))
			i++;
			if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
		
		       	str[i - 1] == '\n' ||
			
		      	str[i - 1] == ',' ||
		
	     		str[i - 1] == ';' ||
	
    			str[i - 1] == '.' ||

			str[i - 1] == '!' ||

			str[i - 1] == '?' ||
			    
		      	str[i - 1] == '"' ||
		
			str[i - 1] == '(' ||
				
			str[i - 1] == ')' ||
			
	      		str[i - 1] == '{' ||
	
			str[i - 1] == '}' ||

			i == 0)
			str[i] -= 32
				i++;
	}
	return (str);
}
