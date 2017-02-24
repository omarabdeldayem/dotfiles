set nocompatible

" VUNDLE
filetype off
" Set runtime path & init
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
" General Plugins 
Plugin 'sjl/gundo.vim'      " Visualize vim undo tree
Plugin 'ctrlpvim/ctrlp.vim' " Fuzzy finder
Plugin 'tpope/vim-fugitive' " Git wrapper
Plugin 'scrooloose/syntastic'       " Syntax checker
Plugin 'valloric/youcompleteme'     " Codecompletion engine
Plugin 'vim-airline/vim-airline'    " Command bar 
" Language Specific
Plugin 'c.vim'              " C/C++ IDE
call vundle#end()
filetype plugin indent on

" COLOURS
colorscheme molokai	        " Set colorscheme
syntax enable		        " Enable syntax processing
set colorcolumn=110
highlight ColorColumn ctermbg=darkgray
set laststatus=2

" SPACES & TABS
set tabstop=4		        " Insert 4 spaces on tab
set softtabstop=4
set expandtab

" CONFIG UI
set number		            " Show line numbers
set cursorline		        " Highlight current line
filetype indent on	        " Load filetype-specific indent files
set wildmenu		        " Show autocomplete options
set lazyredraw
set showmatch		        " Highlight matching parenthesis

" SEARCH
set incsearch		        " Search as characters are entered
set hlsearch		        " Highlight matches
" Turn off highlighted matches with space
nnoremap <leader><space> :nohlsearch<CR>

" FOLDING
set foldenable		        " Enable folding
set foldlevelstart=10	    " Open folds by default
set foldnestmax=10	        " Max 10 nested folds
set foldmethod=indent	    " Fold based on indent level

" MOVEMENT
" Highlight last inserted text 
nnoremap gV `[v`] 

" BACKUPS
set backup
set backupdir=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp
set backupskip=/tmp/*,/private/tmp/*
set directory=~/.vim-tmp,~/.tmp,~/tmp,/var/tmp,/tmp
set writebackup


