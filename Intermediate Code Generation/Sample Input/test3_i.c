int main() {
    int i, j, k, ll;

    for (i = 0; i < 6; i++) {
        println(i);
    }

    k = 4;
    ll = 6;
    while (k > 0) {
        ll = ll + 3;
        k--;
    }

    println(ll);
    println(k);

    k = 4;
    ll = 6;

    while (k--) {
        ll = ll + 3;
    }

    println(ll);
    println(k);

    return 0;
}

// 0
// 1
// 2
// 3
// 4
// 5
// 18
// 0
// 18
// -1
