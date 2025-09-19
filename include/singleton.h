#pragma once

template<typename T>
class Singleton {
public:
	// ����ʵ����Ψһ�ӿ�
	static T& GetInstance() {
		static T instance{ token() };
		return instance;
	}

protected:
	// ֻ������������ù���
	Singleton() = default;
	virtual ~Singleton() = default;

	// ������
	struct token {};

private:
	// ��ֹ��������Ϳ�����ֵ
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

};