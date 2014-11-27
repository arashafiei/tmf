/*
 * 
 *  Tiny Multimedia Framework
 *  Copyright (C) 2014 Arash Shafiei
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef BUS_H
#define BUS_H

#include <vector>

#include "core/Attribute.h"
#include "core/Event.h"
#include "core/EventObserver.h"

namespace tmf {
  
  class Bus
  {
    
  private:
    std::vector<EventObserver *> observers;
    
  public:
    void registerObserver(EventObserver * obs){
      observers.push_back(obs);
    }
    
    void notify(Event event) {
      for (auto obs : observers) {
	obs->handleEvent(event);
      }
    }
  };
  
}

#endif // BUS_H
