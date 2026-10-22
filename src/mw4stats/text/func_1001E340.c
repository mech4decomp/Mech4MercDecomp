/*
 * FUN_1001e340 (58 B) - __stdcall (2 args, RET 0x8). Validates the output
 * pointer via IsBadWritePtr, checks a sub-object at +0x18, and returns the
 * dword at sub+0x8 through param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001e340 (58 B, __stdcall, 2 params) - validates param_2 via
 * IsBadWritePtr(param_2, 4); if bad returns E_INVALIDARG (0x80070057),
 * else reads the sub-object at param_1+0x18 (E_FAIL 0x80040290 if null)
 * and stores its +0x8 dword through param_2, returning S_OK.
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_1001e340(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    0x4
        push    esi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_e35b
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L_e35b:
        mov     eax, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jnz     L_e36f
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
L_e36f:
        mov     ecx, dword ptr [eax + 0x8]
        xor     eax, eax
        mov     dword ptr [esi], ecx
        pop     esi
        ret     0x8
    }
}
