{{ ansible_managed|comment }}


require "date";
require "editheader";
require "variables";

if not exists ["date"] {
  if currentdate :matches "std11" "*" { set "date" "${1}"; }
  addheader "date" "${date}";
}
