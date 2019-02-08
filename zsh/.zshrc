# Path to oh-my-zsh installation
export ZSH=$HOME/.oh-my-zsh
export TERM="xterm-256color"

# Set name of the theme to load
ZSH_THEME="powerlevel9k/powerlevel9k"

# Configure powerlevel9k
POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(dir vcs)
POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(time)
POWERLEVEL9K_PROMPT_ADD_NEWLINE=true

# Uncomment the following line to use case-sensitive completion.
# CASE_SENSITIVE="true"

# Uncomment the following line to use hyphen-insensitive completion. Case
# sensitive completion must be off. _ and - will be interchangeable.
# HYPHEN_INSENSITIVE="true"

# Uncomment the following line to disable bi-weekly auto-update checks.
# DISABLE_AUTO_UPDATE="true"

# Uncomment the following line to change how often to auto-update (in days).
# export UPDATE_ZSH_DAYS=13

# Uncomment the following line to disable colors in ls.
# DISABLE_LS_COLORS="true"

# Uncomment the following line to disable auto-setting terminal title.
# DISABLE_AUTO_TITLE="true"

# Uncomment the following line to enable command auto-correction.
ENABLE_CORRECTION="true"

# Uncomment the following line to display red dots whilst waiting for completion.
COMPLETION_WAITING_DOTS="true"

# Uncomment the following line if you want to disable marking untracked files
# under VCS as dirty. This makes repository status check for large repositories
# much, much faster.
# DISABLE_UNTRACKED_FILES_DIRTY="true"

# Uncomment the following line if you want to change the command execution time
# stamp shown in the history command output.
# The optional three formats: "mm/dd/yyyy"|"dd.mm.yyyy"|"yyyy-mm-dd"
# HIST_STAMPS="mm/dd/yyyy"

# Would you like to use another custom folder than $ZSH/custom?
# ZSH_CUSTOM=/path/to/new-custom-folder

# Custom plugins may be added to ~/.oh-my-zsh/custom/plugins/
plugins=(git vim-interaction zsh-syntax-highlighting)

source $ZSH/oh-my-zsh.sh

# Setup $lang_home variables
export CONDA_HOME="$HOME/anaconda3"
export SCALA_HOME="$HOME/scala-2.12.1"
export JAVA_HOME="/usr/lib/jvm/java-8-oracle"

# Put Anaconda on the path
if [ -d "$CONDA_HOME" ] ; then
    export PATH="$CONDA_HOME/bin:$PATH"
fi

# Put Scala on the path
if [ -d "$HOME/scala-2.12.1" ] ; then
    export PATH="$SCALA_HOME/bin:$PATH"
fi

# Put Java on the path
if [ -d "/usr/lib/jvm/java-8-oracle" ] ; then
    export PATH="$JAVA_HOME/bin:$JAVA_HOME/db/bin:$JAVA_HOME/jre/bin:$PATH"
fi

# Put Julia on the path
if [ -d "$HOME/julia" ] ; then
    export PATH="$HOME/julia:$PATH"
fi

# Put Quartus on the path
if [ -d "$HOME/intelFPGA_lite" ]; then
    export PATH="$HOME/intelFPGA_lite/16.1/quartus/bin:$PATH"
fi

export QSYS_ROOTDIR="$HOME/intelFPGA_lite/16.1/quartus/sopc_builder/bin"
export ROBOSCHOOL_PATH="$HOME/Development/roboschool"
export NNN_USE_EDITOR=1

# Compilation flags
# export ARCHFLAGS="-arch x86_64"

# ssh
# export SSH_KEY_PATH="~/.ssh/rsa_id"

export PATH="$HOME/bin:/usr/local/bin:$PATH"

# ALIASES
alias zshconfig="gvim ~/.zshrc"
alias ohmyzsh="gvim ~/.oh-my-zsh"
alias g="gvim -p"
alias v="vim -p"
alias hi="history"
alias tor="/home/omar/Downloads/tor-browser_en-US/start-tor-browser.desktop"
alias jupyter="$HOME/anaconda3/bin/jupyter"
