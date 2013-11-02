/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 2, 2013, 2:29:15 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testSum_001);
    CPPUNIT_TEST(testSum_002);
    CPPUNIT_TEST(testSum_003);
    CPPUNIT_TEST(testSum_004);
    CPPUNIT_TEST(testSum_005);
    CPPUNIT_TEST(testSum_006);
    CPPUNIT_TEST(testSum_007);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testSum_001();
    void testSum_002();
    void testSum_003();
    void testSum_004();
    void testSum_005();
    void testSum_006();
    void testSum_007();
};

#endif	/* NEWTESTCLASS_H */

