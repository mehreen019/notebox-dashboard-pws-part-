#ifndef NOTES_H
#define NOTES_H
#include<iostream>
#include<string>
#include "Header.h"
using namespace std;

class notes
{
public:
    notes();
    notes(string title, string date, QString t);
    virtual ~notes();
    
    static int id;

    string Gettitle() { return title; }
    void Settitle(string val) { title = val; }
    string Getdate() { return date; }
    void Setdate(string val) { date = val; }
    void setFile(QString tempFile) { fp = tempFile; }
    QString getFile() { return fp; }


    void displayinfo();
    
    
protected:

private:
    string title;
    string date;
    //FILE* fp;
    QString fp;
};

class personalNotes : public notes
{
private:

public:
    personalNotes();
    personalNotes(string title, string date, QString t);
    void updateNoteInfo();
};

class schoolNotes : public notes
{
private:
    string category;
    string topicName;
    string subject;
    

public:
    schoolNotes();
    schoolNotes(string Cat, string Topic, string sub, string title, string date, QString t);
 
    string getCategory() { return category; }
    void setCategory(string cat) { category = cat; }
    string getTopic() { return topicName; }
    void setTopic(string top) { topicName = top; }
    string getSubject() { return subject; }
    void setSubject(string sub) { subject = sub; }
};

#endif // NOTES_H

