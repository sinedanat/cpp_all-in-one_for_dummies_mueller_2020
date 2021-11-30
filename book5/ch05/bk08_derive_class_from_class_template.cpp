#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
    string Name;
    string Author;
    string Publisher;

    Book(string aname, string anauthor, string apublisher)
        : Name(aname), Author(anauthor), Publisher(apublisher) {}
};

class Magazine
{
public:
    string Name;
    string Issue;
    string Publisher;

    Magazine(string aname, string anissue, string apublisher)
        : Name(aname), Issue(anissue), Publisher(apublisher) {}
};

template<typename T>
class MediaHolder
{
public:
    T* array[100];
    int Count;

    void Add(T* item)
    {
        array[Count] = item;
        Count++;
    }
    MediaHolder() : Count(0) {}
};

class BookHolder : public MediaHolder<Book>
{
public:
    enum GenreEnum
    {
        children,
        scifi,
        romance,
        horror,
        mainstream,
        hownotto
    };
    GenreEnum GenreOfAllBooks;
};

class MagazineHolder : public MediaHolder<Magazine>
{
public:
    bool CompleteSet;
};

int main()
{
    MagazineHolder mh;
    mh.Add(new Magazine("Dummies Life", "Vol 1 No 1", "Wile E."));
    mh.Add(new Magazine("Dummies Life", "Vol 1 No 2", "Wile E."));
    mh.Add(new Magazine("Dummies Life", "Vol 1 No 3", "Wile E."));
    mh.CompleteSet = false;
    cout << mh.Count << endl;

    BookHolder bh;
    bh.Add(new Book("Yellow Rose", "Sandy Shore", "Wile E."));
    bh.Add(new Book("Bluebells", "Sandy Shore", "Wile E."));
    bh.Add(new Book("Red Tulip", "Sandy Shore", "Wile E."));
    bh.GenreOfAllBooks = BookHolder::children;
    cout << bh.Count << endl;

    return 0;
}

// 3
// 3
