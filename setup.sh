#!/bin/sh
set -e

cd "$(git rev-parse --show-toplevel)"

if ! command -v clang-format >/dev/null 2>&1; then
  echo "Warning: clang-format not found in PATH. Install it before committing."
fi

hook="$(git rev-parse --git-path hooks/pre-commit)"

cat > "$hook" << 'EOF'
#!/bin/sh
# Format staged C/C++ files with clang-format before each commit
files=$(git diff --cached --name-only --diff-filter=ACM -z | tr '\0' '\n' | grep -E '\.(cpp|cc|cxx|h|hpp)$')
[ -z "$files" ] && exit 0

echo "$files" | while IFS= read -r f; do
  clang-format -i "$f"
  git add "$f"
done
EOF

chmod +x "$hook"
echo "Done."
