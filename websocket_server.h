#ifndef WEBSOCKET_SERVER_H
#define WEBSOCKET_SERVER_H

#include <string>

class WebSocketServer {
public:
    WebSocketServer(const std::string &url);
    void start();
    void subscribe(const std::string &symbol);
    void handle_message(const std::string &message);
    
private:
    std::string url_;
};

#endif // WEBSOCKET_SERVER_H
