#pragma once

#include <asio2/config.hpp>

#if defined(ASIO_STANDALONE) || defined(ASIO2_HEADER_ONLY)
#include <asio/query.hpp>
#else
#include <boost/asio/query.hpp>
#endif