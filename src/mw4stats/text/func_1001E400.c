/*
 * FUN_1001e400 (42 B) - __stdcall (2 args, RET 0x8). Validates the output
 * pointer via IsBadWritePtr, then dispatches a virtual call at vtable+0x14
 * with (param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1001e400 (42 B, __stdcall, 2 params) -- validates param_2 via
 * IsBadWritePtr(param_2, 4); if bad returns E_INVALIDARG (0x80070057),
 * otherwise dispatches a virtual call at vtable+0x14 with (param_1, param_2).
 */

extern void *g_10021064;   /* IAT: IsBadWritePtr */

__declspec(naked) void __cdecl FUN_1001e400(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    0x4
        push    esi
        call    dword ptr [g_10021064]
        test    eax, eax
        jz      L_e41b
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
L_e41b:
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x14]
        pop     esi
        ret     0x8
    }
}
