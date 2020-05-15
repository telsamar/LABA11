// Copyright 2018 Your Name <your_email>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#include <string>
#include <chrono>
#include <iostream>
#include <thread>
#include <future>

#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>

#include <Child.h>
#include <boost/process.hpp>
#include <Pipe.h>
#include <IO.h>
#include <boost/process/group.hpp>

#include <async++.h>

using boost::program_options::options_description;
using boost::program_options::variables_map;
using boost::program_options::error;
using boost::program_options::store;
using boost::program_options::notify;
using boost::program_options::value;

#endif // INCLUDE_HEADER_HPP_
