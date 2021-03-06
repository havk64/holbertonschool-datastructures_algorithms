#include "graphs.h"

/**
 * allocate_vertex - allocates a vertex struct
 * @str: the pointer to the content string
 * @index: the index to be assigned to the allocated vertex
 * Return: On success, a pointer to the recently created vertex
 * On failure, it returns NULL.
 */
inline vertex_t *allocate_vertex(const char *str, size_t index)
{
	vertex_t *vertex;
	char *content;

	vertex = malloc(sizeof(vertex_t));
	if (vertex == NULL)
		return (NULL);

	content = malloc(strlen(str) + 1);
	if (content == NULL)
		return (NULL);

	strcpy(content, str);
	vertex->content = content;
	vertex->index = index;
	vertex->next = NULL;
	vertex->nb_edges = 0;
	vertex->edges = NULL;
	return (vertex);
}

/**
 * graph_add_vertex - add a vertex to an existing graph
 * @graph: the pointer to the graph
 * @str: the pointer to the content string
 *
 * Return: On success, a pointer to the recently created vertex
 * On failure, it returns NULL.
 */
vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t *vertex, *node;
	size_t index = 0;

	if (!graph || !str)
		return (NULL);

	if (!graph->vertices)
	{
		vertex = allocate_vertex(str, index);
		if (!vertex)
			return (NULL);

		graph->vertices = vertex;
	}
	else
	{
		node = graph->vertices;
		for (index = 1;; index++)
		{

			if (strcmp(str, node->content) == 0)
				return (NULL);

			if (!node->next)
				break;

			node = node->next;
		}

		vertex = allocate_vertex(str, index);
		if (!vertex)
			return (NULL);

		node->next = vertex;
	}
	graph->nb_vertices += 1;
	return (vertex);
}
