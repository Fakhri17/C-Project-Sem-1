char team[4][10] = {"Rose", "Jennie", "Jisoo", "Lisa"};

    // Output nilai sebuah index
    printf("%s\n", team[0]);
    printf("%s\n", team[1]);
    printf("\n");

    // Output nilai semua index (cara 1)
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            printf("%c", team[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Output nilai semua index (cara 2)
    for(int i = 0; i < 4; i++){
        printf("%s", team[i]);
        printf("\n");
    }