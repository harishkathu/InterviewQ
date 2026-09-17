#include <iostream>
#include <vector>

class Payment {
public:
    void process() {
        std::cout << "Processing a generic payment.\n";
    }
};

class CreditCard : public Payment {
public:
    void process() {
        std::cout << "Processing credit card: Authorizing bank transaction...\n";
    }
};

class PayPal : public Payment {
public:
    void process() {
        std::cout << "Processing PayPal: Redirecting to user digital wallet...\n";
    }
};

int main() {
    // We create a list of different payments using a base class pointer
    std::vector<Payment*> secureCart;
    secureCart.push_back(new CreditCard());
    secureCart.push_back(new PayPal());

    // Loop through and process each payment
    for (Payment* p : secureCart) {
        p->process(); 
    }

    // Cleanup memory
    for (Payment* p : secureCart) delete p;
    return 0;
}
