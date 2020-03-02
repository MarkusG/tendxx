project(
  'hubrelease',
  'cpp',
  version : '0.1.0',
  default_options : ['cpp_std=c++17']
)

release_date = 'January 1, 1970'

conf_data = configuration_data()

conf_data.set('version', meson.project_version())

includedir = include_directories('include')

# subdir('include')
subdir('src')
subdir('app')
