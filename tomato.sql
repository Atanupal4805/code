create database potato;
use potato;
create table hostellers(
sr_no int primary key, name varchar(20),enr varchar(12) unique,room_no int);
insert into hostellers values(1,"atanu","0187CS231061",136);
insert into hostellers values(2,"zoro","0187CS231012",135);
insert into hostellers values(3,"ankit","0187CS231161",133);
insert into hostellers values(4,"shubham","0187CS231261",136);
insert into hostellers values(5,"sagnik","0187CS231361",136);
insert into hostellers values(6,"kattapa","0187CS231461",134);

