/**
 * \file      RoboticCtrl.h
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Declare Robotic Controller class and methods
 *
 * \details   
 */

#ifndef __ROBOTIC_CTRL_H__
#define __ROBOTIC_CTRL_H__


#include "Task.h"
#include "Constraint.h"
#include "Solver.h"

#include <list>

namespace RoboticCtrl
{

class RoboticCtrl
{
public:
    RoboticCtrl();
    virtual ~RoboticCtrl();
    
    void init();
    void update();
    void solve();
    
    void add(Task*);
    void add(Constraint*);
    void add(Solver*);

    void remove(Task*);
    void remove(Constraint*);
    void remove(Solver*);
    
protected:

    std::list<Task*>       listOfTask;
    std::list<Constraint*> listOfConstraint;
    std::list<Solver*>     listOfSolver;
};


}

#endif
