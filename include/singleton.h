#pragma once

template<typename T>
class Singleton {
public:
	// 构造实例的唯一接口
	static T& GetInstance() {
		static T instance{ token() };
		return instance;
	}

protected:
	// 只允许派生类调用构造
	Singleton() = default;
	virtual ~Singleton() = default;

	// 代理类
	struct token {};

private:
	// 禁止拷贝构造和拷贝赋值
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

};