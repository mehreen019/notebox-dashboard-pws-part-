#include "notes.h"

int notes::id = 0;

notes::notes()
{

}

notes::~notes()
{
    //dtor
}

notes::notes(string Title, string Date, FILE* t) :title(Title), date(Date), fp(t)
{

}

schoolNotes::schoolNotes() {

}

schoolNotes::schoolNotes(string Cat, string Topic, string sub, string title, string date, FILE* t) :category(Cat), topicName(Topic), subject(sub), notes(title, date, t)
{

}

personalNotes::personalNotes() {

}

personalNotes::personalNotes(string title, string date, FILE* t) :notes(title, date, t) {

}