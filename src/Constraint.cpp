/**
 * \file      Constraint.cpp
 * \author    Joseph Salini
 * \date      7 July 2012
 * \brief     Define Constraint class
 *
 * \details   
 */

#include "Constraint.h"

namespace RoboticCtrl
{


Constraint::Constraint()
{

}

Constraint::~Constraint()
{

}


EqualityConstraint::EqualityConstraint()
{

}

EqualityConstraint::~EqualityConstraint()
{

}

Eigen::MatrixXd* EqualityConstraint::getA()
{
    return &A;
}

Eigen::VectorXd* EqualityConstraint::getb()
{
    return &b;
}

void EqualityConstraint::setA(Eigen::MatrixXd* newA)
{
    //A = newA;
}

void EqualityConstraint::setb(Eigen::VectorXd* newb)
{
    //b = newb;
}




InequalityConstraint::InequalityConstraint()
{

}

InequalityConstraint::~InequalityConstraint()
{

}

Eigen::MatrixXd* InequalityConstraint::getG()
{
    return &G;
}

Eigen::VectorXd* InequalityConstraint::geth()
{
    return &h;
}

void InequalityConstraint::setG(Eigen::MatrixXd* newG)
{
    //G = newG;
}

void InequalityConstraint::seth(Eigen::VectorXd* newh)
{
    //h = newh;
}


}
