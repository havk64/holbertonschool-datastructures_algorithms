#include "graphs.h"

inline edge_t *allocate_edge(vertex_t *dest)
{
	edge_t *edge;

	edge = malloc(sizeof(edge_t));
	if (edge == NULL)
		return (NULL);

	edge->dest = dest;
	edge->next = NULL;
	return (edge);
}

inline
int add_edge(vertex_t *src, vertex_t *dest)
{
	edge_t *edge, *head;

	edge = allocate_edge(dest);
	if (edge == NULL)
		return (EXIT_FAILURE);

	head = src->edges;
	if (head == NULL)
		head = edge;
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = edge;
	}
	src->nb_edges += 1;
	return (EXIT_SUCCESS);
}


inline
int add_edge_bi(vertex_t *src, vertex_t *dest)
{
	int status;

	status = add_edge(src, dest);
	if (status != 0)
		return (EXIT_FAILURE);

	status = add_edge(dest, src);
	if (status != 0)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}

int graph_add_edge(graph_t *graph, const char *src, const char *dest,
		   edge_type_t type)
{
	vertex_t *head, *esrc, *edest;
	int status;

	esrc = edest = NULL;
	if (!graph || !graph->vertices || !src || !dest)
		return (EXIT_FAILURE);

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
		return (EXIT_FAILURE);

	if (type)
	{
		status = add_edge_bi(esrc, edest);
		if (status != 0)
			return (EXIT_FAILURE);
	}
	else
	{
		status = add_edge(esrc, edest);
		if (status != 0)
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
