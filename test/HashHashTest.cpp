#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include "../src/Hash.hpp"

BOOST_AUTO_TEST_SUITE(HashHashTest)

BOOST_AUTO_TEST_CASE(HashHash3Letters)
{
  Hash sut( 3, false, true, false );

  BOOST_CHECK_EQUAL( sut.hash( "sample-text" ), "AFI" );
}

BOOST_AUTO_TEST_CASE(HashHash8Letters)
{
  Hash sut( 8, false, false, true );

  BOOST_CHECK_EQUAL( sut.hash( "sample-text" ), "btmyqafi" );
}

BOOST_AUTO_TEST_SUITE_END()
