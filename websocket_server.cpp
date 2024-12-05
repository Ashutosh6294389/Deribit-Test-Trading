#include "websocket_server.h"
#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>
#include <iostream>

typedef websocketpp::server<websocketpp::config::asio> server;

WebSocketServer::WebSocketServer(const std::string &url) : url_(url) {}

void WebSocketServer::start() {
    server ws_server;
    ws_server.init_asio();

    ws_server.set_message_handler([this](websocketpp::connection_hdl hdl, server::message_ptr msg) {
        handle_message(msg->get_payload());
    });

    ws_server.listen(url_);
    ws_server.start_accept();
    ws_server.run();
}

void WebSocketServer::subscribe(const std::string &symbol) {
    // Send subscription message for a specific symbol
}

void WebSocketServer::handle_message(const std::string &message) {
    // Handle incoming WebSocket messages
    std::cout << "Received: " << message << std::endl;
}
