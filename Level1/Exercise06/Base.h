/*
 * Base.h
 *
 *  Created on: Aug 7, 2024
 *      Author: user
 */

#ifndef BASE_H_
#define BASE_H_

class Base {
private:
	int a;
protected:
	int b;
public:
	Base();
	Base(int, int);

	int product();
};

#endif /* BASE_H_ */
