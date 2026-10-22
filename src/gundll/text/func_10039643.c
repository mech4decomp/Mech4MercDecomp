/*
 * FUN_10039643 (42 B) - __cdecl. Exception-record classifier: returns 1 if
 * the pointed-to record matches the MSVC C++ exception signature
 * (0xe06d7363, code 3, magic 0x19930520, no flags), else 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10039643(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax]
        cmp     dword ptr [eax], 0xe06d7363
        jne     L_6a
        cmp     dword ptr [eax + 0x10], 0x3
        jne     L_6a
        cmp     dword ptr [eax + 0x14], 0x19930520
        jne     L_6a
        cmp     dword ptr [eax + 0x1c], 0x0
        jne     L_6a
        push    1
        pop     eax
        ret
L_6a:
        xor     eax, eax
        ret
    }
}
