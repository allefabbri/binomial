// Copyright 2015, Alessandro Fabbri
// for any question, please mail rommacc@yahoo.it

/************************************************************************
* This program is free software: you can redistribute it and/or modify  *
* it under the terms of the GNU General Public License as published by  *
* the Free Software Foundation, either version 3 of the License, or     *
* (at your option) any later version.                                   *
*                                                                       *
* This program is distributed in the hope that it will be useful,       *
* but WITHOUT ANY WARRANTY; without even the implied warranty of        *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
* GNU General Public License for more details.                          *
*                                                                       *
* You should have received a copy of the GNU General Public License     *
* along with this program.  If not, see <http://www.gnu.org/licenses/>. *
************************************************************************/

#include <iostream>
#include <cmath>

#define bc binomial_coefficient 
#define bd binomial_distribution 

double binomial_coefficient(int n, int k){      
    double bin = 1;                             
    for(int i= 0; i<k; i++){
        bin *= (double) (n-i)/(k-i);
    }
    return bin;
}

double binomial_distribution(int n, int k, double p){                 //     n = number of events
    return binomial_coefficient(n,k)*pow(p,k)*pow(1-p,n-k);           //     k = number of positive outcomes
}                                                                     //     p = probability of positive outcome over a single event

int main(){
  int n=6, k=3;
  double coin_odds=0.5, dice_odds=1./6;

  std::cout << "---- BINOMIAL DISTRIBUTION ----" << std::endl << std::endl;

	std::cout << "binomial_coefficient( " << n << " , " << k << " ) = " << bc(n,k) << std::endl << std::endl;

	std::cout << "score " << k << " heads after " << n << " coin tosses" << std::endl;
	std::cout << "binomial_distribution( " << n << " , " << k << " , " << coin_odds << " ) = " << bd(n,k,coin_odds) << std::endl << std::endl;

	std::cout << "score " << k << " \"6\" after " << n << " dice rolls" << std::endl;
	std::cout << "binomial_distribution( " << n << " , " << k << " , " << dice_odds << " ) = " << bd(n,k, dice_odds) << std::endl;

	return 0;
}