int main() {
    int a[10];
    for (int i=0; i < 10; i=i+1) {
        a[i] = i;
    }
    int i=0;
    for (i; i < 10; i=i+1) {
        print_int(a);
    }
    return 0;
}