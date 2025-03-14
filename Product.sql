USE [master]
GO
/****** Object:  Database [Product]    Script Date: 03.03.2025 17:48:11 ******/
CREATE DATABASE [Product]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'Product', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\Product.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'Product_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL16.MSSQLSERVER\MSSQL\DATA\Product_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT, LEDGER = OFF
GO
ALTER DATABASE [Product] SET COMPATIBILITY_LEVEL = 160
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [Product].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [Product] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [Product] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [Product] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [Product] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [Product] SET ARITHABORT OFF 
GO
ALTER DATABASE [Product] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [Product] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [Product] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [Product] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [Product] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [Product] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [Product] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [Product] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [Product] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [Product] SET  DISABLE_BROKER 
GO
ALTER DATABASE [Product] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [Product] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [Product] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [Product] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [Product] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [Product] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [Product] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [Product] SET RECOVERY FULL 
GO
ALTER DATABASE [Product] SET  MULTI_USER 
GO
ALTER DATABASE [Product] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [Product] SET DB_CHAINING OFF 
GO
ALTER DATABASE [Product] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [Product] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [Product] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [Product] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
EXEC sys.sp_db_vardecimal_storage_format N'Product', N'ON'
GO
ALTER DATABASE [Product] SET QUERY_STORE = ON
GO
ALTER DATABASE [Product] SET QUERY_STORE (OPERATION_MODE = READ_WRITE, CLEANUP_POLICY = (STALE_QUERY_THRESHOLD_DAYS = 30), DATA_FLUSH_INTERVAL_SECONDS = 900, INTERVAL_LENGTH_MINUTES = 60, MAX_STORAGE_SIZE_MB = 1000, QUERY_CAPTURE_MODE = AUTO, SIZE_BASED_CLEANUP_MODE = AUTO, MAX_PLANS_PER_QUERY = 200, WAIT_STATS_CAPTURE_MODE = ON)
GO
USE [Product]
GO
/****** Object:  Table [dbo].[Product]    Script Date: 03.03.2025 17:48:11 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Product](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[name] [nvarchar](50) NULL,
	[category] [nvarchar](50) NULL,
	[price] [float] NULL,
	[discount] [float] NULL,
	[quantity] [int] NULL,
	[measurement] [nvarchar](50) NULL,
	[producer] [nvarchar](50) NULL,
	[country] [nvarchar](50) NULL,
	[supplier] [nvarchar](50) NULL,
	[date_of_delivery] [date] NULL,
	[expire_date] [date] NULL,
 CONSTRAINT [PK_Product] PRIMARY KEY CLUSTERED 
(
	[id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[Product] ON 

INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (1, N'Гречка фас. 1кг.', N'Крупи та зернові.', 31.9, 0, 24, N'уп.', N'Trapeza', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-10-12' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (2, N'Пшоно фас. 1кг.', N'Крупи та зернові', 21.5, 0, 12, N'уп.', N'Розумний вибір', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-09-08' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (3, N'Манна крупа фас. 900г.', N'Крупи та зернові', 23.9, 0, 10, N'уп.', N'Розумний вибір', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-06-13' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (4, N'Рис довгий фас. 1кг.', N'Крупи та зернові', 49.5, 0, 28, N'уп.', N'Розумний вибір', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-12-31' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (5, N'Рис круглий фас. 1кг.', N'Крупи та зернові', 75.4, 4.2, 22, N'уп.', N'De Luxe', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-11-16' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (6, N'Рис '''' Basmati" фас. 500г.', N'Крупи та зернові', 62.8, 9, 10, N'уп.', N'Shah Bobur', N'Indian', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-10-28' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (7, N'Рис ''''Basmati" фас. 5кг.', N'Крупи та зернові', 510.8, 56.2, 8, N'м.', N'Shah Bobur', N'Indian', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-12-26' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (8, N'Крупа ''''Артек'''' фас. 1кг.', N'Крупи та зернові', 32.5, 0, 18, N'уп.', N'Аттуаль', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-12-23' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (9, N'Крупа ''''Ячна'''' фас. 900г.', N'Крупи та зернові', 17.9, 1.1, 16, N'уп.', N'Розумний вибір', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-08-19' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (10, N'Крупа ''''Булгур'''' крупний фас. 500г.', N'Крупи та зернові', 29.9, 4.4, 20, N'уп.', N'Trapeza', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-11-25' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (11, N'Крупа ''''Булгур'''' серед. фас. 500г', N'Крупи та зернові', 32.1, 2.2, 20, N'уп.', N'Trapeza', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-11-25' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (12, N'Крупа вівсяна пластівці фас. 500г.', N'Крупи та зернові', 31.9, 4.6, 16, N'уп.', N'Trapeza', N'Ukraine', N'X-Trans', CAST(N'2025-02-27' AS Date), CAST(N'2025-06-13' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (13, N'Молоко пак. 450г.', N'Молочна та кисломолочна продукція.', 18.4, 1, 48, N'шт.', N'Щоденний збір', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-08' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (14, N'Молоко пак. 900г.', N'Молочна та кисломолочна продукція', 42.5, 4, 44, N'шт.', N'Молокія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-07' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (15, N'Молоко бут. 900г.', N'Молочна та кисломолочна продукція', 41.9, 4.5, 30, N'шт.', N'Яготинське', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-15' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (16, N'Кефір 1% пак. 450г.', N'Молочна та кисломолочна продукція', 19.7, 0.8, 20, N'шт.', N'Молокія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-13' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (17, N' Кефір 1% пак. 900г.', N'Молочна та кисломолочна продукція', 34.3, 5.2, 24, N'шт.', N'Молокія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-19' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (18, N'Кефір 1% бут. 900г.', N'Молочна та кисломолочна продукція', 51.7, 0, 28, N'шт.', N'Галичина', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-22' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (19, N'Кефір 2.5% пак. 400г.', N'Молочна та кисломолочна продукція', 23.5, 3.2, 32, N'шт.', N'Малокія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-17' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (20, N'Кефір 2.5% пак. 800г.', N'Молочна та кисломолочна продукція', 52.5, 0, 28, N'шт.', N'Малокія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-24' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (21, N'Кефір 2.5% бут. 900г.', N'Молочна та кисломолочна продукція', 61.8, 3.1, 30, N'шт.', N'Галичина', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-27' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (22, N'Йогурт фрукт. пак. 400г.', N'Молочна та кисломолочна продукція', 21.3, 3.1, 12, N'шт.', N'Своя лінія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-28' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (23, N'Йогурт фрукт. пл.\ст. 290г.', N'Молочна та кисломолочна продукція', 33.8, 4.9, 10, N'шт.', N'Своя лінія', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-25' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (24, N'Йогурт фрукт. бут. 250г', N'Молочна та кисломолочна продукція', 21.9, 8.7, 15, N'шт.', N'Danone', N'Ukraine', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-03-29' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (25, N'Йогурт фрукт. бут. 520г.', N'Молочна та кисломолочна продукція', 47.8, 6.9, 8, N'шт.', N'Danone', N'Ukraine', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-03-29' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (26, N'Сметана 15% пак. 200г.', N'Молочна та кисломолочна продукція', 26.7, 4.2, 31, N'шт.', N'Злагода', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-14' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (27, N'Сметана 15% пак. 400г.', N'Молочна та кисломолочна продукція', 54.7, 3.8, 22, N'шт.', N'Злагода', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-12' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (28, N'Сметана 15% пл.\ст. 300г.', N'Молочна та кисломолочна продукція', 52.8, 0, 14, N'шт.', N'Яготинська', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-15' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (29, N'Сметана 20% пак. 200г.', N'Молочна та кисломолочна продукція', 28.6, 2.1, 26, N'шт.', N'Злагода', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-13' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (30, N'Сметана 20% пак. 400г.', N'Молочна та кисломолочна продукція', 58.2, 0, 28, N'шт.', N'Злагода', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-15' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (31, N'Сметана 20% пл.\ст. 300г.', N'Молочна та кисломолочна продукція', 57.8, 3.1, 12, N'шт.', N'Яготинська', N'Ukraine', N'FROZENFOOD', CAST(N'2025-03-01' AS Date), CAST(N'2025-03-16' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (32, N'Пиво ''''FAXE" premium світле ж\б 1уп.\4шт. 0.5', N'Слабоалкогольні напої', 56, 4, 6, N'уп.', N'Faxe', N'Lietuva', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-07-24' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (33, N'Пиво ''''FAXE" світле ж\б 1уп.\4шт. 0.5', N'Слабоалкогольні напої', 32.8, 6.8, 24, N'уп.', N'Faxe', N'Lietuva', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-08-15' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (34, N'Пиво ''''Budweiser Budvar" світле скло 1уп.\6шт 0.5', N'Слабоалкогольні напої', 46.8, 4.5, 6, N'уп.', N'Budweiser', N'Czechia', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-06-29' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (35, N'Пиво ''''Budweiser Budvar" світле ж\б 1уп.\6шт. 0.5', N'Слабоалкогольні напої', 44.5, 3.2, 5, N'уп.', N'Budweiser', N'Czechia', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-08-23' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (36, N'Пиво ''''Staropramen" світле скло 1уп.\6шт. 0.5', N'Слабоалкогольні напої', 38.4, 2.7, 12, N'уп', N'Pivovary Staropramen s.r.o.', N'Czechia', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-09-12' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (37, N'Пиво ''''Staropramen" світле ж\б 1уп.\4шт. 0.5', N'Слабоалкогольні напої', 32.5, 8.25, 30, N'уп.', N'Pivovary Staropramen s.r.o.', N'Czechia', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-05-14' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (38, N'Пиво ''''Bud" світле скло 1уп.\6шт. 0.5', N'Слабоалкогольні напої', 33, 4.8, 10, N'уп.', N'Anheuser-Busch InBev', N'USA', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-05-23' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (39, N'Пиво ''''Bud" світле скло1уп.\6шт. 0.75', N'Слабоалкогольні напої', 46.3, 5.6, 8, N'уп.', N'Anheuser-Busch InBev', N'USA', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-07-17' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (40, N'Пиво ''''Bud" світле ж\б 1уп.\12шт. 0.33', N'Слабоалкогольні напої', 24.2, 2.3, 3, N'уп.', N'Anheuser-Busch InBev', N'USA', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-09-01' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (41, N'Пиво ''''Bud" світле ж\б 1уп.\4шт. 0.5', N'Слабоалкогольні напої', 35.6, 1.8, 12, N'уп.', N'Anheuser-Busch InBev', N'USA', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-08-04' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (42, N'"Coca-cola" ж\б 0.25', N'Вода та напої', 19.8, 2.8, 38, N'ж\б', N'The Coca-Cola Company', N'USA', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-06-01' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (43, N'"Coca-cola" б\ц ж\б 0.25', N'Вода та напої', 19.8, 2.8, 12, N'ж\б', N'The Coca-Cola Company', N'USA', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-07-18' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (44, N'"Fanta" orange ж\б 0.25', N'Вода та напої', 21.6, 0.8, 18, N'ж\б', N'The Coca-Cola Company', N'USA', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-05-24' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (45, N'"Fanta" mandarin ж\б 0.25', N'Вода та напої', 21.6, 0.8, 16, N'ж\б', N'The Coca-Cola Company', N'USA', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-05-25' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (46, N'Вода ''''Моршинська'''' 6\1пак газ 1.5', N'Вода та напої', 23.8, 1.4, 24, N'пак.', N'IDS Ukraine', N'Ukraine', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-06-28' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (47, N'Вода ''''Моршинська'''' с\г. 6\1пак. 1.5', N'Вода та напої', 23.8, 1.4, 24, N'пак.', N'IDS Ukraine', N'Ukraine', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-06-17' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (48, N'Вода ''''Моршинська'''' б\г 6\1пак. 1.5', N'Вода та напої', 23.8, 1.4, 28, N'пак.', N'IDS Ukraine', N'Ukraine', N'Kompass', CAST(N'2025-02-22' AS Date), CAST(N'2025-05-28' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (49, N'Шок. ''''Корона'''' мол. 90г', N'Кондитерські вироби', 51.5, 1.2, 28, N'шт.', N'Mondelez International', N'Ukraine', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-04-12' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (50, N'Шок. ''''Корона'''' чорн. 90г.', N'Кондитерські вироби', 58, 2.4, 40, N'шт.', N'Mondelez International', N'Ukraine', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-06-17' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (51, N'Шок. ''''Світоч'''' мол. 90г.', N'Кондитерські вироби', 37.6, 2.2, 25, N'шт.', N'пат ''''Світоч''''', N'Ukraine', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-07-05' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (52, N'Шок. ''''Світоч'''' чорн. 90г.', N'Кондитерські вироби', 39.9, 3.4, 32, N'шт.', N'пат ''''Світоч''''', N'Ukraine', N'Attica', CAST(N'2025-02-20' AS Date), CAST(N'2025-10-03' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (53, N'Шок. ''''Schogetten" чорн. 100г', N'Кондитерські вироби', 68, 3.8, 18, N'шт.', N'Trumpf', N'Deutschland', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-09-18' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (54, N'Шок. ''''Schogetten" мол. 100г', N'Кондитерські вироби', 57, 2.7, 23, N'шт.', N'Trumpf', N'Deutschland', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-07-23' AS Date))
INSERT [dbo].[Product] ([id], [name], [category], [price], [discount], [quantity], [measurement], [producer], [country], [supplier], [date_of_delivery], [expire_date]) VALUES (55, N'Шок. ''''Schogetten" пор. 100г', N'Кондитерські вироби', 58.2, 4.5, 17, N'шт.', N'Trumpf', N'Deutschland', N'Транс Стар', CAST(N'2025-02-15' AS Date), CAST(N'2025-10-14' AS Date))
SET IDENTITY_INSERT [dbo].[Product] OFF
GO
USE [master]
GO
ALTER DATABASE [Product] SET  READ_WRITE 
GO
