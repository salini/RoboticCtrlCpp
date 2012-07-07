/**
 * \file      Constraint.h
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Declare Constraint class
 *
 * \details   
 */

#ifndef __CONSTRAINT_H__
#define __CONSTRAINT_H__

#include <Eigen/Dense>

namespace RoboticCtrl
{

class Constraint
{
public:
    Constraint();
    virtual ~Constraint();

    virtual void init()=0;
    virtual void update()=0;
    
protected:

};

class EqualityConstraint: public Constraint
{
public:
    EqualityConstraint();
    virtual ~EqualityConstraint();

    virtual void init()=0;
    virtual void update()=0;
    
    Eigen::MatrixXd* getA();
    Eigen::VectorXd* getb();
    
    void setA(Eigen::MatrixXd*);
    void setb(Eigen::VectorXd*);
protected:
    Eigen::MatrixXd A;
    Eigen::VectorXd b;
};

class InequalityConstraint: public Constraint
{
public:
    InequalityConstraint();
    virtual ~InequalityConstraint();

    virtual void init()=0;
    virtual void update()=0;
    
    Eigen::MatrixXd* getG();
    Eigen::VectorXd* geth();
    
    void setG(Eigen::MatrixXd*);
    void seth(Eigen::VectorXd*);
protected:
    Eigen::MatrixXd G;
    Eigen::VectorXd h;
};



}

#endif
