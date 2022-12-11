# Applications list
APPS=("zsh" "i3" "tmux" "gh")

# Install apps
if [ -f "/etc/debian_version" ]; then
  sudo apt-get install ${APPS[@]}
else
  sudo yum -y install ${APPS[@]}
fi

# Install NVIM
gh repo clone neovim/neovim
cd neovim
git checkout v0.7.2
make CMAKE_BUILD_TYPE=RelWithDebInfo
sudo make install

