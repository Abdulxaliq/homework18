#include <iostream>

using namespace std;

int main()
{
    //const int olcu1 = 5;
    //const int olcu2 = 5;
    //int array[olcu1][olcu2];
    //int sum = 0;
    //srand(time(0));
    //cout << "5x5 massivi: ";
    //for (int i = 0; i < olcu1; ++i) {
    //    for (int j = 0; j < olcu2; ++j) {
    //        array[i][j] = rand() % 21;
    //        cout << array[i][j] << " ";
    //        sum += array[i][j];
    //    }
    //    cout << " ";
    //}
    //cout << "massivdeki ededlerin cemi: " << sum << endl
    //return 0;







    //const int size = 5;
    //int array[size][size];
    //int esas = 0;
    //int eks = 0;
    //srand(time(0));
    //cout << "5x5 massivi:";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        array[i][j] = rand() % 21;
    //        cout << array[i][j] << " ";
    //    }
    //    cout << " ";
    //}
    //for (int i = 0; i < size; ++i) {
    //    esas += array[i][i];
    //    eks += array[i][size - i - 1];
    //}
    //cout << "Esas diaqonal uzerindeki ededlerin cemi: " << esas << endl;
    //cout << "Eks diaqonal uzerindeki ededlerin cemi: " << eks << endl;



    //const int size = 5;
    //int array[size][size];

    //srand(time(0));

    //cout << "5x5 massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        array[i][j] = rand() % 201 - 100;
    //        cout << array[i][j] << " ";
    //    }
    //    cout << " ";
    //}

    //int min_element = array[0][0];
    //int max_element = array[0][0];

    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        if (array[i][j] < min_element) {
    //            min_element = array[i][j];
    //        }
    //        if (array[i][j] > max_element) {
    //            max_element = array[i][j];
    //        }
    //    }
    //}

    //cout << "massivdki minimal element: " << min_element << endl;
    //cout << "massivdeki maksimal element: " << max_element << endl;


    

    //const int size = 5;
    //int array[size][size];
    //int sifir = 0;
    //int musbet = 0;
    //int menfi = 0;
    //srand(time(0));
    //cout << "5x5 massiv: ";
    //for (int i = 0; i < size; ++i)
    //{
    //    for (int j = 0; j < size; ++j)
    //    {
    //        array[i][j] = rand() % 11 - 5;
    //    }
    //}
    //cout << " ";
    //    for (int i = 0; i < size; i++)
    //    {
    //        for (int j = 0; j < size; j++)
    //        {
    //            cout << array[i][j] << " ";
    //            if (array[i][j] < 0) menfi++;
    //            else if (array[i][j] > 0) musbet++;
    //            else sifir++;
    //        }
    //    }
    //
    //cout << "massivdeki menfilerin sayi: " << menfi << endl;
    //cout << "massivdeki musbetlerin sayi: " << musbet << endl;
    //cout << "massivdeki sifirin sayi: " << sifir << endl;

    //return 0;



    
    //const int size = 5;
    //int array[size][size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        array[i][j] = rand() % 21;
    //    }
    //}

    //cout << "massiv:\n";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //cout << "setirlerin cemi:\n";
    //for (int i = 0; i < size; ++i) {
    //    int sizesum = 0;
    //    for (int j = 0; j < size; ++j) {
    //        sizesum += array[i][j];
    //    }
    //    cout << "setir " << i + 1 << ": " << sizesum << endl;
    //}

    //return 0;



    //const int size = 5;
    //int array[size][size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j <size; ++j) {
    //        array[i][j] = rand() % 21;
    //    }
    //}

    //cout << "Massiv:\n";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //cout << "Sutunların cemi:\n";
    //for (int j = 0; j < size; ++j) {
    //    int sutun = 0;
    //    for (int i = 0; i < size; ++i) {
    //        sutun += array[i][j];
    //    }
    //    cout << "Sutun " << j + 1 << ": " << sutun << endl;
    //}

    //return 0;



    //const int size = 5;
    //int array[size][size];

    //srand(time(0));

    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        array[i][j] = rand() % 51 - 10;
    //    }
    //}

    //cout << "Massiv:\n";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //int totalSum = 0;
    //cout << "Menfi sayi tapa bilmeyen setirlerin cemleri:\n";
    //for (int i = 0; i < size; ++i) {
    //    bool hasmenfi = false;
    //    int rowSum = 0;

    //    for (int j = 0; j < size; ++j) {
    //        if (array[i][j] < 0) {
    //            hasmenfi = true;
    //        }
    //        rowSum += array[i][j];
    //    }

    //    if (!hasmenfi) {
    //        cout << "Setir " << i + 1 << ": " << rowSum << endl;
    //        totalSum += rowSum;
    //    }
    //}

    //cout << "Menfi sayi tapa bilmeyen setirlerin cemleri: " << totalSum << endl;




    //const int size = 5;
    //int array[size][size];

    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        array[i][j] = i * 10 + j;
    //    }
    //}

    //cout << "Massiv:\n";
    //for (int i = 0; i < size; ++i) {
    //    for (int j = 0; j < size; ++j) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //return 0;


    


    //const int N = 4;
    //const int M = 5;


    //int matrix[N][M];
    //srand(time(0));

    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < M; ++j) {
    //        matrix[i][j] = rand() % 10;
    //    }
    //}


    //cout << "Evvelki massiv:" << endl;
    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < M; ++j) {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //for (int i = 0; i < M / 2; ++i) {
    //    for (int j = 0; j < N; ++j) {
    //        int temp = matrix[j][i];
    //        matrix[j][i] = matrix[j][M - i - 1];
    //        matrix[j][M - i - 1] = temp;
    //    }
    //}

    //cout << "\nSutunlarin yerleri deyisdirilmis massiv:" << endl;
    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < M; ++j) {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;






 /*   const int size = 6;

    int matrix[size][size];
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "Evvelki massiv:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < size - 1; i += 2) {
        for (int j = 0; j < size; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i + 1][j];
            matrix[i + 1][j] = temp;
        }
    }

    cout << "\nQonsu setirlerin yerleri deyisdirilmis massiv:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;*/
}

