#ifndef MAKE_CUSTOM_AND_SELECTABLE_VERTICES_WRITER_H
#define MAKE_CUSTOM_AND_SELECTABLE_VERTICES_WRITER_H

#include "custom_and_selectable_vertices_writer.h"

///Create a 'custom_and_selectable_vertices_writer' object
template <class my_custom_vertex_map, class is_selected_map>
inline custom_and_selectable_vertices_writer<
  my_custom_vertex_map,
  is_selected_map
>
make_custom_and_selectable_vertices_writer(
  const my_custom_vertex_map& any_my_custom_vertex_map,
  const is_selected_map& any_is_selected_map
)
{
  return custom_and_selectable_vertices_writer<
    my_custom_vertex_map,
    is_selected_map
  >(
    any_my_custom_vertex_map,
    any_is_selected_map
  );
}

#endif // MAKE_CUSTOM_AND_SELECTABLE_VERTICES_WRITER_H
