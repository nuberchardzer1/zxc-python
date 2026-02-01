# zxc

High-performance bindings for the **ZXC** asymmetric compressor, optimized for **fast decompression**.  
Best fit for *Write Once, Read Many* workloads (ML datasets, game assets, caches).

## Features

- **Fast decompression** (primary design goal of ZXC)
- **Buffer protocol** input (`bytes`, `bytearray`, `memoryview`, NumPy arrays, …)
- **Releases the GIL** during compression/decompression (true parallelism with Python threads)
- Stream helpers (file/path based) *(if enabled in this build)*

## Install (from source)

```bash
pip install -e .