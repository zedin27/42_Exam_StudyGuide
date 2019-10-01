// if (str[i] == '>')
// 	bfi++;
// else if (str[i] == '<')
// 	bfi--;
// else if (str[i] == '+')
// 	bfk[bfi]++;
// else if (str[i] == '-')
// 	bfk[bfi]--;
// else if (str[i] == '.')
// 	write(1, &bfk[bfi], 1);
// else if (str[i] == '[' && bf[bfi] == 0)
// 	//do something
// else if (str[i] == ']' && bf[bfi] == 0)
// 	//do something

// /*********************************************************************************\
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;                                Brainfuck v0.0.1                                 ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;                    Brainfuck programming language interpreter                   ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;                                by Maksim Korzh                                  ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// ;*********************************************************************************;
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;       THIS PROGRAM IS FREE SOFTWARE. IT COMES WITHOUT ANY WARRANTY, TO          ;
// ;        THE EXTENT PERMITTED BY APPLICABLE LAW. YOU CAN REDISTRIBUTE IT          ;
// ;       AND/OR MODIFY IT UNDER THE TERMS OF THE DO WHAT THE FUCK YOU WANT         ;
// ;          TO PUBLIC LICENCE, VERSION 2, AS PUBLISHED BY SAM HOCEVAR.             ;
// ;                SEE http://www.wtfpl.net/ FOR MORE DETAILS.                      ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// ;*********************************************************************************;
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;                   DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE                   ;
// ;                           Version 2, December 2004                              ;
// ;                                                                                 ;
// ;        Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>                         ;
// ;                                                                                 ;
// ;        Everyone is permitted to copy and distribute verbatim or modified        ;
// ;        copies of this license document, and changing it is allowed as long      ;
// ;        as the name is changed.                                                  ;
// ;                                                                                 ;
// ;                   DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE                   ;
// ;          TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION        ;
// ;                                                                                 ;
// ;         0. You just DO WHAT THE FUCK YOU WANT TO.                               ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// ;---------------------------------------------------------------------------------;
// ;            please let me know if you find this code/project useful              ;
// ;---------------------------------------------------------------------------------;
// ;*********************************************************************************;
// ;---------------------------------------------------------------------------------;
// ;                                                                                 ;
// ;         Copyright © 2019  Maksim Korzh  <freesoft.for.people@gmail.com>         ;
// ;                                                                                 ;
// ;---------------------------------------------------------------------------------;
// \*********************************************************************************/
//
// #include <stdio.h>                        /* C standard library for handling I/O */
// #include <errno.h>                /* C standard library for handling error codes */
//
// #define VERSION "v0.0.1"                              /* current program version */
// #define MEMORY_SIZE 30000                            /* "infinite tape" constant */
// #define SOURCE_SIZE 10000                                /* max source file size */
//
//
// void execute()                             /* brainfuck instructions interpreter */
// {
// 	int memory[MEMORY_SIZE];                             /* available program memory */
// 	char source[SOURCE_SIZE];                                  /* source file buffer */
// 	char *src = source;                                       /* instruction pointer */
// 	int *mem = memory;                                               /* data pointer */
// 	int loop;                                                /* nested loops counter */
//     while(*src)
//     {
//         switch(*src)
//         {
//             case '>': *mem++;  break;                /* increment memory pointer */
//             case '<': *mem--;  break;                /* decrement memory pointer */
//             case '+': ++*mem;  break;             /* increments memory reference */
//             case '-': --*mem;  break;             /* decrements memory reference */
//             case '.': putc(*mem, stdout); break;        /* output char to screen */
//             case ',': *mem = getc(stdin); break;       /* get char from keyboard */
//
//             case '[':                                              /* loop start */
//
//                 if(!*mem)                     /* if cell at data pointer is zero */
//                 {
//                     loop = 1;            /* loop variable holds a number of '[]' */
//                     while(loop)                    /* do until find matching ']' */
//                     {
//                         *src++;                 /* increment instruction pointer */
//
//                         if(*src == '[') loop++;   /* inc loop on '[' instruction */
//                         if(*src == ']') loop--;   /* dec loop on ']' instruction */
//                     }
//                 }
//
//                 break;
//
//             case ']':                                                /* loor end */
//
//                 loop = 1;                /* loop variable holds a number of '[]' */
//                 while(loop)                        /* do until find matching '[' */
//                 {
//                     *src--;                     /* decrement instruction pointer */
//
//                     if(*src == '[') loop--;       /* dec loop on '[' instruction */
//                     if(*src == ']') loop++;       /* inc loop on ']' instruction */
//                 }
//
//                 *src--;                         /* decrement instruction pointer */
//                 break;
//         }
//
//         *src++;                                 /* increment instruction pointer */
//     }
// }
//
// int main(int argc,char *argv[])
// {
//     if(argc == 1)        /* if no arguments given go into intaractive shell mode */
//     {
//         printf("\n     Brainfuck interpreter %s by Maksim Korzh\n\n", VERSION);
//         printf("  1. Type or paste in brainfuck source code\n");
//         printf("  2. Use Ctrl-D for code execution(linux)\n");
//         printf("  3. Use ./brainfuck [filename] to execute source file\n");
//         printf("\n              Happy brainfucking!\n\n");
//
//         fread(source, 1, SOURCE_SIZE - 1, stdin);      /* read source from stdin */
//         execute();                           /* on linux press CTRL-D to execute */
//     }
//
//     else if(argc == 2)                        /* otherwise read source from file */
//     {
//         FILE *file = fopen(argv[1], "r");                    /* open file stream */
//
//         if(errno)                /* print an error message if file doesn't exist */
//         {
//             printf("File '%s' doesn't exist!\n", argv[1]);
//             return 0;
//         }
//
//         fread(source, 1, SOURCE_SIZE, file);            /* read source from file */
//         fclose(file);                                       /* close file stream */
//         execute();                                  /* execute brainfuck program */
//     }
//
//     return 0;
// }

#define MEM 2048
#define SRC_SIZE 4096

#include <stdlib.h>
#include <unistd.h>
char	*bf(void)
{
	int i;
	char *bf;

	i = -1;
	bf = malloc(sizeof(char) * MEM + 1);
	while (++i < MEM)
		bf[i] = 0;
	bf[i] = '\0';
	return (bf);
}

void	fuckme(char *str)
{
	char bfk[2049] = { [0 ... 2048] = 0};
	int bfi;

	int i;
	int checker;
	// char source[SRC_SIZE];
	// char *src = NULL;

	i = 0;
	bfi = 0;
	// bfk = bf();
		while (*str)
		{
			switch (*str)
			{
				case '>':
					++bfi; break;
				case '<':
					--bfi; break;
				case '+':
					++bfk[bfi]; break;
				case '-':
					--bfk[bfi]; break;
				case '.':
					write(1, &bfk[bfi], 1); break;
				case '[':
					if (!bfk[bfi])
					{
						checker = 1;
						while (checker != 0)
						{
							str++;
							if (*str == '[')
								checker++;
							if (*str == ']')
								checker--;
						}
					}
					break;
				case ']':
					checker = 1;
					while (checker)
					{
						str--;
						if (*str == '[')
							checker--;
						if (*str == ']')
							checker++;
					}
					str--;
					break;
			}
			str++;
	}
}

int main(int argc, char *argv[])
{
	// if (argc == 3)
	// 	fuckme(argv[2]);
	if (argc == 2)
		fuckme(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

/*Good one with pointers only*/
//
// #define MEM 2048
// #define SRC_SIZE 4096
//
// #include <stdlib.h>
// #include <unistd.h>
// char	*bf(void)
// {
// 	int i;
// 	char *bf;
//
// 	i = -1;
// 	bf = malloc(sizeof(char) * MEM + 1);
// 	while (++i < MEM)
// 		bf[i] = 0;
// 	bf[i] = '\0';
// 	return (bf);
// }
//
// void	fuckme(char *tmp)
// {
// 	char *bfk = bf();
// 	char *str = tmp;
// 	int checker;
//
// 	while (*str)
// 	{
// 		switch (*str)
// 		{
// 			case '>':
// 				++bfk; break;
// 			case '<':
// 				--bfk; break;
// 			case '+':
// 				++*bfk; break;
// 			case '-':
// 				--*bfk; break;
// 			case '.':
// 				write(1, bfk, 1); break;
// 			case '[':
// 				if (!*bfk)
// 				{
// 					checker = 1;
// 					while (checker != 0)
// 					{
// 						str++;
// 						if (*str == '[')
// 							checker++;
// 						if (*str == ']')
// 							checker--;
// 					}
// 				}
// 				break;
// 			case ']':
// 				checker = 1;
// 				while (checker)
// 				{
// 					str--;
// 					if (*str == '[')
// 						checker--;
// 					if (*str == ']')
// 						checker++;
// 				}
// 				str--;
// 				break;
// 		}
// 		str++;
// 	}
// 	// free(bfk);
// }
//
// int main(int argc, char *argv[])
// {
// 	// if (argc == 3)
// 	// 	fuckme(argv[2]);
// 	if (argc == 2)
// 		fuckme(argv[1]);
// 	write(1, "\n", 1);
// 	return (0);
// }
