// TODO: implement Vector2D class

#include <iostream>
#include <vector>
class Vector2D {
public:
		Vector2D() : mX{0}, mY{0}{}
		Vector2D(double x, double y) : mX{x}, mY{y} {}
		Vector2D(std::vector<double> const& v) : mX{v[0]}, mY{v[1]}{}
		Vector2D(Vector2D const& other) : mX{other.mX}, mY{other.mY}{}
		Vector2D(Vector2D && other) : mX{std::exchange(other.mX, 0.0)}, mY{std::exchange(other.mY, 100)} {}
		Vector2D operator=(Vector2D const& other) {
			if (this != &other) {
				mX = other.mX;
				mY = other.mY;
			}
			return *this;
		}

		Vector2D operator=(Vector2D && other) {
			mX = std::exchange(other.mX, 0.0);
			mY = std::exchange( other.mY, 0.0);
			return *this;
		}
		friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec) {
			os << "Vector: {" << vec.mX << ", " << vec.mY << "}";
			return os;
		}
		// Overloaded type conversion.
		operator std::vector<double>() const {
			return {mX, mY};
		}

		friend Vector2D operator*(Vector2D const& vec, double scalar) {
			return Vector2D{vec.mX *scalar, vec.mY*scalar};
		}

		friend Vector2D operator+(Vector2D const& lhs, Vector2D const& rhs);

	private:
		double mX;
		double mY;
	};