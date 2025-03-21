#include <stdbool.h>

#include <termux/termux_exec__nos__c/v1/TermuxExecLibraryConfig.h>

static bool sIsRunningTests = false;



bool libtermux_exec__nos__c__getIsRunningTests() {
    return sIsRunningTests;
}

void libtermux_exec__nos__c__setIsRunningTests(bool isRunningTests) {
    sIsRunningTests = isRunningTests;
}
