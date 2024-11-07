SELECT DISTINCT people.name FROM people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars.person_id
