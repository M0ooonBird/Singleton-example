#pragma once
#include "Singleton.h"
#include <iostream>

class ModelCG : public Singleton<ModelCG> {
public:
	
	/*
	����public ʹ�� ���� ���Ե�������Ĺ��캯��������Ҫ��Ԫ
	��ֹĬ�Ϲ��캯����ֻ����ʹ��token���죬�޷����ⲿֱ�ӹ���
	*/
	ModelCG(token) { std::cout << "CG create by token" << std::endl; }
	virtual ~ModelCG() {}


	void SetA(int a) { _a = a; }
	void SetD(double d) { _d = d; }

	auto GetA() const { return _a; }
	auto GetD() const { return _d; }


private:

	int _a;
	double _d;
};

/* 
��һ�ε���modelCG()ʱ�������GetInstance������ʵ����
��������ModelCG(token)���캯��
*/
inline ModelCG* modelCG() { return &ModelCG::GetInstance(); }