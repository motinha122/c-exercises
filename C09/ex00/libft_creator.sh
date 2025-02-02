echo "Compila as funções para a lib"
gcc -c ft_libft.c -o ft_libft.o

echo "Cria a lib"
ar rcs libft.a ft_libft.o

echo "Compila o arquivo com a lib"
gcc teste.c -L. -l:libft.a

./a.out
