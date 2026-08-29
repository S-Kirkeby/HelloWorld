#include<iostream>
#include<sqlite3.h>


int callback(void* data, int argc, char** argv, char** azColName)
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << azColName[i] << ": "
                  << (argv[i] ? argv[i] : "NULL")
                  << std::endl;
    }

    return 0;
}

int main()
{
     
    sqlite3* db;

    int result = sqlite3_open("koleskab.db", &db);

    if (result != SQLITE_OK)
    {
        std::cout << "Could not open database." << std::endl;
        return 1;
    }

    std::cout << "Database opened successfully!" << std::endl;

    const char* sql = "INSERT INTO varer (navn) VALUES ('kaffe');";
    

    result = sqlite3_exec(db, sql, callback, nullptr, nullptr);

    if (result != SQLITE_OK)
    {
        std::cout << "SQL error." << std::endl;
    }

    sqlite3_close(db);
}
