
-- this is an example of a data base with constraints inside the table created:

CREATE TABLE awards(
    id INTEGER PRIMARY KEY,
    recipient TEXT NOT NULL,
    award_name TEXT DEFAULT 'Oscar'
);

INSERT INTO awards
VALUES (1, 'Eddie Einsenberg', 'Best Actor');

INSERT INTO awards
VALUES (2, 'Andrew Garfield', 'Best Support Actor');

INSERT INTO awards
VALUES (3, 'Justin Timeberlake', 'Oscar');

ALTER TABLE awards
ADD COLUMN character_name TEXT;

UPDATE awards
SET character_name = 'Mark Zucherberg'
WHERE id = 1;

UPDATE awards
SET character_name = 'Eduardo Saverin'
WHERE id = 2;

UPDATE awards
SET character_name = 'Sean Parker'
WHERE id = 3;

SELECT * FROM awards;

DELETE FROM awards
WHERE character_name IS NULL;              --delete rows that have NULL value in character_name.
