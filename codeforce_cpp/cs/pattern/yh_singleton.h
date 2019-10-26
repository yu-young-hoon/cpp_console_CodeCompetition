#pragma once
#include <mutex>

template <typename T>
class yh_singleton
{
public:
	static T* getInstance()
	{
		if (instance == nullptr) {
			lock_guard<mutex> lock(m_);
			if (instance == nullptr)
				instance = new T;
		}
		return instance;
	};

	static void destroyInstance()
	{
		if (instance)
		{
			delete instance;
			instance = NULL;
		}
	};
private:
	static T* instance;
	mutex m_;
protected:
	yh_singleton(const yh_singleton& other);
	yh_singleton& operator=(yh_singleton& cls);
	yh_singleton();
	virtual ~yh_singleton(){};
};
//template <typename T>T * yh_singleton<T>::instance = NULL;