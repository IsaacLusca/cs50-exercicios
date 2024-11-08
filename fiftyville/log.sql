-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Check the day july 28, 2023
SELECT description
FROM crime_scene_reports
WHERE year = 2023
    AND month = 7
    AND day = 28
    AND street = 'Humphrey Street';

-- +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- |                                                                                                       description                                                                                                        |
-- +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- | Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery. |
-- | Littering took place at 16:36. No known witnesses.                                                                                                                                                                       |
-- +--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

-- checando testemunhas

SELECT *
FROM atm_transactions
WHERE atm_location = 'Humphrey bakery';
