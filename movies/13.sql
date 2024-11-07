SELECT name FROM people WHERE id IN (
    SELECT person_id FROM stars WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
);
-- JOIN movies ON movies.id = stars.person_id
