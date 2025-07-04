-- SELECT DISTINCT people.name FROM people
-- JOIN stars ON stars.person_id = people.id
-- JOIN movies ON movies.id = stars.movie_id
-- WHERE movies.id IN (
--     SELECT movies.id FROM movies
--     JOIN stars ON stars.movie_id = movies.id
--     JOIN people ON people.id = stars.person_id
--     WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
-- ) AND people.name != 'Kevin Bacon';


SELECT name FROM people WHERE id IN (
    SELECT person_id FROM stars WHERE movie_id IN (
        SELECT movie_id FROM stars
        JOIN people ON people.id = stars.person_id
        WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
    )
)
AND name != 'Kevin Bacon';
