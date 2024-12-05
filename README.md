# Deribit Test Trading System

This project is a trading system designed to interact with the Deribit API, implement order management functions, and provide real-time market data streaming via WebSocket. The implementation is done in C++ and focuses on low-latency performance, error handling, logging, and optimization techniques.

## Table of Contents
1. [Overview](#overview)
2. [Core Features](#core-features)
    - [Order Management Functions](#order-management-functions)
    - [Market Data Streaming](#market-data-streaming)
3. [Technical Details](#technical-details)
    - [Implementation Details](#implementation-details)
    - [WebSocket Server](#websocket-server)
4. [Performance Analysis & Optimization](#performance-analysis-and-optimization)
5. [Installation](#installation)
6. [Usage](#usage)
7. [Deliverables](#deliverables)
8. [License](#license)

## Overview
This project is designed for trading on the Deribit platform. It supports placing and managing orders, retrieving real-time market data, and streaming updates through a WebSocket server. It covers all Deribit-supported instruments including Spot, Futures, and Options. The implementation focuses on low-latency performance and scalable architecture.

## Core Features

### Order Management Functions
The following order management features are implemented:

1. **Place Order**: Submit new orders to the Deribit platform via API.
2. **Cancel Order**: Cancel an existing order using its unique order ID.
3. **Modify Order**: Modify an existing order's price or quantity.
4. **Get Orderbook**: Retrieve the current orderbook for specific trading symbols.
5. **View Current Positions**: Retrieve and display the current positions held in the account.
6. **Real-time Market Data Streaming via WebSocket**: 
   - Implemented WebSocket server functionality to stream real-time data.
   - Clients can subscribe to specific symbols (Spot, Futures, and Options).
   - Continuous orderbook updates are provided for subscribed symbols.

### Market Data Streaming
The system includes a WebSocket server that streams the following real-time data:
- **Orderbook updates**: Continuously broadcasts orderbook data for subscribed symbols.
- **Live market data**: Includes real-time price and trade information for various instruments (Spot, Futures, Options).

### Market Coverage
- **Instruments Supported**: Spot, Futures, and Options.
- **Scope**: All symbols supported by Deribit are covered.

## Technical Details

### Implementation Details
The system is built using **C++**, ensuring low-latency performance suitable for high-frequency trading applications. 

Key technical aspects include:
- **Low-latency order placement**.
- **WebSocket server for real-time market data distribution**.
- **Error handling**: Handles API errors and connectivity issues gracefully.
- **Logging**: Includes detailed logging for debugging and performance tracking.

### WebSocket Server
The WebSocket server enables real-time updates of market data, including the following features:
- **Connection management**: Efficient handling of client connections and disconnections.
- **Subscription handling**: Clients can subscribe to specific symbols (e.g., BTC/USD spot, futures, options).
- **Efficient message broadcasting**: Efficient handling of data broadcasting to all subscribed clients with minimal delay.

## Performance Analysis & Optimization

### Latency Benchmarking
Various metrics were measured and documented to ensure the system’s low-latency performance:
- **Order placement latency**.
- **Market data processing latency**.
- **WebSocket message propagation delay**.
- **End-to-end trading loop latency**.

### Optimization Techniques
To optimize the system, the following techniques were implemented:
- **Memory management**: Minimized memory allocations and deallocations during trading activities.
- **Network communication**: Optimized message formats and minimized overhead in API calls and WebSocket messages.
- **Data structure selection**: Used optimized data structures (e.g., hashmaps) for fast lookups and efficient data management.
- **Thread management**: Implemented multi-threading for concurrent data processing and WebSocket message handling.
- **CPU optimization**: Optimized code paths and reduced unnecessary computations to ensure CPU efficiency.

### Performance Metrics
- Benchmarking results have been included in the performance analysis report.
- Optimizations led to a significant reduction in latency for order placement, market data processing, and message propagation.

## Installation

### Prerequisites
- C++17 or later
- Deribit Test Account (API Keys for authentication)
- WebSocket and API libraries (specified in `requirements.txt`)

### Steps to Run:
   1. cd deribit-test-trading
   2. mkdir build
   3. cd build
   4. cmake ..
   5. make
   6. ./deribit-test-trading


## Usage

1. **Generate API Keys**: Create a Deribit test account and generate API keys for authentication.

2. **Start the System**:
   - Run the main program to initiate the trading system.
   - The WebSocket server will start, and clients can subscribe to market data.

3. **Order Management**:
   - Use the provided API functions to place, cancel, and modify orders.
   - View the current positions and get live orderbook updates.

4. **Real-time Market Data**:
   - Clients can subscribe to symbols (Spot, Futures, Options) to receive real-time market data and orderbook updates.

## Deliverables

The following deliverables are included in this project:

1. Complete source code with detailed documentation.
2. A video demonstration showcasing:
   - System functionality.
   - Code review.
   - Explanation of the implementation.
3. If the bonus section is completed:
   - Performance analysis report.
   - Benchmarking results.
   - Optimization documentation.
