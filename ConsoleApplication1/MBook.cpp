#include"MBook.h"

MBook::MBook() {};
MBook::MBook(string isbn)
{
	m_isbn = isbn;
};
MBook::~MBook() {};
string MBook::getName() 
{
	return m_name;
};
void MBook::setName(string name) 
{
	m_name = name;
};
string MBook::getISBN() 
{
	return m_isbn;
};
void MBook::setISBN(string isbn) 
{
	m_isbn = isbn;
};
string MBook::getWriter() 
{
	return m_writer;
};
void MBook::setWriter(string writer) 
{
	m_writer = writer;
};
string MBook::getPublisher() 
{
	return m_publisher;
};
void MBook::setPublisher(string publisher) 
{
	m_publisher = publisher;
};

bool MBook::addBook(int cnt) 
{
	int baseCnt = (m_books.size() > 0) ? m_books.back().id : 1;
	bool ret = false;
	for (int i = 1; i <= cnt; i++)
	{
		Book book = { baseCnt + i, -1};
		m_books.push_back(book);
		ret = true;
	}

	return ret;
};
