#ifndef NUCLEUS_H
#define NUCLEUS_H

#include <armadillo>

class Nucleus
{
public:
    Nucleus(arma::vec in_nucleusPosition, int in_nuclearCharge);
    const arma::vec & position() const;
    int charge();


private:
    arma::vec m_nucleusPosition;
    int m_nuclearCharge;
};

#endif // NUCLEUS_H
