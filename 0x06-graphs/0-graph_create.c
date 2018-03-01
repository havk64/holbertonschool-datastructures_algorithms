#include "graphs.h"

graph_t *graph_create(void)
{
	graph_t *graph;

	graph = malloc(sizeof(graph_t));
	if (graph == NULL)
		return (NULL);

	graph->nb_vertices = 0;
	graph->vertices = NULL;
	return (graph);
}
