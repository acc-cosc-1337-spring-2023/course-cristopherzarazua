//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make

int main() 
{
	Line line;
	unique_ptr<Shape> shape = make_unique<Line>();
	shape->draw()

	return 0;
}