/*==============================================================================
  Authors include: Liqun Liu (lliu329@uwo.ca), Danfeng Chen (dchen285@uwo.ca)  
  See README.txt for details.
==============================================================================*/ 

/* Smart Assertion
 *  - Show assertion under debug mode
 *  - Print assertion message udner release mode
 *
 * Example:
	Code:
		int i = -1;
		smart_assert(i>=0 && i<3, "Index out of bound" );
	Output:
		Assertion failed: i>0 && i<3
		  Messages: Index out of bound
		  Location: file main.cpp, line 17
 */
#ifndef SMART_ASSERT_H
#define SMART_ASSERT_H
#include <assert.h>
#include <iostream>
using namespace std;

#define smart_assert( condition, message ) \
	if( !(condition) ) { \
		assert( condition && message ); \
	}


#define smart_exit( condition, message ) \
	if( !(condition) ) { \
		system("pause"); \
		exit(0); \
	}

#endif
