/*
 * FUN_005bce30 (25 B) — __stdcall, 1 arg (RET 4). Calls FUN_004d6230(arg),
 *   then dispatches a virtual method at vtable+0xc4 on arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d6230(void *p);

__declspec(naked) void __stdcall FUN_005bce30(void *arg)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_004d6230
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xc4]
        pop     esi
        ret     4
    }
}
