#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Cell.h"
#include "Ship.h"

class Board
{
	std::vector<std::vector<std::shared_ptr<Cell>>> cells;
	std::vector<std::shared_ptr<Ship>> ships;
public:
	Board(std::istream& in) {

	}
};

