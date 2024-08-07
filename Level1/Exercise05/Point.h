/*
 * Point.h
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
public:
	Point();
	Point(int x, int y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

private:
	int x;
	int y;
};

#endif /* POINT_H_ */
