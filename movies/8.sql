SELECT people.name FROM people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE movies.title = 'Toy Story';

-- SELECT name FROM people WHERE id IN(
--     SELECT person_id FROM stars WHERE movie_id = (
--         SELECT id FROM movies WHERE title = 'Toy Story'
--     )
-- );
