#include "graphs.h"

/**
 * graph_create - Allocates memory to a graph_t struct and initializes it.
 *
 * Return: On success a graph_t struct, on failure NULL
 */
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
