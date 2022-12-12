local M = {}

M.treesitter = {
  ensure_installed = {
    "vim",
    "lua",
    "cpp",
    "verilog",
    "rust",
    "c",
  },
}

M.mason = {
  ensure_installed = {
    "lua-language-server",
    "stylua",
    "clangd",
    "clang-format",
    "cpplint",
    "markdownlint",
    "pyright",
    "cpptools",
    "cmakelang",
    "rust-analyzer",
    "svls",
    "bash-language-server",
  },
}

-- git support in nvimtree
M.nvimtree = {
  git = {
    enable = true,
  },

  renderer = {
    highlight_git = true,
    icons = {
      show = {
        git = true,
      },
    },
  },
}

return M
