import pg from "pg";
const Client = pg.Client;
const clientDB = new Client({
  connectionString:
    "postgres://vtleznygmxbqml:e43c8c1074abf4272843dd4268843d47e9a93584db8d3a9e7896095728ef1674@ec2-3-222-49-168.compute-1.amazonaws.com:5432/d9arokf6ga3tsd",
  ssl: {
    rejectUnauthorized: false,
  },
});

clientDB.connect();

clientDB
  .query("INSERT INTO CUSTOMER(id) VALUES ('zain')")
  .then(console.log)
  .catch(console.log);
