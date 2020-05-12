#include<bits/stdc++.h>

using namespace std;

void bookdb(map<int,pair<string,char> > books)
{
  map<int,pair<string,char> >::iterator it;
  for(it=books.begin();it!=books.end();it++)
    {
    cout<<it->first<<" "<<(it->second).first<<" "<<(it->second).second<<endl;
    }
}

void subdb(map<int,pair<string,list<string> > > subs)
{
  map<int,pair<string,list<string> > >::iterator it1;
  list<string>::iterator it2;

  for(it1=subs.begin();it1!=subs.end();it1++)
    {
        cout<<"Books borrowed by "<<" "<<(it1->second).first<<" "<<it1->first<<" "<<"are"<<endl;

        for(it2=((it1->second).second).begin();it2!=((it1->second).second).end();it2++)
        {
            cout<<*it2<<endl;
        }

    }

}

void addbook(map<int,pair<string,char> > books)
{
    int acc;
    string title;
    char tag;

    cout<<"Enter the accesion number"<<endl;
    cin>>acc;

    cout<<"Enter the title"<<endl;
    cin>>title;

    cout<<"Book borrowed or not (Y/N)"<<endl;
    cin>>tag;

    books[acc]=make_pair(title,tag);
    cout<<"Updated book db"<<endl;
    bookdb(books);
}

void bookissue(map<int,pair<string,char> > books)
{
    map<int,pair<string,char> >::iterator it;
    int accno;
    bookdb(books);
    cout<<"Enter the accesion no of the book to be issued"<<endl;
    cin>>accno;

    it = books.find(accno);
    (it->second).second='Y';
    bookdb(books);
}

int main()
{
  map<int,pair<string,char> > books;
  int n1;

  cout<<"Enter the number of books to be stored in database"<<endl;
  cin>>n1;

  for(int k=0;k<n1;k++)
  {
    int acc;
    string title;
    char tag;

    cout<<"Enter the accesion number of "<<k+1<<" book"<<endl;
    cin>>acc;

    cout<<"Enter the title of "<<k+1<<" book"<<endl;
    cin>>title;

    cout<<"Book borrowed or not (Y/N)"<<endl;
    cin>>tag;

    books[acc]=make_pair(title,tag);
  }

  map<int,pair<string,list<string> > > subs;
  int n2;

  cout<<"Enter the number of subscribers to be stored in database"<<endl;
  cin>>n2;

  for(int j=0;j<n2;j++)
  {
    int sno,bno;
    string name,title;

    cout<<"Enter the subscriber number of subscriber "<<j+1<<endl;
    cin>>sno;

    cout<<"Enter the name of subscriber"<<endl;
    cin>>name;

    cout<<"Enter the number of books subscriber has borrowed"<<endl;
    cin>>bno;

    list<string> book;

    for(int i=0;i<bno;i++)
    {
      cout<<"Enter the title of book number "<<i+1<<" for subscriber number "<<j+1<<endl;
      cin>>title;
      book.push_front(title);
    }
    subs[sno]=make_pair(name,book);
  }
  system("CLS");
while(1)
{




  int choice;
  cout<<" 1. Book Database\n 2. Subscriber Database\n 3. Book Issue\n 4. Book Submission"<<endl;
  cin>>choice;

  switch(choice)
  {
    case 1:
    bookdb(books);
    break;

    case 2:
    subdb(subs);
    break;

    case 3:
    bookissue(books);
    break;

    case 4:
    addbook(books);
    break;

    default: ;
  }
}
}
