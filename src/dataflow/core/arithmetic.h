/*
 *   TMF
 *   Copyright (C) TMF Team
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DF_ARITHMETIC_H_
#define DF_ARITHMETIC_H_

#include <string>
#include <map>
#include <cmath>

namespace df {
	
  class Arithmetic {

    private:
      std::map<int, long int> nth;
    public:
      Arithmetic();

      bool isPrime(int n);
      long int nThPrime(int n);

  };

}

#endif /* DF_ARITHMETIC_H_ */
