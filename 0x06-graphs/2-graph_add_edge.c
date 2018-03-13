#include "graphs.h"

inline int add_edge(vertex_t *src, vertex_t *dest)
{
	edge_t *edge, *head;

	edge = malloc(sizeof(edge_t));
	if (edge == NULL)
		return (EXIT_FAILURE);

	edge->dest = dest;
	edge->next = NULL;

	head = src->edges;
	if (head == NULL)
		src->edges = edge;
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = edge;
	}
	src->nb_edges += 1;
	return (EXIT_SUCCESS);
}

int graph_add_edge(graph_t *graph, const char *src, const char *dest,
		   edge_type_t type)
{
	vertex_t *head, *esrc, *edest;
	int status;

	esrc = edest = NULL;
	if (!graph || !graph->vertices || !src || !dest)
		return (0);

	head = graph->vertices;
	while (head != NULL)
	{
		if (strcmp(src, head->content) == 0)
			esrc = head;

		if (strcmp(dest, head->content) == 0)
			edest = head;

		head = head->next;
	}
	if (!esrc || !edest)
		return (0);

	if (type)
	{
		status = add_edge(esrc, edest);
		if (status != 0)
			return (0);

		status = add_edge(edest, esrc);
		if (status != 0)
			return (0);
	}
	else
	{
		status = add_edge(esrc, edest);
		if (status != 0)
			return (0);
	}
	return (1);
}
