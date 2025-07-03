create database litshelf;
show databases;
use litshelf;
create table books(book_id int not null auto_increment,title varchar(100) not null,genre varchar(50) not null,primary key(book_id));
describe books;
alter table books add price varchar(100) not null;
insert into books(title,genre,price)values("the great gatsby","fiction",15.99),("python programming","tech",45.50),("pride and prejudice","fiction",12.99),("data science for begginners","tech",39.99),("the hobbit","fantasy",18.50),("1984","fiction",14.99);
select *from books;
insert into books(title,genre,price)values("the catcher in the rye","fiction",3.99);
select*from books;
update books set price =49.99 where book_id=2;
select *from books;
select *from books where genre="fiction";
select distinct title from books;
select *from books where genre="fiction"or price=13.99;
select *from books where price between 10.00 and 20.00;
select *from books order by title asc;
select *from books order by title desc;
select max(price) from books;
select min(price) from books;
select count(*) from books where price>20.00;
select sum(price) from books;
select avg(price) from books;
select genre,count(*) as number_of_books from books group by genre having count(*)>1;





