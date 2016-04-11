int main(int argc, int *argv) {
    int lol1;
    int lol2;
    int lol3;
    lol1 = 4;
    lol2 = 1;
    lol3 = 0;
    
    lol3 = lol1 << lol2;
    if (lol3 == 8){
    }
    else {
        while (lol3 != 10000){
            lol3 = lol3 + 1;
        }
    }
    
    return 0;
    
}
