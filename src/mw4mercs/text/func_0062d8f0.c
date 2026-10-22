/*
 * FUN_0062d8f0 (27 B) — wrapper: zeroes a local and calls FUN_0041eb40(&local, 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void *a, int b);

__declspec(naked) void FUN_0062d8f0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 8]
        push    0x10
        lea     eax, [esp + 4]
        push    eax
        mov     dword ptr [esp + 8], 0
        call    FUN_0041eb40
        pop     ecx
        ret
    }
}
