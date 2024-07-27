/*Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
for the stock.
Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the amount he received for
the stock.
Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the two
commissions to his broker. (If the amount of profit that your program displays is a
negative number, then Joe lost money on the transaction.)*/
#include <iostream>

using namespace std;

int main() {
    
    const int Shares = 1000;
    const int PricePerShare = 4550; // Representing in cents  
    const int Commissionrate = 2;  

    
     const int salepricepershare = 5690;     // Representing in cents
    int purchaseamount = Shares * PricePerShare;
    int purchaseCommission = purchaseamount * Commissionrate / 100;
    int saleamount = Shares * PricePerShare;
    int saleCommission = saleamount * Commissionrate / 100;
    int profit = (saleamount - saleCommission) - (purchaseamount + purchaseCommission);

    // Display 
    cout << "Amount paid for the stock: $" << (purchaseamount / 100) << "." << (purchaseamount % 100 )<< endl;
    cout << "Commission paid when buying the stock: $" << (purchaseCommission / 100) << "." << (purchaseCommission % 100) << endl;
    cout << "Amount sold the stock for: $" << (saleamount / 100) << "." << (saleamount % 100) << endl;
    cout << "Commission paid when selling the stock: $" << (saleCommission / 100) << "." << (saleCommission % 100) << endl;

    // profit or loss
    if (profit >= 0)
        cout << "Joe made a profit of: $" << (profit / 100) << "." << (profit % 100) << endl;
    else
        cout << "Joe suffered loss"; 
    return 0;
}

