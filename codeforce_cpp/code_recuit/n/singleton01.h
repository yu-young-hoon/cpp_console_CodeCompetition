#include<mutex>


class SingleTon {
public:
	SingleTon* getInstance() {
		if (instance == nullptr) {
			std::lock_guard<std::mutex> lock(mm);
			if (instance == nullptr) {
				instance = new SingleTon();
			}
		}
		return instance;
	}
	SingleTon& operator=(const SingleTon&) {};

private:
	static SingleTon* instance;
	std::mutex mm;
	SingleTon() {};
	~SingleTon() {};
};