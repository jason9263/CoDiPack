/**
 * CoDiPack, a Code Differentiation Package
 *
 * Copyright (C) 2015 Chair for Scientific Computing, TU Kaiserslautern
 *
 * This file is part of CoDiPack.
 *
 * CoDiPack is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 *
 * CoDiPack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU
 * General Public License along with CoDiPack.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: TODO
 */
#pragma once

#include "activeReal.hpp"
#include "tapes/forwardEvaluation.hpp"
#include "tapes/simpleTape.hpp"
#include "tapes/chunkTape.hpp"

namespace codi {
  typedef ActiveReal<double, ForwardEvaluation<double> > RealForward;
  typedef ActiveReal<float, ForwardEvaluation<float> > RealForwardFloat;

  typedef ActiveReal<double, ChunkTape<double, int> > RealReverse;
  typedef ActiveReal<float, ChunkTape<float, int> > RealReverseFloat;

  typedef ActiveReal<double, SimpleTape<double, int> > RealReverseSimple;
  typedef ActiveReal<float, SimpleTape<float, int> > RealReverseSimpleFloat;


}