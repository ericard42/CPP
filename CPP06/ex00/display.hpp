#ifndef DISPLAY_HPP
# define DISPLAY_HPP

#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>

void	displayChar(char c, long valNb, bool fail);
void	displayInt(int i, long valNb, bool fail);
void 	displayFloat(std::string const str, float nbr, double valDb, bool fail);
void 	displayDouble(std::string const str, double nbr, bool fail);
int		verifChar(std::string str);

#endif