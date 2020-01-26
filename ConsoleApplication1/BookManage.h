#pragma once
#include <vector>
using namespace std;
/*
图书管理程序

*/
class BookManage
{
public:
	BookManage();
	~BookManage();

	void start();
	void init();
	bool addBook();
	bool delBook();
	bool openBook();
	bool editBook();

private:

	//存储所有书籍信息
	vector<MBook> m_books;

};