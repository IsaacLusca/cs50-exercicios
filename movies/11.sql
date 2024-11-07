SELECT movies.title from movies
JOIN directors ON directors.person_id = people.id
JOIN movies ON movies.id = directors.movie_id
JOIN ratings ON ratings.movie_id = movies.id
WHERE people.name = 'Chadwick Boseman' ORDER BY ratings.rating DESC;
