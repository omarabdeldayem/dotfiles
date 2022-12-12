# dotfiles

Dotfiles managed by [chezmoi](https://www.chezmoi.io/)


## Setup 

```Bash
apt-get udpate
apt-get install -y git curl
sh -c "$(curl -fsLS get.chezmoi.io)"
chezmoi init --apply https://github.com/omarabdeldayem/dotfiles.git
chezmoi cd
bash install.sh
```

## nvim 

Run :PackerInstall then :PackerCompile.
