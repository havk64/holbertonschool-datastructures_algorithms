#include "graphs.h"

size_t depth_first_traverse(const graph_t *graph,
			    void (*action)(const vertex_t *v, size_t depth))
{
	vertex_t *head;
	size_t size = 0;

	(void)(action);
	if (!graph)
		return (0);

	head = graph->vertices;
	if (head != NULL)
	{
		/* TODO - apply the depth first algorithm */
		head = head->next;
		size++;
	}
	return (size);
}
