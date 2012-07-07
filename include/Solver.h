/**
 * \file      Solver.h
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Declare Solver class
 *
 * \details   
 */

#ifndef __SOLVER_H__
#define __SOLVER_H__

#include <Eigen/Dense>

namespace RoboticCtrl
{

class Solver
{
public:
    Solver();
    virtual ~ Solver();
    
    virtual void init()=0;
    virtual void update()=0;
    virtual void solve()=0;

    Eigen::VectorXd* getSolution();
protected:
    Eigen::VectorXd X;
};

}

#endif
