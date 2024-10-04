#include <algorithm>
#include <iostream>

class MyIntVec {
public:
	MyIntVec(size_t capacity = 8): mArray{new int[capacity]}, mCapacity{capacity} {}

	~MyIntVec() {
		delete[] mArray;
	}

	void push_back(int value) {
		// if the array is full, resize it
		if (mSize == mCapacity) {
			int* newArray = new int[mCapacity * 2];
			std::copy(mArray, mArray + mSize, newArray);
			delete[] mArray;
			mArray = newArray;
			mCapacity *= 2;
		}

		mArray[mSize++] = value;
	}

	int operator[](size_t index) const {
		return mArray[index];
	}

	int& operator[](size_t index) {
		return mArray[index];
	}

	class Iterator {
	public:
		Iterator(int* ptr) : mPtr(ptr){}

		int& operator*() {
			return *mPtr;
		}

		Iterator& operator++() {
			++mPtr;
			return *this;
		}

		bool operator==(const Iterator& other) const {
			return mPtr == other.mPtr;
		}
		bool operator!=(const Iterator& other) {
			return mPtr != other.mPtr;
		}

	private:
		int* mPtr;
	};

	Iterator begin() {
		return Iterator(mArray);
	}

	Iterator end() {
		return Iterator(mArray + mSize);
	}

private:
	int *mArray;
	size_t mCapacity;
	size_t mSize = 0;
};

int main() {
	MyIntVec vec{};
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	for (MyIntVec::Iterator it = vec.begin(); it != vec.end(); ++it) {
		std::cout << *it << std::endl;
	}
}
