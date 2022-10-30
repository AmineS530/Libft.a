# Libft.a 

# About:

 - In this project we do make our own C library which we'll use in some future C projects.

# What will you find here exactly?
	

 - This project consist of 43 functions and their header file and finally the Makefile.

	
# What are these functions and what's their use?
	The functions are grouped in 3 seperate parts (as in the project's PDF)
## ***Part 1:  Libc functions***.
1. [ft_isalpha](https://github.com/AmineS530/Libft.a/blob/main/ft_isalpha.c)
	> Checks whether the character or int passed as parameter is alphabetical.
 2. [ft_isdigit](https://github.com/AmineS530/Libft.a/blob/main/ft_isdigit.c)
 	> Checks whether the character or int passed as parameter is a decimal degit.
 3. [ft_isalnum](https://github.com/AmineS530/Libft.a/blob/main/ft_isalnum.c)
 	> Checks whether the character or int passed as parameter is alphanumeric.
 4. [ft_isascii](https://github.com/AmineS530/Libft.a/blob/main/ft_isascii.c)
 	> Checks whether the character or int passed as parameter belongs to the ascii table.
 5. [ft_isprint](https://github.com/AmineS530/Libft.a/blob/main/ft_isprint.c)
 	> Checks whether the character or int passed as parameter is printable.
 6. [ft_strlen](https://github.com/AmineS530/Libft.a/blob/main/ft_strlen.c)
 	> Calculates the length of a given string.
 7. [ft_memset](https://github.com/AmineS530/Libft.a/blob/main/ft_memset.c)  
 	> Fills string with the unsigned char c by writing byte by byte for len characters.
 8. [ft_bzero](https://github.com/AmineS530/Libft.a/blob/main/ft_bzero.c)
 	> In a way similar to ft_memset but instead of filling the string with c, if fill it with '\0'. 
 9. [ft_memcpy](https://github.com/AmineS530/Libft.a/blob/main/ft_memcpy.c) 
 	> Copies n bytes from source to destination.
 10. [ft_memmove](https://github.com/AmineS530/Libft.a/blob/main/ft_memmove.c) 
	 > Similar to memcpy but it has overlap protection (click [here](https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c) to know more about it)
 11. [ft_strlcpy](https://github.com/AmineS530/Libft.a/blob/main/ft_strlcpy.c) 
	 > Copies from source to destination while returning source length.
 12. [ft_strlcat](https://github.com/AmineS530/Libft.a/blob/main/ft_strlcat.c)     
	 > Concatenates n characters from source after destinations and returns source length + dstsize or source length + dest length, more about it [here](https://stackoverflow.com/questions/33154740/strlcat-is-dst-always-nul-terminated-what-are-size-and-the-returned-value).
 13. [ft_toupper](https://github.com/AmineS530/Libft.a/blob/main/ft_toupper.c)
	 > Converts the character to uppercase.
 14. [ft_tolower](https://github.com/AmineS530/Libft.a/blob/main/ft_tolower.c)
	 > Converts the character to lowercase.
 15. [ft_strchr](https://github.com/AmineS530/Libft.a/blob/main/ft_strchr.c)
	 > locates the first occurrence of a character in a string and returns it address.
 16. [ft_strrchr](https://github.com/AmineS530/Libft.a/blob/main/ft_strrchr.c)
	 > locates the last occurrence of a character in a string and returns it address.
 17. [ft_strncmp](https://github.com/AmineS530/Libft.a/blob/main/ft_strncmp.c)
	 > // to do 
 18. [ft_memchr](https://github.com/AmineS530/Libft.a/blob/main/ft_memchr.c)
	 > // to do 
 19. [ft_memcmp](https://github.com/AmineS530/Libft.a/blob/main/ft_memcmp.c)
	 > // to do 
 20.  [ft_strnstr](https://github.com/AmineS530/Libft.a/blob/main/ft_strnstr.c)
	  > // to do 
 21. [ft_atoi](https://github.com/AmineS530/Libft.a/blob/main/ft_atoi.c)
	 > // to do 
 22. [ft_calloc](https://github.com/AmineS530/Libft.a/blob/main/ft_calloc.c)
		> // to do
 23.  [ft_strdup](https://github.com/AmineS530/Libft.a/blob/main/ft_strdup.c) 
		>  // to do

## ***Part 2:  Additional functions***.

 - [ft_substr](https://github.com/AmineS530/Libft.a/blob/main/ft_substr.c)
	> // to do 
 -  [ft_strjoin](https://github.com/AmineS530/Libft.a/blob/main/ft_strjoin.c)
		> // to do 
 - [ft_strtrim](https://github.com/AmineS530/Libft.a/blob/main/ft_strtrim.c)
	> // to do 
 - [ft_split](https://github.com/AmineS530/Libft.a/blob/main/ft_split.c)
	> // to do 
 - [ft_itoa](https://github.com/AmineS530/Libft.a/blob/main/ft_itoa.c)
	> // to do 
 - [ft_strmapi](https://github.com/AmineS530/Libft.a/blob/main/ft_strmapi.c)
	> // to do 
 - [ft_striteri](https://github.com/AmineS530/Libft.a/blob/main/ft_striteri.c)
	> // to do 
 - [ft_putchar_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putchar_fd.c)
	> // to do 
 - [ft_putstr_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putstr_fd.c)
	> // to do 
 - [ft_putendl_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putendl_fd.)
		> // to do 
 - [ft_putnbr_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putnbr_fd.)
		> // to do 
## ***Bonus Part***.

 - [ft_lstnew](https://github.com/AmineS530/Libft.a/blob/main/ft_lstnew_bonus.c) 
	> // to do 
 - [ft_lstadd_front](https://github.com/AmineS530/Libft.a/blob/main/ft_lstadd_front_bonus.c) 
	> // to do 
 - [ft_lstsize](https://github.com/AmineS530/Libft.a/blob/main/ft_lstsize_bonus.c) 
	> // to do 
 - [ft_lstlast](https://github.com/AmineS530/Libft.a/blob/main/ft_lstlast_bonus.c) 
	> // to do 
 - [ft_lstadd_back](https://github.com/AmineS530/Libft.a/blob/main/ft_lstadd_back_bonus.c)
	> // to do 
 - [ft_lstdelone](https://github.com/AmineS530/Libft.a/blob/main/ft_lstdelone_bonus.c) 
	> // to do 
 - [ft_lstclear](https://github.com/AmineS530/Libft.a/blob/main/ft_lstclear_bonus.c) 
	> // to do 
 - [ft_lstiter](https://github.com/AmineS530/Libft.a/blob/main/ft_lstiter_bonus.c) 
	> // to do 
 - [ft_lstmap](https://github.com/AmineS530/Libft.a/blob/main/ft_lstmap_bonus.c)
	> // to do 
# Other:

 - Weird var names:

		If you gone through some of my code you'll notice weird variable naming such as ("uwu","owo","awa"...),
		the reason behind that , is id like to have fun making my code, so I use these names so when I code I don't feel tired/bored easily :),
		(To conclude. It's a something that increases my productivity).

 - Inconsistent code optimizations 
			you may  have noticed that for example use unnecessary if statement or perhaps a while loop, (I noticed some of these mistakes after i finished the project,  well the reason behind it is simply i didn't know better at the time i wrote the code, But hey, its getting the job done

