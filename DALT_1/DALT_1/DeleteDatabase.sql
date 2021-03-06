/*USE master
-- Disable all referential integrity constraints
EXEC sp_MSforeachtable 'ALTER TABLE ? NOCHECK CONSTRAINT ALL'
GO
-- Drop all PKs and FKs
declare @sql nvarchar(max)
SELECT @sql = STUFF((SELECT '; ' + 'ALTER TABLE ' + Table_Name  +'  drop constraint ' + Constraint_Name  from Information_Schema.CONSTRAINT_TABLE_USAGE ORDER BY Constraint_Name FOR XML PATH('')),1,1,'')
EXECUTE (@sql)
GO
-- Drop all tables
EXEC sp_MSforeachtable 'DROP TABLE ?'
GO
if  exists(select * from sys.databases where name = 'MANAGELIBRARY')
    drop database MANAGELIBRARY*/
   if  exists(select * from sys.databases where name = 'MANAGELIBRARY')
EXEC msdb.dbo.sp_delete_database_backuphistory @database_name = N'MANAGELIBRARY'
GO
use [MANAGELIBRARY];
GO
use [master];
GO
USE [master]
GO
ALTER DATABASE [MANAGELIBRARY] SET  SINGLE_USER WITH ROLLBACK IMMEDIATE
GO
USE [master]
GO
/****** Object:  Database [MANAGELIBRARY]    Script Date: 12/31/2019 12:04:45 PM ******/
DROP DATABASE [MANAGELIBRARY]
GO
