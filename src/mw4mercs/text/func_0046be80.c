/*
 * FUN_0046BE80 (37 B) — Wrapper function.
 *
 * Calls FUN_0046FC50 (sub-routine), then calls virtual method at
 * vtable+0x24 with arg=4 and a local zero-initialized struct.
 *
 * __stdcall, RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0046FC50(void *param);

__declspec(naked) void __stdcall FUN_0046be80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_0046FC50
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, dword ptr [esp + 0xC]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0
        call    dword ptr [eax + 0x24]
        pop     esi
        ret     4
    }
}
