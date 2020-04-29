#include <fstream>
#include <iomanip>
#include <cstring>
#include "iobuffer.h"
#include "fixfld.h"
#include "length.h"
#include "student.h"
#include "coursereg.h"
#include "buffile.h"

student A;
student B;
student C;
student D;
student E;
student F;
student G;
student H;
student I;
student J;

coursereg a;
coursereg b;
coursereg c;
coursereg d;
coursereg e;
coursereg f;
coursereg g;
coursereg h;
coursereg i;
coursereg j;

void InitPerson()
{
	cout << "Initializing 10 Students"<<endl;
    strcpy(A.identifier, "10");
    strcpy(A.name, "A");
    strcpy(A.Address, "Seoul");
    strcpy(A.dofe, "2014");
    strcpy(A.credit_hours, "10");
    A.Print (cout);
    strcpy(B.identifier, "11");
    strcpy(B.name, "B");
    strcpy(B.Address, "Seoul");
    strcpy(B.dofe, "2014");
    strcpy(B.credit_hours, "10");
    B.Print (cout);
    strcpy(C.identifier, "12");
    strcpy(C.name, "C");
    strcpy(C.Address, "Seoul");
    strcpy(C.dofe, "2014");
    strcpy(C.credit_hours, "10");
    C.Print (cout);
    strcpy(D.identifier, "13");
    strcpy(D.name, "D");
    strcpy(D.Address, "Seoul");
    strcpy(D.dofe, "2014");
    strcpy(D.credit_hours, "10");
    D.Print (cout);
    strcpy(E.identifier, "14");
    strcpy(E.name, "E");
    strcpy(E.Address, "Seoul");
    strcpy(E.dofe, "2014");
    strcpy(E.credit_hours, "10");
    E.Print (cout);
    strcpy(F.identifier, "15");
    strcpy(F.name, "F");
    strcpy(F.Address, "Seoul");
    strcpy(F.dofe, "2014");
    strcpy(F.credit_hours, "10");
    F.Print (cout);
    strcpy(G.identifier, "16");
    strcpy(G.name, "G");
    strcpy(G.Address, "Seoul");
    strcpy(G.dofe, "2014");
    strcpy(G.credit_hours, "10");
    G.Print (cout);
    strcpy(H.identifier, "17");
    strcpy(H.name, "H");
    strcpy(H.Address, "Seoul");
    strcpy(H.dofe, "2014");
    strcpy(H.credit_hours, "10");
    H.Print (cout);
    strcpy(I.identifier, "18");
    strcpy(I.name, "I");
    strcpy(I.Address, "Seoul");
    strcpy(I.dofe, "2014");
    strcpy(I.credit_hours, "10");
    I.Print (cout);
    strcpy(J.identifier, "19");
    strcpy(J.name, "J");
    strcpy(J.Address, "Seoul");
    strcpy(J.dofe, "2014");
    strcpy(J.credit_hours, "10");
    J.Print (cout);
    
    cout << "Initializing 10 Course Registration"<<endl;
    strcpy(a.course_id, "1");
    strcpy(a.student_id, "a");
    strcpy(a.course_credit_hours, "10");
    strcpy(a.course_grade, "A");
    a.Print (cout);
    strcpy(b.course_id, "2");
    strcpy(b.student_id, "b");
    strcpy(b.course_credit_hours, "10");
    strcpy(b.course_grade, "A");
    b.Print (cout);
    strcpy(c.course_id, "3");
    strcpy(c.student_id, "c");
    strcpy(c.course_credit_hours, "10");
    strcpy(c.course_grade, "A");
    c.Print (cout);
    strcpy(d.course_id, "4");
    strcpy(d.student_id, "d");
    strcpy(d.course_credit_hours, "10");
    strcpy(d.course_grade, "A");
    d.Print (cout);
    strcpy(e.course_id, "5");
    strcpy(e.student_id, "e");
    strcpy(e.course_credit_hours, "10");
    strcpy(e.course_grade, "A");
    e.Print (cout);
    strcpy(f.course_id, "6");
    strcpy(f.student_id, "f");
    strcpy(f.course_credit_hours, "10");
    strcpy(f.course_grade, "A");
    f.Print (cout);
    strcpy(g.course_id, "7");
    strcpy(g.student_id, "g");
    strcpy(g.course_credit_hours, "10");
    strcpy(g.course_grade, "A");
    g.Print (cout);
    strcpy(h.course_id, "8");
    strcpy(h.student_id, "h");
    strcpy(h.course_credit_hours, "10");
    strcpy(h.course_grade, "A");
    h.Print (cout);
    strcpy(i.course_id, "9");
    strcpy(i.student_id, "i");
    strcpy(i.course_credit_hours, "10");
    strcpy(i.course_grade, "A");
    i.Print (cout);
    strcpy(j.course_id, "10");
    strcpy(j.student_id, "j");
    strcpy(j.course_credit_hours, "10");
    strcpy(j.course_grade, "A");
    j.Print (cout);
    
    
}


void testBufferFile (IOBuffer & Buff, char * myfile)
{
	student stu;
    coursereg cou;
	int result;
    
	int recaddr1, recaddr2, recaddr3, recaddr4;
    int recaddr5, recaddr6, recaddr7;
    int recaddr8, recaddr9, recaddr10;
    
    int Recaddr1, Recaddr2, Recaddr3, Recaddr4;
    int Recaddr5, Recaddr6, Recaddr7;
    int Recaddr8, Recaddr9, Recaddr10;

	// Test writing
    BufferFile TestOut (Buff);
    // Note that header information is also written
    result = TestOut.Create (myfile, ios::in|ios::out);
    cout << "create file "<<result<<endl;
    if (!result)
    {
        cout << "Unable to create file "<<myfile<<endl;
        return;
    }
    
	A.Pack (TestOut.GetBuffer());
    recaddr1 = TestOut.Write();
	cout << "write at "<<recaddr1<<endl;
    B.Pack(TestOut.GetBuffer());
    recaddr2 = TestOut.Write();
	cout << "write at "<<recaddr2<<endl;
	C.Pack (TestOut.GetBuffer());
	recaddr3 = TestOut.Write();
	cout << "write at "<<recaddr3<<endl;
    D.Pack(TestOut.GetBuffer());
    recaddr4 = TestOut.Write();
    cout << "write at "<<recaddr4<<endl;
    E.Pack(TestOut.GetBuffer());
    recaddr5 = TestOut.Write();
    cout << "write at "<<recaddr5<<endl;
    F.Pack(TestOut.GetBuffer());
    recaddr6 = TestOut.Write();
    cout << "write at "<<recaddr6<<endl;
    G.Pack(TestOut.GetBuffer());
    recaddr7 = TestOut.Write();
    cout << "write at "<<recaddr7<<endl;
    H.Pack(TestOut.GetBuffer());
    recaddr8 = TestOut.Write();
    cout << "write at "<<recaddr8<<endl;
    I.Pack(TestOut.GetBuffer());
    recaddr2 = TestOut.Write();
    cout << "write at "<<recaddr9<<endl;
    J.Pack(TestOut.GetBuffer());
    recaddr2 = TestOut.Write();
    cout << "write at "<<recaddr10<<endl;
    
    a.Pack (TestOut.GetBuffer());
    Recaddr1 = TestOut.Write();
    cout << "write at "<<Recaddr1<<endl;
    b.Pack(TestOut.GetBuffer());
    Recaddr2 = TestOut.Write();
    cout << "write at "<<Recaddr2<<endl;
    c.Pack (TestOut.GetBuffer());
    Recaddr3 = TestOut.Write();
    cout << "write at "<<Recaddr3<<endl;
    d.Pack(TestOut.GetBuffer());
    Recaddr4 = TestOut.Write();
    cout << "write at "<<Recaddr4<<endl;
    e.Pack(TestOut.GetBuffer());
    Recaddr5 = TestOut.Write();
    cout << "write at "<<Recaddr5<<endl;
    f.Pack(TestOut.GetBuffer());
    Recaddr6 = TestOut.Write();
    cout << "write at "<<Recaddr6<<endl;
    g.Pack(TestOut.GetBuffer());
    Recaddr7 = TestOut.Write();
    cout << "write at "<<Recaddr7<<endl;
    h.Pack(TestOut.GetBuffer());
    Recaddr8 = TestOut.Write();
    cout << "write at "<<Recaddr8<<endl;
    i.Pack(TestOut.GetBuffer());
    Recaddr2 = TestOut.Write();
    cout << "write at "<<Recaddr9<<endl;
    j.Pack(TestOut.GetBuffer());
    Recaddr2 = TestOut.Write();
    cout << "write at "<<Recaddr10<<endl;
    
    TestOut.Close ();

	// test reading
    BufferFile TestIn (Buff);
    TestIn.Open (myfile, ios::in);
    
    TestIn.Read(recaddr1);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "First record:");
    TestIn.Read(recaddr2);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print (cout, "Second record:");
    TestIn.Read(recaddr3);
    stu.Unpack (TestIn.GetBuffer());
	stu.Print(cout, "Third record:");
    TestIn.Read(recaddr4);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Fourth record:");
    TestIn.Read(recaddr5);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Fifth record:");
    TestIn.Read(recaddr6);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Sixth record:");
    TestIn.Read(recaddr7);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Seventh record:");
    TestIn.Read(recaddr8);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Eighth record:");
    TestIn.Read(recaddr9);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Nineth record:");
    TestIn.Read(recaddr10);
    stu.Unpack (TestIn.GetBuffer());
    stu.Print(cout, "Tenth record:");
    
    TestIn.Read(Recaddr1);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "First record:");
    TestIn.Read(Recaddr2);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print (cout, "Second record:");
    TestIn.Read(Recaddr3);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Third record:");
    TestIn.Read(Recaddr4);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Fourth record:");
    TestIn.Read(Recaddr5);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Fifth record:");
    TestIn.Read(Recaddr6);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Sixth record:");
    TestIn.Read(Recaddr7);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Seventh record:");
    TestIn.Read(Recaddr8);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Eighth record:");
    TestIn.Read(Recaddr9);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Nineth record:");
    TestIn.Read(Recaddr10);
    cou.Unpack (TestIn.GetBuffer());
    cou.Print(cout, "Tenth record:");
	
    TestIn.Close();

}

void testFixedField ()
{
	cout <<"Testing Fixed Field Buffer"<<endl;
	FixedFieldBuffer Buff (6);
	student :: InitBuffer (Buff);
    coursereg :: InitBuffer (Buff);
	testBufferFile(Buff, "fixlen2.dat");
}


void testLength ()
{
	cout << "\nTesting LengthTextBuffer"<<endl;
	LengthFieldBuffer Buff;
    student :: InitBuffer (Buff);
    coursereg :: InitBuffer (Buff);
	testBufferFile(Buff, "length2.dat");
}


void testDelim ()
{
	cout << "\nTesting DelimTextBuffer"<<endl;
	DelimFieldBuffer::SetDefaultDelim ('|');
	DelimFieldBuffer Buff;
	
    student :: InitBuffer (Buff);
    coursereg :: InitBuffer (Buff);
    testBufferFile(Buff, "delim2.dat");
}

int main(int argc, char ** argv)
{
	InitPerson();
	testFixedField ();
	testLength ();
	testDelim ();
}
