# Task 2: Cone triangle
A small program in C++ that  compute coordinates of triangle nodes used to display a conical surface (see below):

_The basis of this project is taken from  [Task_1_curve](https://github.com/Pugavkomm/Task_1_curve.git). They are very similar. The only difference is the `DIM` constant in the consts.h file, which allows the Curve and Point classes to become `3D` and support `3D` objects. Since the ellipse is well suited for our purposes, we need to modify it for the base of the cone. The program assumes that the base of the cone always lies in the plane `(x1, x2)`, and the `height` is drawn perpendicular to the cone `(x3)`. As a basis, we use the Curve (Ellipse) `point_per_parameter` (double parameter) class method to get the coordinates of the triangle on the circle._

_Getting the coordinates is fairly easy to do. Point coordinates are always known (0, 0, height). The coordinates of the other two points are specified parametrically in the Ellipse class._

## Documentation
[Documentation](http://95.182.120.16:3000/) for [Task_1_curve](https://github.com/Pugavkomm/Task_1_curve.git).




## Make

`make` -> output main

## Run 
`./output/main`
`./main height radius number_of_segments`



## Structure
```
|- ./
---| Makefile

---| src/
---|---------| main.cpp
---| include/
---|---------| consts.h
---|---------| Curve.h
---|---------| Ellipse.h
---|---------| Line.h
---|---------| Point.h
---| lib/...
---|output/ 
---|---------|main
---| docs/
---|---------| docbook/
---|---------| html/
---|---------| xml/
---|---------| doxygen_conf

```

