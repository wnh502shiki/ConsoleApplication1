#pragma once
#include <vector>
using namespace std;
/*
ͼ��������

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

	//�洢�����鼮��Ϣ
	vector<MBook> m_books;

};