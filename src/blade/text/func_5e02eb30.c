/*
 * FUN_5e02eb30 (51 B) - codepage mapping. Maps 0x3a4/0x3a8/0x3b5/0x3b6
 * to 0x411/0x804/0x412/0x404, else 0.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e02eb30(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     eax, 0x3a4
        jz      Lb5d
        sub     eax, 4
        jz      Lb57
        sub     eax, 0xd
        jz      Lb51
        dec     eax
        jz      Lb4b
        xor     eax, eax
        ret
    Lb4b:
        mov     eax, 0x404
        ret
    Lb51:
        mov     eax, 0x412
        ret
    Lb57:
        mov     eax, 0x804
        ret
    Lb5d:
        mov     eax, 0x411
        ret
    }
}
