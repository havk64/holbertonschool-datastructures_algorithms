#include "graphs.h"

inline vertex_t *allocate_vertex(const char *str, size_t index)
{
	vertex_t *vertex;
	char *content;

	vertex = malloc(sizeof(vertex_t));
	if (vertex == NULL)
		return (NULL);

	content = malloc(strlen(str));
	if (content == NULL)
		return (NULL);

	strcpy(content, str);
	vertex->content = content;
	vertex->index = index;
	vertex->nb_edges = 0;
	vertex->edges = NULL;
	return (vertex);
}

vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t *vertex, *node;
	char *content;
	size_t index = 0;

	node = graph->vertices;
	/* Check if str already is in other vertex and exit if so */
	for (index = 0;; index++)
	{

		if (strcmp(str, node->content) == 0)
			return (NULL);

		node = node->next;
	}
	/* Case where graph is empty */
	vertex = allocate_vertex(str, index);

	/* TODO - insert vertex to graph and update nb_vertices */
	if (!graph->vertices)
		graph->vertices = vertex;
	else
		node->next = vertex;

	graph->nb_vertices += 1;
	return (vertex);
}
