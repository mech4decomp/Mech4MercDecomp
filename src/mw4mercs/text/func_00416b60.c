/*
 * FUN_00416b60 (25 B) — wrapper: calls FUN_00416b80(param1) and returns
 * the found node's data pointer (node+0xc), or 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b80(void);

__declspec(naked) void FUN_00416b60(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    eax
        call    FUN_00416b80
        test    eax, eax
        jz      L_16b74
        mov     eax, dword ptr [eax+0xc]
        ret     4
    L_16b74:
        xor     eax, eax
        ret     4
    }
}
