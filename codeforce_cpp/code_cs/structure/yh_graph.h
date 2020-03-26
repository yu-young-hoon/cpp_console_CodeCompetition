#pragma once
/*vertex(정점)와 edge(간선)의 집합
무방향그래프와 방향 그래프로 구분
무방향: 간선을 통해 양방향으로 이동가능
방향: 방향으로 만 이동
가중치 그래프(네트워크): 간선에 비용과 가중치 할당
인접 정점: 간선에 의해 직접 연결된 정점
무방향 그래프에서 정점의 차수는 정점에 인접한 정점의 수
무방향 그래프에서 모든 정점의 차수를 합하면 간선수의 2배가 된다
방향 그래프에서는 외부에서 오는 간선의 수를 진입 차수, 외부로 향하는 간선의 수를 진출 차수라고 함.
경로의 길이란 경로를 구성하는데 사용된 간선의 수, 간선이 없을경우 단순 경로, 단순 경로의 시작과 끝 정점이 동일하다면 싸이클
완전 그래프: 그래프에 속해 있는 모든 정점이 서로 연결 되어 있는 그래프
무방향 완전 그래프의 정점 수를 n이라하면 간선은 n*(n-1)/2가 된다*/
#include <stdlib.h>
#include <stdio.h>
#define MAX_VERTEX 7
class yh_graph
{
	int edge;
	void insertEdge()
	{
		if (edge + 1 > MAX_VERTEX){
			printf("정점 갯수 초과\n");
			exit(-1);
		}
		edge++;
	}
public:
	int vertex[MAX_VERTEX][MAX_VERTEX];
	
	void initGraph(){
		for (int i = 0; i < MAX_VERTEX; ++i){
			for (int j = 0; j < MAX_VERTEX; ++j){
				vertex[i][j] = 0;
			}
		}
	}
	
	void insertVertex(int start,int end,int weight){
		if (start < 0 || end >= MAX_VERTEX){
			printf("잘못된 정점\n");
			exit(-1);
		}
		vertex[start][end] = weight;
	}
	void printGraph(){
		for (int i = 0; i < MAX_VERTEX; ++i){
			for (int j = 0; j < MAX_VERTEX; ++j){
				printf("%d ",vertex[i][j]);
			}
			printf("\n");
		}
	}
	yh_graph(){}
	~yh_graph(){}
};

