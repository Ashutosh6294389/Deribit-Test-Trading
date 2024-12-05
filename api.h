#ifndef API_H
#define API_H

#include <string>

class DeribitAPI {
public:
    DeribitAPI(const std::string &api_key, const std::string &api_secret);
    void place_order(const std::string &symbol, int quantity, double price);
    void cancel_order(const std::string &order_id);
    void modify_order(const std::string &order_id, double new_price);
    void get_orderbook(const std::string &symbol);
    void view_positions();
    
private:
    std::string api_key_;
    std::string api_secret_;
};

#endif // API_H
