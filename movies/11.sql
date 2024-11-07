SELECT movies.title from movies
JOIN directors ON directors.movie_id = people.id
JOIN people ON people.id = directors.person_id
JOIN ratings ON ratings.movie_id = movies.id
WHERE people.name = 'Chadwick Boseman';
