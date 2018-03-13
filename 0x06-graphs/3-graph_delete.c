#include "graphs.h"

void graph_delete(graph_t *graph)
{
	edge_t *edge, *ecurrent;
	vertex_t *vertex, *vcurrent;

	if (graph == NULL)
		return;

	vertex = graph->vertices;
	while ((vcurrent = vertex) != NULL)
	{
		if (vcurrent->content != NULL)
			free(vcurrent->content);

		edge = vcurrent->edges;
		while ((ecurrent = edge) != NULL)
		{
			edge = edge->next;
			free(ecurrent);
		}
		vertex = vertex->next;
		free(vcurrent);
	}
	free(graph);
}
