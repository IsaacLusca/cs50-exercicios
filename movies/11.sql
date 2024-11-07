SELECT movies.title from movies
JOIN directors ON directors.movie_id = movies.id
JOIN people ON people.id = directors.person_id
JOIN ratings ON ratings.movie_id = movies.id
WHERE people.name = 'Chadwick Boseman' ORDER BY ratings.rating DESC LIMIT 5;
