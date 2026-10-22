/*
 * FUN_005e6da0 (27 B) — __thiscall method (RET 4, one stack param).
 *
 * Saves this (ECX) in ESI and param in EDI, calls FUN_005eef30(param)
 * then FUN_005e6dc0(param) with this in ECX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005eef30(void);
extern void FUN_005e6dc0(void);

__declspec(naked) void func_005e6da0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005eef30
        push    edi
        mov     ecx, esi
        call    FUN_005e6dc0
        pop     edi
        pop     esi
        ret     4
    }
}
