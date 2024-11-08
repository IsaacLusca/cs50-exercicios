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


-- Ruth, Eugene, raymond
-- Imagens de segurança do dia é importante
-- Nome de uma rua: Rua Leggett
-- Ladrão quer fugir de avião.


SELECT *
FROM people
WHERE name = 'Ruth' AND name = 'Eugene' AND name = 'Raymond';

