#include <iostream>
#include <iomanip>

int main() {
    // 1. Set up item costs and rates
    double book_price    = 12.99;  // price per book (in $)
    int    quantity      = 3;      // how many books you want
    double shipping_cost = 4.50;   // flat shipping fee
    double tax_rate      = 0.07;   // 7% sales tax

    // 2. Compute costs using arithmetic and assignment
    double subtotal = book_price * quantity;    // multiplication
    double tax      = subtotal * tax_rate;      // multiplication
    double total    = subtotal + shipping_cost; // addition
    total += tax;                               // augmented assignment

    // 3. Define your budget and compare
    double budget        = 50.0;               // your maximum spend
    bool   within_budget = (total <= budget);  // relational comparison

    // 4. Show results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Subtotal:        $" << subtotal      << '\n';
    std::cout << "Tax:             $" << tax           << '\n';
    std::cout << "Shipping:        $" << shipping_cost << '\n';
    std::cout << "Total cost:      $" << total         << '\n';
    std::cout << std::boolalpha
              << "Within budget?   " << within_budget << '\n';

    return 0;
}
