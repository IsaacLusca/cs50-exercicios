SELECT title, ratings.rating FROM movies
JOIN ratings ON movies.id = ratings.movie_id
WHERE movies.year = 2010 ORDER BY ratings.rating;

-- SELECT title,
--     (SELECT rating FROM ratings WHERE ratings.movie_id = movies.id) AS rating
-- FROM movies WHERE movies.year = 2010 ORDER BY ratings.rating DESC;
