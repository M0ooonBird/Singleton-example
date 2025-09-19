#pragma once
#include "Singleton.h"
#include <iostream>

class ModelCG : public Singleton<ModelCG> {
public:
	
	/*
	放在public 使得 基类 可以调用子类的构造函数，不需要友元
	禁止默认构造函数，只允许使用token构造，无法被外部直接构造
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
第一次调用modelCG()时，会调用GetInstance，创建实例，
进而调用ModelCG(token)构造函数
*/
inline ModelCG* modelCG() { return &ModelCG::GetInstance(); }