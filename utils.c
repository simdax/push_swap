void	rotate(int *list)
{
	int *cpy;

	while(*list)
					
}

void	copy(int *elems, char **argv)
{
	while(*argv)
		*elems++ = atoi(*argv++);
}

void	print(int *elems)
{
	while(*elems)
		printf("%d", *elems++);
}
