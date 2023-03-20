#!/usr/bin/env python3
import MySQLdb
import sys

if __name__ == "__main__":
    # Get command line arguments
    username = sys.argv[1]
    password = sys.argv[2]
    db_name = sys.argv[3]

    # Connect to MySQL server
    db = MySQLdb.connect(
        host="localhost",
        port=3306,
        user=username,
        passwd=password,
        db=db_name,
    )

    # Create a cursor
    cur = db.cursor()

    # Execute query
    cur.execute("SELECT * FROM states ORDER BY id ASC")

    # Fetch all rows and print them
    rows = cur.fetchall()
    for row in rows:
        print(row)

    # Close database connection
    db.close()
