 #include <iostream>
 using namespace std;

int lastRemaining(int n) {
    bool left_to_right = true;
    int remaining = n;
    int step = 1;
    int head = 1;

    while (remaining > 1) {
        if (left_to_right || remaining % 2 == 1) {
            head += step;
        }

        remaining /= 2;
        step *= 2;
        left_to_right = !left_to_right;
    }

    return head;
}

int main() {
    int n ;
    cin>>n;
    int result = lastRemaining(n);
    std::cout << result << std::endl;

    return 0;
}
