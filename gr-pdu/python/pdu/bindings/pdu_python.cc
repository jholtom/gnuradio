/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pdu.h)                                                     */
/* BINDTOOL_HEADER_FILE_HASH(15f56dfddfda75e396a0b32cca7b7b3d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/pdu/pdu.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_pydoc.h>

void bind_pdu(py::module& m)
{


    py::enum_<::gr::pdu::vector_type>(m, "vector_type")
        .value("byte_t", ::gr::pdu::byte_t)       // 0
        .value("float_t", ::gr::pdu::float_t)     // 1
        .value("complex_t", ::gr::pdu::complex_t) // 2
        .export_values();

    py::implicitly_convertible<int, ::gr::pdu::vector_type>();


    m.def("PMTCONSTSTR__data", &::gr::pdu::PMTCONSTSTR__data, D(PMTCONSTSTR__data));


    m.def("PMTCONSTSTR__dict", &::gr::pdu::PMTCONSTSTR__dict, D(PMTCONSTSTR__dict));


    m.def("PMTCONSTSTR__emit", &::gr::pdu::PMTCONSTSTR__emit, D(PMTCONSTSTR__emit));


    m.def("PMTCONSTSTR__msg", &::gr::pdu::PMTCONSTSTR__msg, D(PMTCONSTSTR__msg));


    m.def("PMTCONSTSTR__pdus", &::gr::pdu::PMTCONSTSTR__pdus, D(PMTCONSTSTR__pdus));


    m.def("itemsize", &::gr::pdu::itemsize, py::arg("type"), D(itemsize));


    m.def("type_matches",
          &::gr::pdu::type_matches,
          py::arg("type"),
          py::arg("v"),
          D(type_matches));


    m.def("make_pdu_vector",
          &::gr::pdu::make_pdu_vector,
          py::arg("type"),
          py::arg("buf"),
          py::arg("items"),
          D(make_pdu_vector));


    m.def(
        "type_from_pmt", &::gr::pdu::type_from_pmt, py::arg("vector"), D(type_from_pmt));
}
