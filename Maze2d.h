
#ifndef MAZEPROJECT_MAZE2D_H
#define MAZEPROJECT_MAZE2D_H

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Position
{
public:
//implement << operator
//implement = operator

private:
	int x;
	int y;
};


class Searchable
{
	virtual Position& getStartPosition()=0;
	virtual Position& getGoalPosition()=0;
	virtual std::vector<string> getPossibleMoves()=0;
};

class Maze2dSearchable : public Searchable
{

};

class Maze2d
{
public:
	
	//TODO MAYBE: implement == operator if we need it for caching
	
	
private:
	std::vector<std::vector<int>> maze;
	Position start, end, current;
};




#endif //MAZEPROJECT_MAZE2D_H
