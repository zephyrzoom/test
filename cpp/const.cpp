int get() {
    return 1;
}
int main(int argc, char const *argv[]) {
    double dval = 3.14;
    const int t = dval;
    const int &ri = dval;
    //int &r = dval;

    int i = 0;
    const int *const a = &i;
    const int *p = a;

    const int s = get();
    constexpr const int *ep = nullptr;
    return 0;
}
