#define ASIO_STANDALONE
#include <crow.h> 

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "hello jacob";
    });

    app.port(18080).multithreaded().run();
}