if not exists(select * from sys.databases where name = 'MANAGELIBRARY')
    create database MANAGELIBRARY