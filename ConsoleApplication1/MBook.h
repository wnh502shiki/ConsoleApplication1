#pragma once
#include<string>
using namespace std;

struct Book
{
	int id;
	string borrower;
};

class MBook
{
public:
	MBook();
	~MBook();
	string getName();
	void setName(string name);
	string getISBN();
	void setISBN(string isbn);
	string getWriter();
	void setWriter(string writer);
	string getPublisher();
	void setPublisher(string publisher);
private:
	string m_name;
	string m_isbn;
	string m_wirter;
	string m_publisher;

	vector<Book> m_books;
};