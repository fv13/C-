#include <string>

class human{
public:
	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const std::string& getName() const {
		return name;
	}

	void setName(const std::string& name) {
		this->name = name;
	}

private:
std::string name;
int age;

};
