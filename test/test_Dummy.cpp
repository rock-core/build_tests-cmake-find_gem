#include <boost/test/unit_test.hpp>
#include <find_gem/Dummy.hpp>

using namespace find_gem;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    find_gem::DummyClass dummy;
    dummy.welcome();
}
