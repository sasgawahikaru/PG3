#pragma once
class TestSingleton final
{
private:
	TestSingleton();
	~TestSingleton();
public:

	TestSingleton(const TestSingleton& obj) = delete;
	TestSingleton& operator=(const TestSingleton& obj) = delete;

	//	void scanf();
	void ChangeScene(int);
	static TestSingleton* GetInstance();
//  static TestSingleton* ChangeScene();
};


