(require 'package)
(add-to-list 'package-archives '("melpa" . "https://melpa.org/packages/") t)
(package-initialize)

(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(eval-when-compile
  (require 'use-package))

(use-package company
  :ensure t
  :config
  (global-company-mode))

(use-package lsp-mode
  :ensure t
  :commands lsp
  :config
  (setq lsp-prefer-flymake nil) ; Use lsp-ui and flycheck instead of flymake
  (add-hook 'c-mode-hook 'lsp)
  (add-hook 'c++-mode-hook 'lsp))

(use-package lsp-ui
  :ensure t
  :commands lsp-ui-mode)

(use-package company-lsp
  :ensure t
  :config
  (push 'company-lsp company-backends))

(use-package doom-themes
  :ensure t
  :config
  (load-theme 'doom-one t))

(setq custom-file "~/.emacs.d/custom.el")
(load custom-file t)

(setq inhibit-startup-screen t)
