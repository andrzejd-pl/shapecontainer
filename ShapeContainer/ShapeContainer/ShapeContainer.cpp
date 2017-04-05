#include "ShapeContainer.h"
#include <iostream>

void ShapeContainer::printAreas() const {
	std::cout << "Areas:" << std::endl;
	for (const std::unique_ptr<Shape>& sh : shapes) {
		std::cout << sh->getName() << ": " << sh->area() << std::endl;
	}
}
void ShapeContainer::printPerimeters() const {
	std::cout << "Perimeters:" << std::endl;
	for (const std::unique_ptr<Shape>& sh : shapes) {
		std::cout << sh->getName() << ": " << sh->perimeter() << std::endl;
	}
}
void ShapeContainer::addShape(std::unique_ptr<Shape> sh) {
	shapes.push_back(std::move(sh));
}

void ShapeContainer::printName() const {
	std::cout << "Names:" << std::endl;
	for (const std::unique_ptr<Shape>& sh : shapes) {
		std::cout << sh->getName() << std::endl;
	}
}