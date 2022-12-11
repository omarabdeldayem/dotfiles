local M = {}

M.general = {
  n = {
      ["<leader>q"] = { "<cmd> quit <CR>", ""},
    },
}

M.neogen = {
  n = {
    ["<leader>nF"] = { "<cmd> Neogen file <CR>", "Neogen file"},
    ["<leader>nf"] = { "<cmd> Neogen func <CR>", "Neogen function"},
    ["<leader>nc"] = { "<cmd> Neogen class <CR>", "Neogen class"},
  },
}

M.git = {
  n = {
    ["<leader>gp"] = { "<cmd> Gitsigns preview_hunk <CR>", "  git preview hunk" },
    ["<leader>gS"] = { "<cmd> Gitsigns stage_hunk <CR>", "  git stage hunk" },
    ["<leader>gu"] = { "<cmd> Gitsigns undo_stage_hunk <CR>", "  git undo stage hunk" },
    ["<leader>gR"] = { "<cmd> Gitsigns reset_hunk <CR>", "  git reset hunk" },
    ["<leader>gd"] = { "<cmd> Gitsigns diffthis <CR>", "  git diff" },
  },
}

return M
