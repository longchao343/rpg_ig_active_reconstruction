/* Copyright (c) 2015, Stefan Isler, islerstefan@bluewin.ch
*
This file is part of movements, a library for representations and calculations of movements in space,

movements is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
movements is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.
You should have received a copy of the GNU Lesser General Public License
along with movements. If not, see <http://www.gnu.org/licenses/>.
*/

#include "movements/geometry_pose.h"
#include "movements/combined_relative_movement.h"

namespace movements
{

movements::GeometryPose GeometryPose::operator+( movements::RelativeMovement _second )
{
  return _second.applyToBasePose(*this);
}

GeometryPose GeometryPose::operator+( movements::CombinedRelativeMovement  _second )
{
  return _second.applyToBasePose(*this);
}

GeometryPose& GeometryPose::operator+=( movements::RelativeMovement  _second )
{
  *this = _second.applyToBasePose(*this);
  return *this;
}

GeometryPose& GeometryPose::operator+=( movements::CombinedRelativeMovement  _second )
{
  *this = _second.applyToBasePose(*this);
  return *this;
}

}