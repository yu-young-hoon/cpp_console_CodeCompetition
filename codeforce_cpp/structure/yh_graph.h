#pragma once
/*vertex(����)�� edge(����)�� ����
������׷����� ���� �׷����� ����
������: ������ ���� ��������� �̵�����
����: �������� �� �̵�
����ġ �׷���(��Ʈ��ũ): ������ ���� ����ġ �Ҵ�
���� ����: ������ ���� ���� ����� ����
������ �׷������� ������ ������ ������ ������ ������ ��
������ �׷������� ��� ������ ������ ���ϸ� �������� 2�谡 �ȴ�
���� �׷��������� �ܺο��� ���� ������ ���� ���� ����, �ܺη� ���ϴ� ������ ���� ���� ������� ��.
����� ���̶� ��θ� �����ϴµ� ���� ������ ��, ������ ������� �ܼ� ���, �ܼ� ����� ���۰� �� ������ �����ϴٸ� ����Ŭ
���� �׷���: �׷����� ���� �ִ� ��� ������ ���� ���� �Ǿ� �ִ� �׷���
������ ���� �׷����� ���� ���� n�̶��ϸ� ������ n*(n-1)/2�� �ȴ�*/
#include <stdlib.h>
#include <stdio.h>
#define MAX_VERTEX 7
class yh_graph
{
	int edge;
	void insertEdge()
	{
		if (edge + 1 > MAX_VERTEX){
			printf("���� ���� �ʰ�\n");
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
			printf("�߸��� ����\n");
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

