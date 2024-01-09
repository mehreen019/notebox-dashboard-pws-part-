#include "notes.h"

int notes::id = 0;

notes::notes():title(""), date(""), fp("")
{

}

notes::~notes()
{
    //dtor
}

notes::notes(string Title, string Date, string t, int Uid) :title(Title), date(Date), fp(t), uid(Uid)
{

}

schoolNotes::schoolNotes() {

}

schoolNotes::schoolNotes(string Cat, string Topic, string sub, string title, string date,string t, int Uid) :category(Cat), topicName(Topic), subject(sub), notes(title, date, t, Uid)
{

}

personalNotes::personalNotes() {

}

personalNotes::personalNotes(string title, string date, string t, int Uid) :notes(title, date, t, Uid) {

}

string notes::get_type()
{
	if ( typeid(*this) == typeid(schoolNotes))
		return "sclN";
	else if ( typeid(*this) == typeid(personalNotes))
		return "persN";
	else
	{
		return "n";
		//cerr << "\nNo such  type"; exit(1);
	}

}