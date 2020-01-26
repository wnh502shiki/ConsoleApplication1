#include "BookManage.h"

BookManage::BookManage() 
{
	init();
};
BookManage::~BookManage() 
{
	for (auto it = m_books.begin(); it < m_books.end(); it++)
	{
		delete* it;
	}
};

void BookManage::start() 
{
	while (m_runningflag)
	{
		system("cls");
		cout << "-1 �˳�����" << endl;
		cout << "1 ��ѯ�鼮" << endl;
		cout << "2 ����鼮" << endl;
		cout << "3 ɾ���鼮" << endl;
		cout << "4 --------" << endl;
		cout << "5 --------" << endl;
		cout << "6 --------" << endl;

		cout << endl;
		cout << "ѡ��ģ��" << endl;

		int moduleIndex = -1;
		cin >> moduleIndex;
		cout << moduleIndex;
		
		switch (moduleIndex)
		{
		case -1 :
			m_runningflag = false;
			break;
		case 1:
			break;
		case 2:
			addBook();
			break;
		case 3:
			break;
		default:
			break;
		}

		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	}
};
void BookManage::init() 
{
	m_runningflag = true;
	cout << "init complete" << endl;
};
bool BookManage::addBook()
{
	system("cls");
	bool inputflag = true;
	string isbn = "";
	while (inputflag)
	{
		cout << "________________����鼮_______________"<<endl;
		cout << "������ISBN" << endl;
		cout << "��ISBN������:0," << endl;
		cout << "ȡ������鼮������:-1," << endl;
		cin >> isbn;
		if (isbn == "-1")
		{
			return false;
		}
		else
		{
			if ((isbn == "0") || (checkLegalISBN(isbn)))
			{
				MBook* book = getBook(isbn);

				if (!book)
				{
					book = new MBook(isbn);
					cout << "��������" << endl;
					string inputstr;
					cin >> inputstr;
					book->setName(inputstr);

					cout << "��������" << endl;
					cin >> inputstr;
					book->setWriter(inputstr);

					cout << "������浥λ" << endl;
					cin >> inputstr;
					book->setPublisher(inputstr);

					cout << book->getName() << endl << book->getPublisher() << endl << book->getWriter() << endl;

					m_books.push_back(book);
				}

				if (addBook(book))
				{
					cout << "����鼮�ɹ�" << endl;
				}
				else
				{
					cout << "����鼮ʧ��" << endl;
				};
				cout << endl;
			}
		}
	}

	return true;
};

bool BookManage::delBook() 
{
	return true;
};
bool BookManage::openBook() 
{
	return true;
};
bool BookManage::editBook() 
{
	return true;
};

bool BookManage::checkLegalISBN(string isbn) 
{
	bool ret = checkStringIsNum(isbn);

	return ret;
};

bool BookManage::checkExistISBN(string isbn) 
{
	for (auto it = m_books.begin(); it < m_books.end(); it++)
	{
		auto book = *it;
		if (book->getISBN() == isbn)
		{
			return true;
		}
	}

	return false;
};

MBook* BookManage::getBook(string isbn) 
{
	for (auto it = m_books.begin(); it < m_books.end(); it++)
	{
		auto book = *it;
		if (book->getISBN() == isbn)
		{
			return *it;
		}
	}

	return NULL;
};

bool BookManage::addBook(MBook* book) 
{
	bool inputflag = true;
	int inputCnt;
	while (inputflag)
	{
		cout << "��������ӵ�����" << endl;
		cin >> inputCnt;
		if (inputCnt >= 0)
		{
			break;
		}
	}

	return book->addBook(inputCnt);
};

bool BookManage::checkStringIsNum(string str) 
{
	for (auto it = str.begin(); it < str.end(); it++)
	{
		if ((*it < '0') || (*it > '9'))
		{
			return false;
		}
	}

	return true;
};