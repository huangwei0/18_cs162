#include "./Header.hpp"

int main(int argc, const char * argv[]) {
    fstream fs1,fs2;
    ofstream fin("./output.txt");
    fs1.open("./input.txt");
    fs2.open("./output.txt");
    int num;
    fs1>>num;
    student *st= create_student_db(num);
    get_student_db_info(st,num,fs1);
    sort_by_id(st, num,fs2);
    sort_by_lst(st ,num, fs2);
    count(st,num,fs2);
    delete_student_db_info(&st,num);
    fs2.close();
    return 0;
}
