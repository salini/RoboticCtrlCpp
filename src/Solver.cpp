/**
 * \file      Solver.cpp
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Define Solver class
 *
 * \details   
 */


#include "Solver.h"

namespace RoboticCtrl
{


Solver::Solver()
{

}

Solver::~Solver()
{

}

Eigen::VectorXd* Solver::getSolution()
{
    return &X;
}

}
