#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(int amount) = 0; // pure virtual function

    void paymentMessage() {
        cout << "Processing your payment..." << endl;
    }

    // Always declare a virtual destructor in base class
    virtual ~Payment() {}
};

class PayPalPayment : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using PayPal" << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

int main() {
    Payment* paymentMethod;

    // PayPal
    paymentMethod = new PayPalPayment();
    paymentMethod->paymentMessage();
    paymentMethod->pay(5000);
    delete paymentMethod;  // Free memory

    cout << endl;

    // UPI
    paymentMethod = new UPIPayment();
    paymentMethod->paymentMessage();
    paymentMethod->pay(485);
    delete paymentMethod;

    cout << endl;

    // Credit Card
    paymentMethod = new CreditCardPayment();
    paymentMethod->paymentMessage();
    paymentMethod->pay(25000);
    delete paymentMethod;

    return 0;
}
