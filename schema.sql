-- Database schema for checkinadmin
-- Run in MySQL/MariaDB before first start:
--   mysql -u<user> -p checkinadmin < schema.sql

CREATE DATABASE IF NOT EXISTS `checkinadmin` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
USE `checkinadmin`;

CREATE TABLE IF NOT EXISTS `users` (
  `user_id` INT NOT NULL,
  `first_name` VARCHAR(50) NOT NULL DEFAULT '',
  `last_name` VARCHAR(50) NOT NULL DEFAULT '',
  PRIMARY KEY (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

CREATE TABLE IF NOT EXISTS `items` (
  `serial` VARCHAR(50) NOT NULL,
  `item_type` VARCHAR(50) NOT NULL DEFAULT '',
  `brand` VARCHAR(50) NOT NULL DEFAULT '',
  `model` VARCHAR(50) NOT NULL DEFAULT '',
  `checked_out` INT NOT NULL DEFAULT 0,
  `user_id` INT DEFAULT NULL,
  PRIMARY KEY (`serial`),
  KEY `idx_user_id` (`user_id`),
  CONSTRAINT `fk_items_users` FOREIGN KEY (`user_id`) REFERENCES `users` (`user_id`) ON DELETE SET NULL ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

CREATE TABLE IF NOT EXISTS `events` (
  `description` VARCHAR(50) NOT NULL DEFAULT '',
  `timestamp` VARCHAR(25) NOT NULL DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;
