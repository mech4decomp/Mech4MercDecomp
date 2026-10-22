/*
 * FUN_1001e300 (58 B) - __stdcall (2 args, RET 0x8). Validates the output
 * pointer via IsBadWritePtr, checks a sub-object at +0x18, and returns the
 * dword at sub+0xc through param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001e300 (58 B, __stdcall, 2 params) -- validates param_2 via
 * IsBadWritePtr(param_2, 4); if bad returns E_INVALIDARG (0x80070057).
 * Otherwise reads the sub-object at param_1+0x18; if null returns
 * 0x80040290, else stores *(sub+0xc) into *param_2 and returns S_OK.
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_1001e300(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    0x4
        push    esi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_e31b
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L_e31b:
        mov     eax, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax + 0x18]
        test    eax, eax
        jnz     L_e32f
        mov     eax, 0x80040290
        pop     esi
        ret     0x8
L_e32f:
        mov     ecx, dword ptr [eax + 0xc]
        xor     eax, eax
        mov     dword ptr [esi], ecx
        pop     esi
        ret     0x8
    }
}
