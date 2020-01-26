#pragma once
#include <iostream>
#include <vector>
#include "MBook.h"
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
	bool checkLegalISBN(string isbn);
	bool checkExistISBN(string isbn);
	bool checkStringIsNum(string str);
	MBook* getBook(string isbn);
	bool addBook(MBook* book);


	bool m_runningflag;
	//存储所有书籍信息
	vector<MBook*> m_books;

};