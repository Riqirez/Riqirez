#include <iostream>
#include <string>
using namespace std;

int N;
string command[10000];
int A[10000];

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;
int len = 0;

void push_front(int x) {
    Node* node = new Node;
    node->data = x;
    node->prev = nullptr;
    node->next = head;

    if (head != nullptr) {
        head->prev = node;
    } else {
        tail = node;
    }

    head = node;
    len++;
}

void push_back(int x) {
    Node* node = new Node;
    node->data = x;
    node->next = nullptr;
    node->prev = tail;

    if (tail != nullptr) {
        tail->next = node;
    } else {
        head = node;
    }

    tail = node;
    len++;
}

void pop_front() {
    if (head != nullptr) {
        cout << head->data << '\n';
        Node* temp = head;
        head = head->next;
        if (head != nullptr) head->prev = nullptr;
        else tail = nullptr;
        delete temp;
        len--;
    }
}

void pop_back() {
    if (tail != nullptr) {
        cout << tail->data << '\n';
        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) tail->next = nullptr;
        else head = nullptr;
        delete temp;
        len--;
    }
}

void size() {
    cout << len << '\n';
}

void empty() {
    cout << (len == 0 ? 1 : 0) << '\n';
}

void front() {
    if (head != nullptr) {
        cout << head->data << '\n';
    }
}

void back() {
    if (tail != nullptr) {
        cout << tail->data << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            push_front(A[i]);
        } else if (command[i] == "push_back") {
            push_back(A[i]);
        } else if (command[i] == "pop_front") {
            pop_front();
        } else if (command[i] == "pop_back") {
            pop_back();
        } else if (command[i] == "size") {
            size();
        } else if (command[i] == "empty") {
            empty();
        } else if (command[i] == "front") {
            front();
        } else if (command[i] == "back") {
            back();
        }
    }

    return 0;
}
