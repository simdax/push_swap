
typedef struct	s_list
{
	int	*elems;
}		t_list;

void	rotate(int *list);
void	copy(int *elems, char *argv);
void	print(int *elems);

typedef struct	s_ops
{
	void	(*r)(int*);
}		t_ops;


