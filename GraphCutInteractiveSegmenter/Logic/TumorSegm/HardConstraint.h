/*==============================================================================
  Authors include: Liqun Liu (lliu329@uwo.ca), Danfeng Chen (dchen285@uwo.ca)  
  See README.txt for details.
==============================================================================*/ 

#ifndef HARDCONSTRAINT_H_INCLUDED
#define HARDCONSTRAINT_H_INCLUDED

#include "MyBasic.h"
#include <vector>

namespace lliu
{
using namespace MyBasic;
std::vector<MyBasic::Index2D> getPointsWithinCircle(const std::vector<Index2D>& seeds, int radius);
std::vector<MyBasic::Index2D> getPointsWithinCircle(const std::vector<Index3D>& seeds, int radius);


std::vector<MyBasic::Index2D> getBorderPoints(const Size2D& ImgSize, int bandWidth);
std::vector<MyBasic::Index2D> getBorderPoints(const Size3D& ImgSize, int bandWidth);


};

#endif // HARDCONSTRAINT_H_INCLUDED
