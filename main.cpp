#include "api.h"
#include "websocket_server.h"
#include <iostream>

int main() {
    // Initialize the system
    std::string api_key = "<your_api_key>";
    std::string api_secret = "<your_api_secret>";
    
    // Initialize API manager
    DeribitAPI api(api_key, api_secret);
    
    // Initialize WebSocket server
    WebSocketServer ws_server("wss://test.deribit.com/ws/api/v2");

    // Example: Place an order
    api.place_order("BTC-USD-2024-12-12", 1, 50000.0);

    // Start WebSocket server for streaming market data
    ws_server.start();

    return 0;
}
