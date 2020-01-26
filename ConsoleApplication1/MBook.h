#pragma once
#include<string>
#include<vector>
using namespace std;

struct Book
{
	int id;
	int userid;
};

class MBook
{
public:
	MBook();
	MBook(string isbn);
	~MBook();
	string getName();
	void setName(string name);
	string getISBN();
	void setISBN(string isbn);
	string getWriter();
	void setWriter(string writer);
	string getPublisher();
	void setPublisher(string publisher);

	bool addBook(int cnt);
private:
	string m_name;
	string m_isbn;
	string m_writer;
	string m_publisher;

	vector<Book> m_books;
};