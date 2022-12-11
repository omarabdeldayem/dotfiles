# Applications list
APPS=("zsh" "i3" "tmux" "gh" "ninja-build" "gettext" "libtool" "libtool-bin" "autoconf" "automake" "cmake" "g++" "pkg-config" "unzip" "curl" "doxygen")

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

# Install NVIM
git clone https://github.com/neovim/neovim.git
cd neovim
git checkout v0.7.2
make CMAKE_BUILD_TYPE=RelWithDebInfo
${SUDO_PREFIX} make install

