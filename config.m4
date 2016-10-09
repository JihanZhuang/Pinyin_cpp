PHP_ARG_ENABLE(pinyin,
    [Whether to enable the "pinyin" extension],
    [  --enable-pinyin      Enable "pinyin" extension support])
 
if test $PHP_PINYIN != "no"; then
    PHP_REQUIRE_CXX()
    PHP_SUBST(PINYIN_SHARED_LIBADD)
    PHP_ADD_LIBRARY(stdc++, 1, PINYIN_SHARED_LIBADD)
    PHP_NEW_EXTENSION(pinyin, pinyin.cpp, $ext_shared)
fi
