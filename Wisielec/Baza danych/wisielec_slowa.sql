-- MySQL dump 10.13  Distrib 5.7.17, for Win64 (x86_64)
--
-- Host: localhost    Database: wisielec
-- ------------------------------------------------------
-- Server version	5.7.21-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `slowa`
--

DROP TABLE IF EXISTS `slowa`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `slowa` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `proste` varchar(50) COLLATE ucs2_polish_ci NOT NULL,
  `podp_p` varchar(100) COLLATE ucs2_polish_ci NOT NULL,
  `dostep` tinyint(4) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `id_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=86 DEFAULT CHARSET=ucs2 COLLATE=ucs2_polish_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `slowa`
--

LOCK TABLES `slowa` WRITE;
/*!40000 ALTER TABLE `slowa` DISABLE KEYS */;
INSERT INTO `slowa` VALUES (1,'ogień','woda i...',1),(2,'ćma','owad',1),(3,'zęby','w buzi...',1),(4,'nutella','lepsze masło',1),(5,'ogórek','warzywo',1),(6,'papryka','warzywo',1),(7,'gruszka','owoc',1),(8,'mikołaj','wierzą w niego dzieci',1),(9,'portugalia','kraj',1),(10,'niemcy','kraj',1),(11,'paprotka','roślina',1),(12,'hiszpański','język',1),(13,'piwo','alkohol',1),(14,'wódka','alkohol',1),(15,'wiewiórka','zwierzę',1),(16,'mrówka','zwierzę',1),(17,'klon','drzewo',1),(18,'dąb','drzewo',1),(19,'sosna','drzewo',1),(20,'zachód','kierunek',1),(21,'wschód','kierunek',1),(22,'północ','kierunek',1),(23,'południe','kierunek',1),(24,'afryka','kontynent',1),(25,'ocean','dużo wody...',1),(26,'uśmiech',':)',1),(27,'smutek',':(',1),(28,'grypa','chroroba',1),(29,'król','średniowieczny władca',1),(30,'fifa','gra piłkarksa',1),(31,'uncharted','gra na playstation',1),(32,'marchewka','warzywa',1),(33,'burak','warzywo',1),(34,'cukinia','warzywo',1),(35,'motor','środek transportu',1),(36,'pociąg','środek transportu',1),(37,'sowa','zwierze',1),(38,'pchła','zwierze',1),(39,'hades','bogowie',1),(40,'zeus','bogowie',1),(41,'demeter','bogowie',1),(42,'posejdon','boowie',1),(43,'windows','system operacyjny',1),(44,'myszka','do klikania',1),(45,'powietrze','jest dookoła',1),(46,'zegar','czas',1),(47,'do ozdoby','naszyjnik',1),(48,'warcaby','gra planszowa',1),(49,'szachy','gra planszowa',1),(50,'matematyka','dziedzina nauki',1),(51,'dodawanie','1+5',1),(52,'trawa','na ziemii',1),(53,'merkury','planeta',1),(54,'wenus','planeta',1),(55,'ziemia','planeta',1),(56,'mars','planeta',1),(57,'jowisz','planeta',1),(58,'saturn','planeta',1),(59,'uran','planeta',1),(60,'neptun','planeta',1),(61,'lampka','daje światło',1),(62,'majdan','rozenek i ...',1),(63,'sałata','warzywo',1),(64,'alfabet','z liter',1),(65,'szafa','zbudowana z drewna',1),(66,'brzoskwinia','owoc',1),(67,'banan','owoc',1),(68,'bocian','kle kle',1),(69,'denstysta','zawód',1),(70,'stomatolog','zawód',1),(71,'kawa','napój',1),(72,'herbata','napój',1),(73,'latawiec','unosi się w powietrzu',1),(74,'sernik','ciasto',1),(75,'karpatka','ciasto',1),(76,'makowiec','ciasto',1),(77,'pieprz','przyprawa',1),(78,'sól','przyprawa',1),(79,'horror','gatunek filmowy',1),(80,'internet','w telefonie',1),(81,'wifi','łączność',1),(82,'wino','alkohol',1),(83,'brukselka','warzywo',1),(84,'winda','w blokach',1),(85,'dziewięć','3*3-3+3',1);
/*!40000 ALTER TABLE `slowa` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2018-07-14 22:41:01
