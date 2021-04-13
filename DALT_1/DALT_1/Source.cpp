#include"DATABASE.h"
#include"STUDENT.h"
#include"TYPEBOOK.h"
#include"BOOK.h"
#include"BORROWRETURN.h"
#include"DoubleLinkList.h"
#include"Node.h"
#include"MENU.h"
#include"DATABASE.h"

//const char* CmdCreateDB = "sqlcmd -S DESKTOP-G82LPV2 -E -i CreateDatabase.sql";
//const char* CmdDeleteDB = "sqlcmd -S DESKTOP-G82LPV2 -E -i DeleteDatabase.sql";
//const char* CmdInitDB = "sqlcmd -S DESKTOP-G82LPV2 -E -i Librarry-Management.sql";
//const char* CmdShowAvailableServerSqlcmd = "sqlcmd /L";
//const char* CmdShowAvailableServerOsql = "osql /L";


int main()
{
	DATABASE DB;
	/*cout << "Loading Database. Please Wait\n\n";
	system(CmdDeleteDB);
	system(CmdCreateDB);
	system(CmdInitDB);
	cout << "\n\nPress anykey to continue.\n";
	_getch();
	system("cls");*/

	Menu A;
	DoubleLinkList<Student> LStudent;
	DoubleLinkList<Book> LBook;
	DoubleLinkList<TypeBook> LTB;
	DoubleLinkList<BorrowReturn> LBR;
	A.MenuProject(LStudent, LBook, LTB, LBR, DB);

	DB.close();
	

	return 0;
}