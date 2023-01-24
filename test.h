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
	void SceneManager0();
	void SceneManager1();
	void SceneManager2();
	void SceneManager3();
	static TestSingleton* GetInstance();
	//static TestSingleton* ChangeScene();
};