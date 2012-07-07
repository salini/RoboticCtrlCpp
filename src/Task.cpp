/**
 * \file      Task.cpp
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Define Task class
 *
 * \details   
 */

#include "Task.h"

namespace RoboticCtrl
{


Task::Task()
{

}

Task::~Task()
{

}

double Task::getWeight()
{
    return weight;
}

unsigned int Task::getLevel()
{
    return level;
}

double Task::getError()
{
    return error;
}

void Task::setWeight(double newWeight)
{
    weight = newWeight;
}

void Task::setLevel(unsigned int newLevel)
{
    level = newLevel;
}

Eigen::MatrixXd* Task::getE()
{
    return &E;
}

Eigen::VectorXd* Task::getf()
{
    return &f;
}

void Task::setE(Eigen::MatrixXd* newE)
{
    //E = newE;
}

void Task::setf(Eigen::VectorXd* newf)
{
    //f = newf;
}


}
