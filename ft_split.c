#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int ft_wordcount(char const *str, char c)
{
          int i;
          int count;

          i = 0;
          count = 0;
          while(str[i] != '\0')
          {
                    if(str[i] == c)
                    {
                              i++;
                    }
                    else
                    {
                              count++;
                              while (str[i] && str[i] != c)
                              {
                                        i++;
                              }
                              
                    }
          }
          return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char **ft_split_words(char const *s, char c, char **str, int words)
{
          int i;
          int num_words;
          int word_len;

          i = 0;
          num_words = 0;
          word_len = 0;
          while(num_words < words)
          {
                    while (s[i] && s[i] == c)
                    {
                            i++;  
                    }
                    while (s[i] && s[i] != c)
                    {
                              i++;
                              word_len++;
                    }
                    str[num_words] = (char *)malloc(sizeof(char) * (word_len + 1));
                    if (!str[num_words])
                    {
                              return (free_array(str, num_words));
                    }
                    ft_putword(str[num_words], s, i, word_len);
                    word_len = 0;
		num_words++;
          }
          str[num_words] = 0;
          return (str);
}

char **ft_split(char const *s, char c)
{
//       size_t len;
      size_t words;
      char **str;

//       len = ft_strlen(s);
      words = ft_wordcount(s, c);
      str = (char **)malloc(sizeof(char *) * (words + 1));
      if(!str) return (NULL);
      str = ft_split_words(s, c, str, words);
      return (str);
}

// int main(void)
// {
//     char **result;
//     int i;

//     // Test case 1: Simple split
//     printf("Test case 1:\n");
//     result = ft_split("Hello world this is a test", ' ');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     // Test case 2: Comma delimiter
//     printf("\nTest case 2:\n");
//     result = ft_split("apple,orange,banana,grape", ',');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     // Test case 3: Consecutive delimiters
//     printf("\nTest case 3:\n");
//     result = ft_split("one,,two,,,three", ',');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     // Test case 4: Empty string
//     printf("\nTest case 4:\n");
//     result = ft_split("", ' ');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     // Test case 5: String with only delimiters
//     printf("\nTest case 5:\n");
//     result = ft_split(",,,,,", ',');
//     if (!result)
//         return (1);
//     i = 0;
//     while (result[i])
//     {
//         printf("result[%d]: %s\n", i, result[i]);
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return 0;
// }