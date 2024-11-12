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

SELECT *
FROM interviews
WHERE year = 2023
    AND month = 7
    AND day = 28;

-- -------------------------------------------------------------------------------------------------------------------------------------------+
-- | 158 | Jose    | 2023 | 7     | 28  | “Ah,” disse ele, “eu esqueci que não o vi por algumas semanas. É uma pequena lembrança do Rei da Boêmia em troca da minha assistência no caso dos papéis de Irene Adler.”                                                                                                                               |
-- | 159 | Eugene  | 2023 | 7     | 28  | “Suponho,” disse Holmes, “que quando o Sr. Windibank voltou da França, ele ficou muito irritado por você ter ido ao baile.”                                                                                                                                                                                      |
-- | 160 | Barbara | 2023 | 7     | 28  | “Você recebeu minha nota?” ele perguntou com uma voz profunda e áspera e um forte sotaque alemão. “Eu disse que ligaria.” Ele olhou de um para o outro de nós, como se não soubesse para quem se dirigir.                                                                                                                   |
-- | 161 | Ruth    | 2023 | 7     | 28  | Algum tempo dentro de dez minutos do roubo, eu vi o ladrão entrar em um carro no estacionamento da padaria e sair dirigindo. Se você tiver imagens de segurança do estacionamento da padaria, pode querer verificar carros que saíram do estacionamento nesse período.                                                          |
-- | 162 | Eugene  | 2023 | 7     | 28  | Não sei o nome do ladrão, mas era alguém que eu reconheci. Mais cedo nesta manhã, antes de eu chegar à padaria da Emma, ​​eu estava passando pelo caixa eletrônico na Rua Leggett e vi o ladrão lá retirando algum dinheiro.                                                                                                 |
-- | 163 | Raymond | 2023 | 7     | 28  | Quando o ladrão estava saindo da padaria, ele ligou para alguém e conversou por menos de um minuto. Na ligação, ouvi o ladrão dizer que planejava pegar o voo mais cedo para fora de Fiftyville amanhã. O ladrão então pediu à pessoa do outro lado da linha para comprar a passagem de voo. |
-- | 191 | Lily    | 2023 | 7     | 28  | Nosso tribunal vizinho tem um galo muito irritante que canta alto às 6h todos os dias. Meus filhos Robert e Patrick levaram o galo para uma cidade muito, muito longe, para que ele nunca mais nos incomode. Meus filhos chegaram com sucesso a Paris.

-- +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- |                                                                                                                                                     transcript                                                                                                                                                      |
-- +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- | “Ah,” said he, “I forgot that I had not seen you for some weeks. It is a little souvenir from the King of Bohemia in return for my assistance in the case of the Irene Adler papers.”                                                                                                                               |
-- | “I suppose,” said Holmes, “that when Mr. Windibank came back from France he was very annoyed at your having gone to the ball.”                                                                                                                                                                                      |
-- | “You had my note?” he asked with a deep harsh voice and a strongly marked German accent. “I told you that I would call.” He looked from one to the other of us, as if uncertain which to address.                                                                                                                   |
-- | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
-- | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.                                                                                                 |
-- | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket. |
-- | Our neighboring courthouse has a very annoying rooster that crows loudly at 6am every day. My sons Robert and Patrick took the rooster to a city far, far away, so it may never bother us again. My sons have successfully arrived in Paris.                                                                        |
-- +---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+



-- Ruth, Eugene, raymond
-- Imagens de segurança do dia é importante
-- Nome de uma rua: Rua Leggett
-- Ladrão quer fugir de avião.


SELECT *
FROM people
WHERE name = 'Ruth' OR name = 'Eugene' OR name = 'Raymond';

-- +--------+---------+----------------+-----------------+---------------+
-- |   id   |  name   |  phone_number  | passport_number | license_plate |
-- +--------+---------+----------------+-----------------+---------------+
-- | 280744 | Eugene  | (666) 555-5774 | 9584465633      | 47592FJ       |
-- | 430845 | Ruth    | (772) 555-5770 | NULL            | HZB4129       |
-- | 937274 | Raymond | (125) 555-8030 | NULL            | Y18DLY3       |
-- +--------+---------+----------------+-----------------+---------------+

SELECT name, transcript
FROM interviews
WHERE name = 'Ruth'
    OR name = 'Eugene'
    OR name = 'Raymond';

-- +---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- | Raymond | “Good-night, Mister Sherlock Holmes.”                                                                                                                                                                                                                                                                               |
-- | Ruth    | “I will get her to show me.”                                                                                                                                                                                                                                                                                        |
-- | Eugene  | “I suppose,” said Holmes, “that when Mr. Windibank came back from France he was very annoyed at your having gone to the ball.”                                                                                                                                                                                      |
-- | Ruth    | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
-- | Eugene  | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.                                                                                                 |
-- | Raymond | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket. |
-- +---------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

SELECT id, account_number, amount
FROM atm_transactions
WHERE year = 2023
    AND month = 7
    AND day = 28
    AND atm_location = 'Leggett Street'
    AND transaction_type  = 'withdraw';

-- +-----+----------------+--------+
-- | id  | account_number | amount |
-- +-----+----------------+--------+
-- | 246 | 28500762       | 48     |
-- | 264 | 28296815       | 20     |
-- | 266 | 76054385       | 60     |
-- | 267 | 49610011       | 50     |
-- | 269 | 16153065       | 80     |
-- | 288 | 25506511       | 20     |
-- | 313 | 81061156       | 30     |
-- | 336 | 26013199       | 35     |
-- +-----+----------------+--------+


-- precisarei fazer um join entre people, bank_account e os account_number. Terei a lista de suspeitos.

SELECT people.name, atm_transactions.account_number, atm_transactions.amount
    FROM people
    JOIN bank_accounts
        ON bank_accounts.person_id = people.id
    JOIN atm_transactions
        ON atm_transactions.account_number = bank_accounts.account_number
WHERE atm_transactions.year = 2023
    AND atm_transactions.month = 7
    AND atm_transactions.day = 28
    AND atm_transactions.atm_location = 'Leggett Street'
    AND atm_transactions.transaction_type  = 'withdraw';

-- +---------+----------------+--------+
-- |  name   | account_number | amount |
-- +---------+----------------+--------+
-- | Bruce   | 49610011       | 50     |
-- | Diana   | 26013199       | 35     |
-- | Brooke  | 16153065       | 80     |
-- | Kenny   | 28296815       | 20     |
-- | Iman    | 25506511       | 20     |
-- | Luca    | 28500762       | 48     |
-- | Taylor  | 76054385       | 60     |
-- | Benista | 81061156       | 30     |
-- +---------+----------------+--------+

-- Checando se testemunharam

SELECT name, transcript
FROM interviews
WHERE name = 'Bruce'
    OR name = 'Diana'
    OR name = 'Brooke'
    OR name = 'Kenny'
    OR name = 'Iman'
    OR name = 'Luca'
    OR name = 'Taylor'
    OR name = 'Benista';


-- | name  |                                                                                                                                                                                                           transcript                                                                                                                                                                                                            |
-- +-------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
-- | Diana | “He can’t lie in the street. May we bring him in, marm?”                                                                                                                                                                                                                                                                                                                                                                        |
-- | Bruce | “We are close there now,” my friend remarked. “This fellow Merryweather is a bank director, and personally interested in the matter. I thought it as well to have Jones with us also. He is not a bad fellow, though an absolute imbecile in his profession. He has one positive virtue. He is as brave as a bulldog and as tenacious as a lobster if he gets his claws upon anyone. Here we are, and they are waiting for us.” |
-- +-------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

-- Quais tem passaport?

SELECT *
FROM people
WHERE name = 'Bruce'
    OR name = 'Diana'
    OR name = 'Brooke'
    OR name = 'Kenny'
    OR name = 'Iman'
    OR name = 'Luca'
    OR name = 'Taylor'
    OR name = 'Benista';

-- +--------+---------+----------------+-----------------+---------------+
-- |   id   |  name   |  phone_number  | passport_number | license_plate |
-- +--------+---------+----------------+-----------------+---------------+
-- | 395717 | Kenny   | (826) 555-1652 | 9878712108      | 30G67EN       |
-- | 396669 | Iman    | (829) 555-5269 | 7049073643      | L93JTIZ       |
-- | 438727 | Benista | (338) 555-6650 | 9586786673      | 8X428L0       |
-- | 449774 | Taylor  | (286) 555-6063 | 1988161715      | 1106N58       |
-- | 458378 | Brooke  | (122) 555-4581 | 4408372428      | QX4YZN3       |
-- | 467400 | Luca    | (389) 555-5198 | 8496433585      | 4328GD8       |
-- | 514354 | Diana   | (770) 555-1861 | 3592750733      | 322W7JE       |
-- | 686048 | Bruce   | (367) 555-5533 | 5773159633      | 94KL13X       |
-- +--------+---------+----------------+-----------------+---------------+
