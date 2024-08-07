/*
 * Line.cpp
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#include "Line.h"

void line(int x1,int y1,int x2,int y2)
{

}

Line::Line() :start(), end() {
	// TODO Auto-generated constructor stub

}

Line::Line(int x1, int y1, int x2, int y2) : start(x1,y1), end(x2,y2) {

}

void Line::draw()
{
	line(start.getX(), start.getY(), end.getX(), end.getY());
}

