
# Notes

This directory contains classes that represent the various shapes or geometries that
can be represented using blades of 3D conformal geometric algebra.  Given a function...

  p(v) = no + v + (1/2)v^2 ni
  
...a blade B can represent a geometry in at least two ways.  First, all v in R^3 such
that...

  p(v) . B = 0,
  
...and second, all v in R^3 such that...

  p(v) ^ B = 0.
  
Alternatively, we could say that a geometry has two different representations,
B and B\*I, where I is the unit psuedo-scalar.  That is, B and its dual B\*I represent
the same geometry, because...

  p(v) ^ B = 0 if and only if p(v) . (B\*I) = 0.

This is important to understand, because the geometry classes will support at least
on of these representations.  Both are not necessary, since you can simply get one
from the other by taking the dual.