/*
 * FUN_10033f60 (34 B) — __stdcall, RET 0x4.
 * Calls virtual (*(*param_1)->vtable[0x10/4])(param_1); if the returned
 * short is nonzero, calls FUN_10033fd0 on param_1-6 and returns its
 * result; otherwise returns 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033fd0(void);

__declspec(naked) void __stdcall FUN_10033f60(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x10]
        test    ax, ax
        jbe     ret0
        lea     ecx, [esi - 0x18]
        call    FUN_10033fd0
        pop     esi
        ret     0x4
    ret0:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
