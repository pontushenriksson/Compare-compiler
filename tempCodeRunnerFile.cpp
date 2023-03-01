string inputLine, compareLine;
    int testLineCount = 0;

    while (getline(input_file, inputLine) && getline(compare_file, compareLine)) {
        testLineCount++;
        output_file << inputLine << endl;
        if (compareLine == inputLine) {
            cout << (ANSI_GREEN + "> Passed!" + ANSI_RESET)  << endl;
        } else {
            cout << (ANSI_RED + "> Failed!" + ANSI_RESET) << endl;
            log_file << "> --------------- Failed! ---------------"  << endl <<  "> " << inputLine << " (On line: " << testLineCount << ")" << endl <<   "> " << "Expected:" << endl <<  "> " <<  compareLine << endl <<  "> " <<  "---------------------------------------" << endl; 
        }
    }