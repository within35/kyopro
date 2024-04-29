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
  code: "import collections\nimport math\n\ndef prime_factor(n):\n    a = []\n   \
    \ while n % 2 == 0:\n        a.append(2)\n        n //= 2\n    f = 3\n    while\
    \ f * f <= n:\n        if n % f == 0:\n            a.append(f)\n            n\
    \ //= f\n        else:\n            f += 2\n    if n != 1:\n        a.append(n)\n\
    \    return a"
  dependsOn: []
  isVerificationFile: false
  path: snippets.py
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: snippets.py
layout: document
redirect_from:
- /library/snippets.py
- /library/snippets.py.html
title: snippets.py
---
