
--creating a table:
CREATE TABLE celebs(            --CREATE (clause)
    id INTEGER,
    name TEXT,
    age, INTEGER
);

                            --inserting records into this table celebs

INSERT INTO celebs (id, name, age)          --INSERT (clause)
VALUES (1, 'Justin Bieber', 29);

INSERT INTO celebs(id, name, age)
VALUES (2, 'Beyonce Knowels', 42);

INSERT INTO celebs(id, name, age)
VALUES (3, 'Jeremy Lin', 35);

INSERT INTO celebs(id, name, age)
VALUES (4, 'Taylor Swift' 33);

                            -- to retrieve the names of the celebs table:
                            -- SELECT indicates the statement is a query.
                            -- Here we are using SELECT everytime you query data from a database.
SELECT name FROM celebs;

                            -- query all the columns in the table with *
SELECT * FROM celebs;       -- SELECT statement alwasy return a new table called the result test.



ALTER TABLE celebs          --ALTER(clause).. TABLE ADD COLUMN. to add a new column ADD COLUMN twitter_handle TEXT;        --with name of the attribute (twitter_handle) and type of data (TEXT)
ADD COLUMN twitter_handle TEXT;



UPDATE celebs                           
SET twitter_handle = '@tayloswift13'            --UPDATE SET (clause) edits a row in the table
WHERE id = 4;



DELETE FROM celebs              --delets full rows where they have NULL in twitter_handle column (attribute)
WHERE twitter_handle IS NULL;


