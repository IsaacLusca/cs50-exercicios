-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Check the day july 28, 2023
SELECT description
FROM crime_scene_reports
WHERE year = 2023
    AND month = 7
    AND day = 28;

-- +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- | Vandalism took place at 12:04. No known witnesses.                                                                                                                                                                       |
-- | Shoplifting took place at 03:01. Two people witnessed the event.                                                                                                                                                         |
-- | Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery. |
-- | Money laundering took place at 20:30. No known witnesses.                                                                                                                                                                |
-- | Littering took place at 16:36. No known witnesses.                                                                                                                                                                       |
-- +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

