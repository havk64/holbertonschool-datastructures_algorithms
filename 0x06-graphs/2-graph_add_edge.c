#include "graphs.h"

/**
 * add_edge - auxiliary function to add an edge between two vertices
 * @src: a pointer to the source vertex
 * @dest: a pointer to the destination vertex
 * Return: On success, EXIT_SUCCESS. On failure, EXIT_FAILURE
 */
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

/**
 * graph_add_edge - adds an edge between two vertices to an existing graph
 * @graph: a pointer to a graph data structure
 * @src: the string to match the content of the source vertex
 * @dest: the string to match the content of the destination vertex
 * @type: the type of the edge (Unidirectional/Bidirectional)
 *
 * Return: On success, 1. On failure, 0
 */
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
