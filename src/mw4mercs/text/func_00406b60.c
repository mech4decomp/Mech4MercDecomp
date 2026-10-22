/*
 * FUN_00406b60 (27 B) -- forwards two args through the function pointer at
 * 0x76b598 and returns a boolean (nonzero on success).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b598;

__declspec(naked) void FUN_00406b60(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esp+0x4]
        push    1
        push    eax
        push    ecx
        push    0
        call    dword ptr [g_0076b598]
        dec     eax
        neg     eax
        sbb     eax, eax
        inc     eax
        ret
    }
}
