#!/bin/bash

# 检查是否提供了提交信息参数
if [ -z "$1" ]; then
#   echo "请提供提交信息作为参数。"
#   echo "用法: ./push.sh '你的提交信息'"
  exit 1
fi

# 将参数作为提交信息
git add .
git commit -m "$1"
git push origin main
