/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_OPTIONS_H__
#define __EXTPROFILE_OPTIONS_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_options.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_assert_options(int what, CVarRef value = null_variant) {
  FUNCTION_INJECTION_BUILTIN(assert_options);
  return f_assert_options(what, value);
}

inline Variant x_assert(CVarRef assertion) {
  FUNCTION_INJECTION_BUILTIN(assert);
  return f_assert(assertion);
}

inline int x_dl(CStrRef library) {
  FUNCTION_INJECTION_BUILTIN(dl);
  return f_dl(library);
}

inline bool x_extension_loaded(CStrRef name) {
  FUNCTION_INJECTION_BUILTIN(extension_loaded);
  return f_extension_loaded(name);
}

inline Array x_get_loaded_extensions(bool zend_extensions = false) {
  FUNCTION_INJECTION_BUILTIN(get_loaded_extensions);
  return f_get_loaded_extensions(zend_extensions);
}

inline Array x_get_extension_funcs(CStrRef module_name) {
  FUNCTION_INJECTION_BUILTIN(get_extension_funcs);
  return f_get_extension_funcs(module_name);
}

inline String x_get_cfg_var(CStrRef option) {
  FUNCTION_INJECTION_BUILTIN(get_cfg_var);
  return f_get_cfg_var(option);
}

inline String x_get_current_user() {
  FUNCTION_INJECTION_BUILTIN(get_current_user);
  return f_get_current_user();
}

inline Array x_get_defined_constants(CVarRef categorize = null_variant) {
  FUNCTION_INJECTION_BUILTIN(get_defined_constants);
  return f_get_defined_constants(categorize);
}

inline String x_get_include_path() {
  FUNCTION_INJECTION_BUILTIN(get_include_path);
  return f_get_include_path();
}

inline void x_restore_include_path() {
  FUNCTION_INJECTION_BUILTIN(restore_include_path);
  f_restore_include_path();
}

inline String x_set_include_path(CStrRef new_include_path) {
  FUNCTION_INJECTION_BUILTIN(set_include_path);
  return f_set_include_path(new_include_path);
}

inline Array x_get_included_files() {
  FUNCTION_INJECTION_BUILTIN(get_included_files);
  return f_get_included_files();
}

inline Array x_inclued_get_data() {
  FUNCTION_INJECTION_BUILTIN(inclued_get_data);
  return f_inclued_get_data();
}

inline int x_get_magic_quotes_gpc() {
  FUNCTION_INJECTION_BUILTIN(get_magic_quotes_gpc);
  return f_get_magic_quotes_gpc();
}

inline int x_get_magic_quotes_runtime() {
  FUNCTION_INJECTION_BUILTIN(get_magic_quotes_runtime);
  return f_get_magic_quotes_runtime();
}

inline Array x_get_required_files() {
  FUNCTION_INJECTION_BUILTIN(get_required_files);
  return f_get_required_files();
}

inline Variant x_getenv(CStrRef varname) {
  FUNCTION_INJECTION_BUILTIN(getenv);
  return f_getenv(varname);
}

inline int x_getlastmod() {
  FUNCTION_INJECTION_BUILTIN(getlastmod);
  return f_getlastmod();
}

inline int x_getmygid() {
  FUNCTION_INJECTION_BUILTIN(getmygid);
  return f_getmygid();
}

inline int x_getmyinode() {
  FUNCTION_INJECTION_BUILTIN(getmyinode);
  return f_getmyinode();
}

inline int x_getmypid() {
  FUNCTION_INJECTION_BUILTIN(getmypid);
  return f_getmypid();
}

inline int x_getmyuid() {
  FUNCTION_INJECTION_BUILTIN(getmyuid);
  return f_getmyuid();
}

inline Array x_getopt(CStrRef options, CVarRef longopts = null_variant) {
  FUNCTION_INJECTION_BUILTIN(getopt);
  return f_getopt(options, longopts);
}

inline Array x_getrusage(int who = 0) {
  FUNCTION_INJECTION_BUILTIN(getrusage);
  return f_getrusage(who);
}

inline bool x_clock_getres(int clk_id, VRefParam sec, VRefParam nsec) {
  FUNCTION_INJECTION_BUILTIN(clock_getres);
  return f_clock_getres(clk_id, sec, nsec);
}

inline bool x_clock_gettime(int clk_id, VRefParam sec, VRefParam nsec) {
  FUNCTION_INJECTION_BUILTIN(clock_gettime);
  return f_clock_gettime(clk_id, sec, nsec);
}

inline bool x_clock_settime(int clk_id, int64 sec, int64 nsec) {
  FUNCTION_INJECTION_BUILTIN(clock_settime);
  return f_clock_settime(clk_id, sec, nsec);
}

inline int x_cpu_get_count() {
  return f_cpu_get_count();
}

inline String x_cpu_get_model() {
  return f_cpu_get_model();
}

inline String x_ini_alter(CStrRef varname, CStrRef newvalue) {
  FUNCTION_INJECTION_BUILTIN(ini_alter);
  return f_ini_alter(varname, newvalue);
}

inline Array x_ini_get_all(CStrRef extension = null_string) {
  FUNCTION_INJECTION_BUILTIN(ini_get_all);
  return f_ini_get_all(extension);
}

inline String x_ini_get(CStrRef varname) {
  FUNCTION_INJECTION_BUILTIN(ini_get);
  return f_ini_get(varname);
}

inline void x_ini_restore(CStrRef varname) {
  FUNCTION_INJECTION_BUILTIN(ini_restore);
  f_ini_restore(varname);
}

inline String x_ini_set(CStrRef varname, CStrRef newvalue) {
  FUNCTION_INJECTION_BUILTIN(ini_set);
  return f_ini_set(varname, newvalue);
}

inline int64 x_memory_get_allocation() {
  FUNCTION_NOPROFILE_BUILTIN(memory_get_allocation);
  return f_memory_get_allocation();
}

inline int64 x_memory_get_peak_usage(bool real_usage = false) {
  FUNCTION_INJECTION_BUILTIN(memory_get_peak_usage);
  return f_memory_get_peak_usage(real_usage);
}

inline int64 x_memory_get_usage(bool real_usage = false) {
  FUNCTION_INJECTION_BUILTIN(memory_get_usage);
  return f_memory_get_usage(real_usage);
}

inline String x_php_ini_scanned_files() {
  FUNCTION_INJECTION_BUILTIN(php_ini_scanned_files);
  return f_php_ini_scanned_files();
}

inline String x_php_logo_guid() {
  FUNCTION_INJECTION_BUILTIN(php_logo_guid);
  return f_php_logo_guid();
}

inline String x_php_sapi_name() {
  FUNCTION_INJECTION_BUILTIN(php_sapi_name);
  return f_php_sapi_name();
}

inline String x_php_uname(CStrRef mode = null_string) {
  FUNCTION_INJECTION_BUILTIN(php_uname);
  return f_php_uname(mode);
}

inline bool x_phpcredits(int flag = 0) {
  FUNCTION_INJECTION_BUILTIN(phpcredits);
  return f_phpcredits(flag);
}

inline bool x_phpinfo(int what = 0) {
  FUNCTION_INJECTION_BUILTIN(phpinfo);
  return f_phpinfo(what);
}

inline String x_phpversion(CStrRef extension = null_string) {
  FUNCTION_INJECTION_BUILTIN(phpversion);
  return f_phpversion(extension);
}

inline bool x_putenv(CStrRef setting) {
  FUNCTION_INJECTION_BUILTIN(putenv);
  return f_putenv(setting);
}

inline bool x_set_magic_quotes_runtime(bool new_setting) {
  FUNCTION_INJECTION_BUILTIN(set_magic_quotes_runtime);
  return f_set_magic_quotes_runtime(new_setting);
}

inline void x_set_time_limit(int seconds) {
  FUNCTION_INJECTION_BUILTIN(set_time_limit);
  f_set_time_limit(seconds);
}

inline String x_sys_get_temp_dir() {
  FUNCTION_INJECTION_BUILTIN(sys_get_temp_dir);
  return f_sys_get_temp_dir();
}

inline Variant x_version_compare(CStrRef version1, CStrRef version2, CStrRef sop = null_string) {
  FUNCTION_INJECTION_BUILTIN(version_compare);
  return f_version_compare(version1, version2, sop);
}

inline String x_zend_logo_guid() {
  FUNCTION_INJECTION_BUILTIN(zend_logo_guid);
  return f_zend_logo_guid();
}

inline int x_zend_thread_id() {
  FUNCTION_INJECTION_BUILTIN(zend_thread_id);
  return f_zend_thread_id();
}

inline String x_zend_version() {
  FUNCTION_INJECTION_BUILTIN(zend_version);
  return f_zend_version();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_OPTIONS_H__
