regle_a:
	gcc -c *.c
regle_b:
	ar rc libft.a *.o
regle_c:
	ranlib libft.a
all:regle_a regle_b regle_c

clean:
	rm *.o libft.a
