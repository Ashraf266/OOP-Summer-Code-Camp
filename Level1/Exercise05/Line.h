/*
 * Line.h
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#ifndef LINE_H_
#define LINE_H_

#include "Point.h"

class Line {
public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	void draw();

private:
	Point start;
	Point end;
};

#endif /* LINE_H_ */
