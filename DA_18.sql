use MANAGELIBRARY
drop table STUDENT
drop table BOOK
drop table TYPEBOOK
drop table BORROWRETURN
delete from STUDENT
delete from BOOK
delete from TYPEBOOK
delete from BORRROWRETURN
create table STUDENT
(
	CodeStudent nchar(9) primary key,
	NameStudent nchar(35),
	Faculty nchar(30),
	Class nchar(20),
	PhoneNumber nchar(20)
);
create table TYPEBOOK
(
	CodeType nchar(15) primary key,
	NameType nchar(30),
);
create table BOOK
(
	CodeBook nchar(11) primary key,
	NameBook nchar(40),
	CodeType nchar(15)
	CONSTRAINT B_CodeType
    FOREIGN KEY (CodeType)
    REFERENCES TYPEBOOK(CodeType) 
    ON DELETE CASCADE,
	Author nchar(30),
	OriginQuantity int,
	RemainQuantity int 
);
create table BORROWRETURN
(
	Orders nchar(6) primary key,
	CodeStudent nchar(9)
	CONSTRAINT B_CodeStudent
    FOREIGN KEY (CodeStudent)
    REFERENCES STUDENT(CodeStudent) 
    ON DELETE CASCADE,
	CodeBook nchar(11)
	CONSTRAINT B_CodeBook
    FOREIGN KEY (CodeBook)
    REFERENCES BOOK(CodeBook) 
    ON DELETE CASCADE,
	
	DateBorrow DATE DEFAULT NULL,
	DateReturn DATE DEFAULT NULL,
	Status nchar(15) 
);

insert into STUDENT 
values ('102180233','Nguyen Van Du','Cong nghe thong tin','18TCLC_DT1','0905051213'),
       ('102180156','Nguyen Van Nam','Cong nghe thong tin','18TCLC_DT2','0345222333'),
	   ('101170303','Tran Thanh Tam','Co khi','17CDT2','0122999456'),
	   ('105190206','Do Nhu Van','Dien','19D3','0125206307'),
	   ('107180300','Dinh Cong Tru','Hoa','18H1','0147258369'),
	   ('107190118','Doan Cong Tam','Hoa','18H4','0369852147'),
	   ('103170116','Tran Thu Ha','Co khi giao thong','17CKGT4','0357951258'),
	   ('103190206','Phan Nhu Tam','Co khi giao thong','19CKGT1','0159862347')
	   

insert into TYPEBOOK
values('CT','Chinh Tri'),
      ('TH','Tin Hoc'),
	  ('TN','Truyen Ngan'),
	  ('TT','Tieu Thuyet'),
	  ('LS','Lich Su'),
	  ('KH','Khoa Hoc'),
	  ('KN','Ky Nang')


insert into BOOK
values('CT-001','De men phieu luu ky','TN','To Hoai','5','5'),
      ('TT-001','Chien tranh va hoa binh','TT','Lev Nikolayevich Tolstoy','3','3'),
	  ('LS-001','Lich su viet nam','LS','Vu Duy Men','6','6'),
	  ('KH-001','Nguon goc cac loai','KH','Charles Darwin','9','9'),
	  ('KH-002','Lich su van vat','KH','Bill Bryson','4','4'),
	  ('KH003','Y tuong ve tuong lai','KH','Richard Watson','3','3'),
	  ('LS-002','Tran danh Dien Bien Phu','LS','Nguyen Van Tam','7','7'),
	  ('KH-003','Van vat van hanh','KH','David Macaulay','5','5'),
	  ('TT-002','Lolita','TT','Vladimir Nabokov','7','7'),
	  ('TT-003','Hoang tu be','TT','Exupery','7','7'),
	  ('KN-001','Toi tai gioi ban cung the','KN','Adam Khoo','9','9'),
	  ('KN-002','Ky nang thuyet trinh','KN','Tran Cong Ninh','6','6'),
	  ('KN-003','Lam giau khong kho','KN','Trinh Thu Thuy','4','3'),
	  ('TH-001','Tin hoc dai cuong','TH','Nguyen Van Luc','4','3')

insert into BORROWRETURN
values('000001','102180233','TH-001','2019-10-10',NULL,'Dang muon'),
	  ('000002','107190118','KN-003','2019-12-08',NULL,'Dang muon'),
	  ('000003','103170116','KN-002','2019-10-05','2019-11-03','Da tra'),
	  ('000004','103190206','LS-001','2019-11-11','2019-12-7','Da tra')

delete  from BOOK
delete  from STUDENT
delete  from TYPEBOOK
delete  from BORROWRETURN
