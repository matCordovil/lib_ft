#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list)); //no casting result of malloc!
	if (!new)
		return;
	new->content = content;
	new->next = NULL;
	return (new);
}