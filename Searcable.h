#pragma once

#include "Maze2d.h"

template <class T>
class State
{

public:
	T data; //former position
	int cost;
	bool operator==(const State &other) const
	{
		return (this->data == other->data);
	}
};


//class Searchable represents a problem that can be searched, and refer to state only
template <class T>
class Searchable
{
public:
    virtual const std::vector<State<T>> getPossibleStates(State<T> &currState) = 0; // we need to return search state and not position. the vector holds serach states (the tree).
    virtual const State<T> getStartState() = 0;
    virtual const State<T> getGoalState() = 0;
};