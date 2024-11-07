
-- JOIN movies ON movies.id = stars.person_id

SELECT name FROM people WHERE id IN (
    SELECT person_id FROM stars WHERE movie_id IN (
        SELECT movie_id FROM stars
        JOIN people ON people.id = stars.person_id
        WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
    )
)
AND name != 'Kevin Bacon';
