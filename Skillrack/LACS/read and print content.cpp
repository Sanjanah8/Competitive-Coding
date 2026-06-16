ifstream file(fileLocation);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
