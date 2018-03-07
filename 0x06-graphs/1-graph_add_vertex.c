#include "graphs.h"

vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t *vertex;
	char *content;

	if (graph->nb_vertices != 0)
	{
		/* Check if str already is in other vertex and exit if so */
	}

	/* Case where graph is empty */
	vertex = malloc(sizeof(vertex_t));
	if (vertex == NULL)
		return (NULL);

	content = malloc(strlen(str));
	if (content == NULL)
		return (NULL);

	strcpy(content, str);
	vertex->content = content;
	vertex->nb_edges = 0;
	vertex->edges = NULL;

	/* TODO - insert vertix to graph and update nb_vertices */
	return (vertex);
}
