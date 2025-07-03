create database dd;
show databases;
 use dd;
create table student(student_id int not null auto_increment,student_name varchar(100) not null,age int not null,place varchar(100),primary key(student_id));
describe student;
insert into student(student_name,age,place) values("akhil",20,"trivandrum"),("manju",18,"ernakulam"),("shareef",13,"palakad"),("praveen",32,"thrissur"),("john",20,"trivandrum"),("akhil",18,"ernakulam"),("aneesh",14,"kottayam"),("lakshmi",20,"kozhikode"),("cyril",12,"ernakulam"),("santosh",28,"malapuram");
select *from student;  
alter table student add course varchar(100)not null;
select *from student;
update student set course="bsc cs" where student_id=1;
update student set course="bsc cs" where student_id=2;
update student set course="bca" where student_id=3;
update student set course="bsc maths" where student_id=4;
update student set course="zoology" where student_id=5;
update student set course="botany" where student_id=6;
update student set course="ba english" where student_id=7;
update student set course="hindi" where student_id=8;
update student set course="bsc physics" where student_id=9;
update student set course="bsc cs" where student_id=10;
select *from student;
alter table student change column place address varchar(100) not null;
select *from student; 
select student_name from student;
update student set student_name="sandra"where student_id=1;
select *from student;
select *from student where address="ernakulam";
select *from student where address="ernakulam" or age<18;
select distinct student_name from student;
select distinct address from student;
select *from student order by student_name asc;
select *from student order by student_name desc;
select count(*) from student where address="ernakulam";



 