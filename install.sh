# Applications list
APPS=("zsh" "i3" "tmux" "gh" "ripgrep" "ninja-build" "gettext" "libtool" "libtool-bin" "autoconf" "automake" "cmake" "g++" "pkg-config" "unzip" "curl" "doxygen")

# Check if root
if [ $UID = 0 ] ; then
  SUDO_PREFIX=""
else
  SUDO_PREFIX="sudo"
fi

# Install apps
if [ -f "/etc/debian_version" ]; then
  ${SUDO_PREFIX} apt-get -y install ${APPS[@]}
else
  ${SUDO_PREFIX} yum -y install ${APPS[@]}
fi

# Install starship
curl -sS https://starship.rs/install.sh | sh

# Install NVIM
git clone https://github.com/neovim/neovim.git
cd neovim
git checkout v0.8.0
make CMAKE_BUILD_TYPE=RelWithDebInfo
${SUDO_PREFIX} make install

# TODO: Don't clobber by default
cp -r nvim ~/.config/nvim
cp -r i3 ~/.config/i3
cp -r polybar ~/.config/polybar

cp dot_zshrc ~/.zshrc
cp -r dot_oh-my-zsh ~/.oh-my-zsh
cp dot_tmux_conf ~/.tmux.conf
