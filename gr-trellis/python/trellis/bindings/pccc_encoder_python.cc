/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(pccc_encoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(d0c48f4bedaa0e46f06f9607fb84d36e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/trellis/pccc_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <pccc_encoder_pydoc.h>

template <class IN_T, class OUT_T>
void bind_pccc_encoder_template(py::module& m, const char* classname)
{
    using pccc_encoder = gr::trellis::pccc_encoder<IN_T, OUT_T>;

    py::class_<pccc_encoder, gr::block, gr::basic_block, std::shared_ptr<pccc_encoder>>(
        m, classname)
        .def(py::init(&gr::trellis::pccc_encoder<IN_T, OUT_T>::make),
             py::arg("FSM1"),
             py::arg("ST1"),
             py::arg("FSM2"),
             py::arg("ST2"),
             py::arg("INTERLEAVER"),
             py::arg("blocklength"))
        .def("FSM1", &pccc_encoder::FSM1)
        .def("ST1", &pccc_encoder::ST1)
        .def("FSM2", &pccc_encoder::FSM2)
        .def("ST2", &pccc_encoder::ST2)
        .def("INTERLEAVER", &pccc_encoder::INTERLEAVER)
        .def("blocklength", &pccc_encoder::blocklength);
}

void bind_pccc_encoder(py::module& m)
{
    bind_pccc_encoder_template<std::uint8_t, std::uint8_t>(m, "pccc_encoder_bb");
    bind_pccc_encoder_template<std::uint8_t, std::int16_t>(m, "pccc_encoder_bs");
    bind_pccc_encoder_template<std::uint8_t, std::int32_t>(m, "pccc_encoder_bi");
    bind_pccc_encoder_template<std::int16_t, std::int16_t>(m, "pccc_encoder_ss");
    bind_pccc_encoder_template<std::int16_t, std::int32_t>(m, "pccc_encoder_si");
    bind_pccc_encoder_template<std::int32_t, std::int32_t>(m, "pccc_encoder_ii");
}