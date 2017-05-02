// 01_hello_world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <openssl/crypto.h>
#include <iostream>

using namespace std;

int main() {
    cout << "openssl version: " << OpenSSL_version(OPENSSL_VERSION) << endl;
    return 0;
}

