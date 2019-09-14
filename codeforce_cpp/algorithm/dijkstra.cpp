#include <stdlib.h>
#include <stdio.h>
#include "..\\structure\yh_graph.h"
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

int dijkstra()
{
	vector<int> s;
	vector<int> q;

	int a[6] = {0,999,999,999,999,999};
	yh_graph *graph = new yh_graph();
	graph->initGraph();
	graph->insertVertex(0, 1, 10);
	graph->insertVertex(0, 2, 30);
	graph->insertVertex(0, 3, 15);
	graph->insertVertex(1, 4, 20);
	graph->insertVertex(2, 5, 5);
	graph->insertVertex(3, 2, 5);
	graph->insertVertex(3, 5, 20);
	graph->insertVertex(5, 3, 20);

	q.insert(q.end(), 0);
	q.insert(q.end(), 1);
	q.insert(q.end(), 2);
	q.insert(q.end(), 3);
	q.insert(q.end(), 4);
	q.insert(q.end(), 5);
	
	for (int i = 0; i < 6; ++i){
		vector<int>::iterator it;
		vector<int>::iterator itTemp;
		int extraMin = 999;
		int minIterator =0;
		for (it = q.begin(); it < q.end(); it++)
			if (extraMin > a[*it]){
				extraMin = a[*it];
				itTemp = it;
				
			}
		printf("최소 번째 %d\n", *itTemp);
		for (int j = 0; j < 6; ++j){
			if (graph->vertex[*itTemp][j] + a[*itTemp] < a[j] && graph->vertex[*itTemp][j] != 0)
			{
				a[j] = graph->vertex[*itTemp][j] + a[*itTemp];
				printf("%d가 %d번째 %d로 채우기\n", *itTemp, j, graph->vertex[*itTemp][j] + a[*itTemp]);
			}
		}
		q.erase(itTemp);
	}

	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d", a[3]);
	printf("%d", a[4]);
	printf("%d", a[5]);
	return 0;
}
