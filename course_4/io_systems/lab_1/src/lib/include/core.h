#pragma once

#include "systemc.h"

SC_MODULE(CORE) {
  sc_in<bool> clock_in;

  sc_in<int> bus_data_in;
  sc_out<int> bus_data_out;
  sc_out<int> bus_address_out;
  sc_out<bool> bus_write_out;
  sc_out<bool> bus_read_out;

  sc_out<bool> ic_signal_out;

  SC_HAS_PROCESS(CORE);

  CORE(sc_module_name nm);
  ~CORE();

  void mainThread();

  // Probably needs to be defined in other module
  void configure_input_capture(unsigned int input_capture_mode, unsigned int timers_config);
  void changeInputCaptureSignal(bool signal);

private:
  void write_to_bus(int address, int data);
  int readFromBus(int address);
};
