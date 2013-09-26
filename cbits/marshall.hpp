#ifndef __MARSHALL_THEM_BINDINGS_H__
#define __MARSHALL_THEM_BINDINGS_H__

#include <iostream>
#include <symbolic/casadi.hpp>

void * get_null_ptr(void);

std::string marshall(char * x);
int marshall(int x);
double marshall(double x);
const CasADi::MX& marshall(const CasADi::MX& x);
std::vector<CasADi::SXMatrix> marshall(std::vector<CasADi::SXMatrix*> const & inputs);
const std::vector<std::vector<CasADi::MX> > & marshall(std::vector<std::vector<CasADi::MX*> > const & inputs);

#endif // __MARSHALL_THEM_BINDINGS_H__
