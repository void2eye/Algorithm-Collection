#!/bin/bash

# 第一个参数为要上传的文件或目录，默认为当前目录 (.)
TARGET="${2:-.}"

# 检查是否提供了提交信息
if [ -z "$1" ]; then
  echo "请提供提交信息。"
  echo "用法: ./push.sh [文件或目录] '提交信息'"
  exit 1
fi

# 检查当前目录是否是一个 Git 仓库
if [ ! -d ".git" ]; then
  echo "当前目录不是一个 Git 仓库。"
  exit 1
fi

# 获取当前分支名
BRANCH=$(git rev-parse --abbrev-ref HEAD)

# 将指定的文件或目录添加到 Git 暂存区
git add "$TARGET"

# 提交更改
git commit -m "$1"
if [ $? -ne 0 ]; then
  echo "提交失败，请检查修改。"
  exit 1
fi

# 推送到当前分支
git push origin "$BRANCH"
