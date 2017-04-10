#ifndef DISPLAY_ARRAY_H_INCLUDED
#define DISPLAY_ARRAY_H_INCLUDED

using namespace std;

void display(int *number_array,size_t length){
    int col = 1;
    cout.width(5);
    for(size_t i = 0; i++ < length;col++){
        cout << number_array[i-1];
        if(i < length)
            std::cout.width(5);
        if(col == 20){ col = 0 ; cout << endl; }
    }
}
void information(double time_process, size_t LENGTH, string algorithm){
    cout << endl << "Algorithm      : " << algorithm;
    cout << endl << "Process time   : " << time_process;
    cout << endl << "Total Data     : " << LENGTH;
    cout << endl << "Ordered Number : " << endl;
}

#endif // DISPLAY_ARRAY_H_INCLUDED
