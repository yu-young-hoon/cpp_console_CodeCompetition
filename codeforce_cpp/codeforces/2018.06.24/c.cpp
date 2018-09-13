#ifdef WIN32
#include "..\\stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

struct Vec2i
{
	int x, y;

	bool operator == (const Vec2i& coordinates_);
};

using uint = unsigned int;
using HeuristicFunction = std::function<uint(Vec2i, Vec2i)>;
using CoordinateList = std::vector<Vec2i>;

struct Node
{
	uint G, H;
	Vec2i coordinates;
	Node *parent;

	Node(Vec2i coord_, Node *parent_ = nullptr);
	uint getScore();
};

using NodeSet = std::set<Node*>;

class Generator
{
	bool detectCollision(Vec2i coordinates_);
	Node* findNodeOnList(NodeSet& nodes_, Vec2i coordinates_);
	void releaseNodes(NodeSet& nodes_);

public:
	Generator();
	void setWorldSize(Vec2i worldSize_);
	void setDiagonalMovement(bool enable_);
	void setHeuristic(HeuristicFunction heuristic_);
	CoordinateList findPath(Vec2i source_, Vec2i target_);
	void addCollision(Vec2i coordinates_);
	void removeCollision(Vec2i coordinates_);
	void clearCollisions();

private:
	HeuristicFunction heuristic;
	CoordinateList direction, walls;
	Vec2i worldSize;
	uint directions;
};

class Heuristic
{
	static Vec2i getDelta(Vec2i source_, Vec2i target_);

public:
	static uint manhattan(Vec2i source_, Vec2i target_);
	static uint euclidean(Vec2i source_, Vec2i target_);
	static uint octagonal(Vec2i source_, Vec2i target_);
};


int main() {
	int count;
	int car;
	int move = 0;

	cin >> count >> car;

	Generator generator;
	// Set 2d map size.
	generator.setWorldSize({ count, 4 });
	// You can use a few heuristics : manhattan, euclidean or octagonal.
	generator.setHeuristic(Heuristic::euclidean);
	generator.setDiagonalMovement(true);

	while (true) {
		for (int i = 0; CoordinateList) {
			
			auto path = generator.findPath({ 0, 0 }, { 20, 20 });

		}
	}
	
	for (auto& coordinate : path) {
		std::cout << coordinate.x << " " << coordinate.y << "\n";
	}

	return 0;
}