GCC = gcc -Wall -Werror -Wextra

compile:	rush01.c ft_algorithm.c ft_checker.c ft_checker_functions.c ft_display.c ft_functions.c ft_iscol.c ft_isrow.c ft_split.c ft_arr_create_delete.c
	$(GCC) rush01.c ft_algorithm.c ft_checker.c ft_checker_functions.c ft_display.c ft_functions.c ft_iscol.c ft_isrow.c ft_split.c ft_arr_create_delete.c -o run
	
	
compile4:	compile run4 

run4:
	./run "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
	./run "2 1 2 3 1 2 3 2 2 2 4 1 2 2 1 4" | cat -e

run5:
	./run "1 2 3 3 3 3 2 1 3 2 1 2 3 2 3 5 3 2 1 2" | cat -e

run6:
	./run "3 2 3 5 2 1 2 2 3 1 2 3 3 2 1 3 2 2 1 2 3 2 4 3" | cat -e

run9:
	./run "2 1 3 2 3 2 2 6 4 2 4 4 4 3 4 3 1 2 2 4 3 2 4 2 1 4 2 3 2 3 4 4 4 3 1 2" | cat -e