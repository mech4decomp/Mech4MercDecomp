// Auto-generated: memcpy 36 bytes (9 dwords), null-safe on src
// FUN_0050ce70, 24 bytes

__declspec(naked) void func_0050ce70(void)
{
    __asm {
        push edi
        mov edi, [esp+8]    // src
        test edi, edi
        jz skip_copy
        push esi
        mov esi, [esp+0x10] // dst
        mov ecx, 9
        rep movsd
        pop esi
skip_copy:
        pop edi
        ret
    }
}
