configure_file(
  input : 'version.h.in',
  output : 'version.h',
  configuration : conf_data)

libtend = shared_library('tend',
                         'main.cpp',
                         include_directories : includedir,
                         dependencies : deps)
