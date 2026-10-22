/*
 * FUN_10003560 (17 B) - sets vtable, calls DeleteCriticalSection on this+0x24.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021038;   /* IAT slot: DeleteCriticalSection */

__declspec(naked) void __cdecl FUN_10003560(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10021228
        add     ecx, 0x24
        push    ecx
        call    dword ptr [g_10021038]
        ret
    }
}
