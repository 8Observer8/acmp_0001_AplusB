/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 2, 2013, 2:29:15 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

int sum(int a, int b);

void newtestclass::testSum_001() {
    int a = 2;
    int b = 3;
    int result = sum(a, b);
    int expected = 5;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}


void newtestclass::testSum_002() {
    int a = -2;
    int b = 3;
    int result = sum(a, b);
    int expected = 1;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testSum_003() {
    int a = 2;
    int b = -3;
    int result = sum(a, b);
    int expected = -1;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testSum_004() {
    int a = -2;
    int b = -3;
    int result = sum(a, b);
    int expected = -5;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testSum_005() {
    int a = 0;
    int b = 3;
    int result = sum(a, b);
    int expected = 3;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testSum_006() {
    int a = 2;
    int b = 0;
    int result = sum(a, b);
    int expected = 2;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testSum_007() {
    int a = 0;
    int b = 0;
    int result = sum(a, b);
    int expected = 0;
    CPPUNIT_ASSERT_EQUAL(expected, result);
}
