local M = {}

M.ui = {
  theme = "catppuccin",
  hl_override = {
    DiffAdd = {
      fg = "green",
    },
    DiffChange = {
      fg = "blue",
    },
    DiffDelete = {
      fg = "red",
    },
    DiffChangeDelete = {
      fg = "orange",
    },
  },
}

M.plugins = require "custom.plugins"
M.mappings = require "custom.mappings"

return M
