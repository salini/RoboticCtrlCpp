/**
 * \file      Task.h
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Declare Task class
 *
 * \details   
 */

#ifndef __TASK_H__
#define __TASK_H__

#include <Eigen/Dense>

namespace RoboticCtrl
{

class Task
{
public:
    Task();
    ~Task();

    virtual void init()=0;
    virtual void update()=0;

    double        getWeight();
    unsigned int getLevel();
    double        getError();
    
    void setWeight(double);
    void setLevel(unsigned int);
    
    Eigen::MatrixXd* getE();
    Eigen::VectorXd* getf();
    
    void setE(Eigen::MatrixXd*);
    void setf(Eigen::VectorXd*);
protected:
    double        weight;
    unsigned int level;
    double        error;
    
    Eigen::MatrixXd E;
    Eigen::VectorXd f;
};

}

#endif
