# HFT Execution Engine (C++)

Simple event-driven execution and backtesting engine written in modern C++20.

The project simulates a trading environment with market data replay, strategy execution, and order fill simulation.

---

## 🚀 Features (current)

- Nothing implemented yet :)

---

## 🧱 Tech Stack

- C++20
- CMake
- Git / GitHub

---

## 📦 Project Structure

```
src/
|-core/ - engine core
|-data/ - market data loader
|-engine/ - main execution loop
|-execution/ - order simulation (WIP)
|-strategies/ - trading strategies (WIP)
```

---

## ⚙️ Build

```bash
mkdir build
cd build
cmake ..
make

# run:
./engine
```

---

## 📊 Input Format

CSV tick data:
```
timestamp,price,volume
1710000001,100.5,1.2
1710000002,100.7,0.8
```
---

## 🧠 TODO / Roadmap

### Phase 1 — Core Engine
- [x] Project structure setup
- [ ] Market data replay (CSV)
- [ ] Event loop engine
- [ ] Basic logging system
### Phase 2 — Strategy Layer
- [ ] Strategy interface (IStrategy)
- [ ] Simple strategies (MA crossover, momentum)
- [ ] Plug-in architecture
### Phase 3 — Execution Simulation
- [ ] Order model (BUY/SELL)
- [ ] Fill simulation engine
- [ ] Slippage model
- [ ] Latency simulation
### Phase 4 — Analytics
- [ ] PnL calculation
- [ ] Drawdown tracking
- [ ] Win rate statistics
- [ ] Performance report
### Phase 5 — Advanced (HFT-style)
- [ ] Multi-threaded engine
- [ ] Lock-free queues
- [ ] High precision timestamps
- [ ] Performance profiling

---

## 🎯 Goal

To create a simplified yet realistic order execution simulation engine inspired by quantitative trading systems used in high-frequency trading and research environments.