#include "libft.h"

static t_list	*clear(t_list *list, void (*del)(void *))
{
	ft_lstclear(&list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst)
		return (NULL);
	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (clear(new_lst, del));
		new_node = ft_lstnew(content);
		if (!new_node)
			return (clear(new_lst, del));
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
