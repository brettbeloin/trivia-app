# Trivia App - C + Raylib + MongoDB

Learning project: Trivia app that fetches questions from an API, stores them in MongoDB, and validates answers with regex.

## Tech Stack
- **raylib** - UI/rendering
- **cJSON** - JSON parsing
- **mongo-c-driver** - MongoDB integration
- **munit** - Unit testing
- **POSIX regex** - Answer validation

## Setup

### 1. Install vcpkg
```bash
cd ~
git clone https://github.com/Microsoft/vcpkg.git
./vcpkg/bootstrap-vcpkg.sh
```

### 2. Install dependencies
```bash
~/vcpkg/vcpkg install raylib cjson mongo-c-driver
```

### 3. Build project
```bash
cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=~/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build
```

### 4. Run
```bash
./build/trivia_app
```

## Development Workflow

### Code changes (existing files)
```bash
cmake --build build
./build/trivia_app
```

### Adding new source files
1. Edit `CMakeLists.txt` - add file to `add_executable()`
2. Rebuild:
```bash
cmake --build build
./build/trivia_app
```

### Major CMake changes (dependencies, flags)
```bash
cmake -B build -S . -G Ninja -DCMAKE_TOOLCHAIN_FILE=~/vcpkg/scripts/buildsystems/vcpkg.cmake
cmake --build build
```

## Project Structure
```
trivia-app/
├── src/           # Source files
├── include/       # Header files
├── tests/         # munit tests
├── build/         # Build output (gitignore this)
└── CMakeLists.txt
```

## Build Steps (from JavaFX version)
1. -[ ] Setup raylib - render basic window
2. -[ ] Fetch trivia from API (HTTP + cJSON)
3. -[ ] Connect to MongoDB
4. -[ ] Store questions in database
5. -[ ] Display questions in UI
6. -[ ] Validate answers with regex
7. -[ ] Add unit tests with munit

## Notes
- MongoDB target: `mongoc::mongoc` (not mongo::mongoc_shared)
- cJSON target: `cjson`
- Always check vcpkg install output for correct CMake target names
