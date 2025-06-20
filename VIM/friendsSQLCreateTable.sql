CREATE TABLE friends(
    id INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    birthday DATE
);

INSERT INTO friends
VALUES (1, 'Orore Monroe', '1940-05-30');

INSERT INTO friends
VALUES (2, 'Rodrigo Casio', '1999-09-07');

INSERT INTO friends
VALUES (3, 'Chris Martin', '1977-03-02');

INSERT INTO friends
VALUES (4, 'Leonhard Euler', '1707-04-17');

INSERT INTO friends
VALUES (5, 'Richard Feyman', '1918-05-11');

ALTER TABLE friends
ADD COLUMN email TEXT DEFAULT NULL;

UPDATE friends
SET email = 'orore.Monroe@outlook.com'
WHERE id = 1;

UPDATE friends
SET email = 'rod.casio@outlook.com'
WHERE id = 2;

UPDATE friends
SET email = 'chrisMArtin@gmail.com'
WHERE id = 3;

UPDATE friends
SET email = 'leoHardEuler@gmail.com'
WHERE id = 4;

UPDATE friends
SET email = 'richardFEINman@gmail.com'
WHERE id = 5;

DELETE FROM friends
WHERE id = 1; 

--updating id COLUMN after deleting row 1

UPDATE friends
SET id = 1
WHERE name = 'Rodrigo Casio';

UPDATE friends
SET id = 2
WHERE name = 'Chris Martin';

UPDATE friends
SET id = 3 
WHERE name = 'Leonhard Euler';

UPDATE friends
SET id = 4
WHERE name = 'Richard Feyman';


SELECT *
FROM friends
