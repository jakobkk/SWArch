// Core.cpp : Defines the exported functions for the DLL.
//

#include <iostream>

#include "framework.h"
#include "Node.h"
#include "../SystemsLibrary/SystemsLibrary.h"

//// This is an example of an exported variable
//CORE_API int nCore=0;
//
//// This is an example of an exported function.
//CORE_API int fnCore(void)
//{
//    return 0;
//}
//
//// This is the constructor of a class that has been exported.
//CCore::CCore()
//{
//    return;
//}

Node::Node() : obj(nullptr), next(nullptr) {
    std::cout << "Creating node" << std::endl;
}

Node::Node(void* incoming) : obj(incoming), next(nullptr) {
    std::cout << "Creating node with incoming" << std::endl;
}

Node::Node(void* incoming, Node* incoming_next_node) : obj(incoming), next(next) {
    std::cout << "Creating node with incoming and next node" << std::endl;
}

Node::~Node() {
    std::cout << "Deleting node" << std::endl;
}

void Node::write_to_fake_db() {
    std::cout << "Write to fake db" << std::endl;
    FakeDb db = FakeDb();
    db.write_to_db(obj);
    // Call the systems library to fake write
}
