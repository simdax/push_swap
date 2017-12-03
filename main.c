
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list	list;
	
	if (argc == 1)
		return(1);
	argv++;
	list.elems = (int*)malloc(sizeof(int) * argc);  
	copy(list.elems, argv);
	rotate(list.elems);
	print(list.elems);	
	free(list.elems);
}
