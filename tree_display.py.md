---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: py
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.12.3/x64/lib/python3.12/site-packages/onlinejudge_verify/languages/python.py\"\
    , line 96, in bundle\n    raise NotImplementedError\nNotImplementedError\n"
  code: "import itertools\n\n\ndef block_width(block):\n    try:\n        return block.index('\\\
    n')\n    except ValueError:\n        return len(block)\n\ndef stack_str_blocks(blocks):\n\
    \    builder = []\n    block_lens = [block_width(bl) for bl in blocks]\n    split_blocks\
    \ = [bl.split('\\n') for bl in blocks]\n\n    for line_list in itertools.zip_longest(*split_blocks,\
    \ fillvalue=None):\n        for i, line in enumerate(line_list):\n           \
    \ if line is None:\n                builder.append(' ' * block_lens[i])\n    \
    \        else:\n                builder.append(line)\n            if i != len(line_list)\
    \ - 1:\n                builder.append(' ')  # Padding\n        builder.append('\\\
    n')\n\n    return ''.join(builder[:-1])\n\nclass Node:\n    def __init__(self,\
    \ name, parent, *data):\n        self.name = name\n        self.parent = parent\n\
    \        self.data = data\n        self.children = []\n        self.is_root =\
    \ False\n\n    def add_child(self, name, *data):\n        child = Node(name, self,*data)\n\
    \        self.children.append(child)\n        return child\n    def display(self):\
    \ # Here\n        if not self.children:\n            return self.name\n\n    \
    \    child_strs = [child.display() for child in self.children]\n        child_widths\
    \ = [block_width(s) for s in child_strs]\n\n        # How wide is this block?\n\
    \        display_width = max(len(self.name),\n                    sum(child_widths)\
    \ + len(child_widths) - 1)\n\n        # Determines midpoints of child blocks\n\
    \        child_midpoints = []\n        child_end = 0\n        for width in child_widths:\n\
    \            child_midpoints.append(child_end + (width // 2))\n            child_end\
    \ += width + 1\n\n        # Builds up the brace, using the child midpoints\n \
    \       brace_builder = []\n        for i in range(display_width):\n         \
    \   if i < child_midpoints[0] or i > child_midpoints[-1]:\n                brace_builder.append('\
    \ ')\n            elif i in child_midpoints:\n                brace_builder.append('+')\n\
    \            else:\n                brace_builder.append('-')\n        brace =\
    \ ''.join(brace_builder)\n\n        name_str = '{:^{}}'.format(self.name, display_width)\n\
    \        below = stack_str_blocks(child_strs)\n\n        return name_str + '\\\
    n' + brace + '\\n' + below\n\nA = Node('A',Node)\nB = A.add_child('B')\nD = B.add_child('D')\n\
    C = A.add_child('C')\nE = C.add_child('E')\nF = C.add_child('F')\nG = C.add_child('G')\n\
    print(A.display())"
  dependsOn: []
  isVerificationFile: false
  path: tree_display.py
  requiredBy: []
  timestamp: '2024-03-24 01:28:25+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: tree_display.py
layout: document
redirect_from:
- /library/tree_display.py
- /library/tree_display.py.html
title: tree_display.py
---
