#include <iostream>

using namespace std;

//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

//The Object ADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	virtual ~Object() {}
};

class Number : public Object{
public:
	int num;

	Number() {
		this->num = 0;
	}

	Number(int n){
		this->num = n;
	}

	~Number()override = default;

	/* 
	 * if other is a Number, then this should return a Number
	 * if other is a Coord3D, then this should return a Coord3D
	 * Hint: typeid(var) might be a helpful operator to know the type of an object at runtime
	 */ 
	Object* multiply(const Object* otherObject) const;

	void print()override {
        std::cout << "num = " << num << std::endl;
	}
};

class Coord3D : public Object {
public:
	int x, y, z;

	Coord3D() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Coord3D(int x_coord, int y_coord, int z_coord) {
		this->x = x_coord;
		this->y = y_coord;
		this->z = z_coord;
	}

	~Coord3D()override = default;

	// This should return a Coord3D
	Object* multiply(const Object* otherObject) const override;

	void print() override {
        std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;
    }
};

Object *Number::multiply(const Object *otherObject) const {
	if (typeid(*otherObject) == typeid(Number)) {
		const Number* temp = (Number*)otherObject;
		return new Number(this->num * temp->num);
	} else {
		const Coord3D* temp = (Coord3D*)otherObject;
		return new Coord3D(this->num * temp->x, this->num * temp->y, this->num * temp->z);
	}
}

Object *Coord3D::multiply(const Object *otherObject) const {
	if (typeid(*otherObject) == typeid(Number)) {
		const Number* temp = (Number*)otherObject;
		return new Coord3D(this->x * temp->num, this->y * temp->num, this->z * temp->num);
	} else {
		const Coord3D* temp = (Coord3D*)otherObject;
		return new Coord3D(this->x * temp->x, this->y * temp->y, this->z * temp->z);
	}
}
