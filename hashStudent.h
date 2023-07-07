#ifndef "HASH_STUDENT_H"
#define "HASH_STUDENT_H"

/*
Name
	- firstname
	- middlename
	- lastname
	
MyDate
	- date
	- month
	- year
	
Student
	- studID
	- studName
	- sex
	- birthdate
	- program
	- year level
	
SType
	- Student
	- next/link
	
Dictionary
	- *SType
	- count
	- max
		
---hash for first letter of lastname
---26 ang value
--- first letter of lastname
--- inserted sorted lastname, firstname, middlename, id number

void initDict(Dictionary *d, int size);

*/

typedef char String[30];
typedef struct Node;

typedef struct {
	String fName;
	String mName;
	String lName;
} Name;

typedef struct {
	int date;
	int month;
	int year;
} MyDate;

typedef struct {
	int studID;
	Name studName;
	char sex;
	MyDate birthdate;
	String program;
	int year;
} Student;

typedef struct {
	Student student;
	Node *next;
} SType;

typedef struct {
	SType *studlist;
	int count;
	int max;
} Dictionary;


void initDict(Dictionary *d, int size);



#endif
