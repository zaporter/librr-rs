#include "record.hpp"

using namespace std;
namespace rr {
/* RecordingFlags recordFlagsToRust(rr::RecordFlags &in){ */
/*     RecordingFlags out = {}; */
/*     for (auto env : in.extra_env){ */
/*         out.extra_env.push_back(env); */
/*     } */
/*     out.max_ticks = in.max_ticks; */
/*     out.continue_through_sig = in.continue_through_sig; */
/*     out.ignore_sig = in.ignore_sig; */
/*     out.use_syscall_buffer = in.use_syscall_buffer == rr::RecordSession::ENABLE_SYSCALL_BUF ? true : false; */
/*     out.syscall_buffer_size = in.syscall_buffer_size; */
/*     out.print_trace_dir = in.print_trace_dir; */
/*     out.output_trace_dir = rust::String(in.output_trace_dir); */
/*     out.use_file_cloning = in.use_file_cloning; */
/*     out.use_read_cloning = in.use_read_cloning; */
/*     out.bind_cpu = in.bind_cpu; */
/*     out.always_switch = in.always_switch; */
/*     out.chaos = in.chaos; */
/*     out.num_cores = in.num_cores; */
/*     out.wait_for_all = in.wait_for_all; */
/*     out.nested = in.nested; */
/*     out.scarce_fds = in.scarce_fds; */
/*     out.setuid_sudo = in.setuid_sudo; */
/*     out.copy_preload_src = in.copy_preload_src; */
/*     out.syscallbuf_desched_sig = in.syscallbuf_desched_sig; */
/*     out.stap_sdt = in.stap_sdt; */
/*     out.unmap_vdso = in.unmap_vdso; */
/*     out.asan = in.asan; */
/*     return out; */
/* } */
/* rr::RecordFlags recordFlagsToCpp(RecordingFlags &in){ */
/*     rr::RecordFlags out; */
/*     out.extra_env.clear(); */
/*     for (auto a : in.extra_env){ */
/*         out.extra_env.push_back(std::string(a)); */
/*     } */
/*     out.max_ticks = in.max_ticks; */
/*     out.continue_through_sig = in.continue_through_sig; */
/*     out.ignore_sig = in.ignore_sig; */
/*     out.use_syscall_buffer = in.use_syscall_buffer ? rr::RecordSession::ENABLE_SYSCALL_BUF : rr::RecordSession::DISABLE_SYSCALL_BUF; */
/*     out.syscall_buffer_size = in.syscall_buffer_size; */
/*     out.print_trace_dir = in.print_trace_dir; */
/*     out.output_trace_dir = std::string(in.output_trace_dir); */
/*     out.use_file_cloning = in.use_file_cloning; */
/*     out.use_read_cloning = in.use_read_cloning; */
/*     out.bind_cpu = rr::BindCPU(in.bind_cpu); */
/*     out.always_switch = in.always_switch; */
/*     out.chaos = in.chaos; */
/*     out.num_cores = in.num_cores; */
/*     out.wait_for_all = in.wait_for_all; */
/*     out.nested = rr::NestedBehavior(in.nested); */
/*     out.scarce_fds = in.scarce_fds; */
/*     out.setuid_sudo = in.setuid_sudo; */
/*     out.copy_preload_src = in.copy_preload_src; */
/*     out.syscallbuf_desched_sig = in.syscallbuf_desched_sig; */
/*     out.stap_sdt = in.stap_sdt; */
/*     out.unmap_vdso = in.unmap_vdso; */
/*     out.asan = in.asan; */
/*     return out; */
/* } */
int record(rust::Vec<rust::String> args_in) {
    //rr::raise_resource_limits();
    vector<string> args;
    for (auto arg : args_in) {
        args.push_back(std::string(arg));
    }
    // default flags

    auto command = RecordCommand::get();
    return command->run(args);
}

/* RecordingFlags get_default_record_flags() { */
/*     rr::RecordFlags rrflags; */
/*     return recordFlagsToRust(rrflags); */
/* } */

/* RecordingFlags record_flags_pipe_test(RecordingFlags flags) { */
/*     rr::RecordFlags rrflags = recordFlagsToCpp(flags); */
/*     return recordFlagsToRust(rrflags); */
/* } */


} // end namepace rr
