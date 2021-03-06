#pragma once
#include "Shape.h"
#include <vector>
#include <memory>

class ShapeContainer {
private:
	std::vector<std::unique_ptr<Shape>> shapes;
public:
	ShapeContainer() {}

	~ShapeContainer() {}

	void printAreas() const;
	void printPerimeters() const;
	void addShape(std::unique_ptr<Shape> sh);

	void printName() const;
};

