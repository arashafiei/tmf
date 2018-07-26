/*
 *   libdataflow
 *   Copyright (C) 2018
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

#include "matmerge.h"

using namespace df;
using namespace std;

ActorRegister<MatMerge> MatMerge::reg("MatMerge");

MatMerge::MatMerge(const string& name) : Actor(name) {
  input = createInputPortVector<df::Mat>("input");
  output = createOutputPort<df::Mat>("output");
}

void MatMerge::init() {


}

void MatMerge::run() {

  //auto in = consume(input);	
  auto out = produce(output);
  log("sending "+to_string(stepno));
  //release(input);
  release(output);

}

MatMerge::~MatMerge() {
  destroyPort(input);
  destroyPort(output);
}