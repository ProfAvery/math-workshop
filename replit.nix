{ pkgs }: {
    deps = [
        pkgs.fzf
        pkgs.clang_12
        pkgs.ccls
        pkgs.gdb
        pkgs.gnumake
    ];
}
