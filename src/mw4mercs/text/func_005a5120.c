/*
 * FUN_005a5120 (27 B) — Method that calls FUN_005f3990 then FUN_005a5110.
 *
 * __thiscall (ECX = this), 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f3990(void);
extern void __cdecl FUN_005a5110(void);

__declspec(naked) void FUN_005a5120(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005f3990
        push    edi
        mov     ecx, esi
        call    FUN_005a5110
        pop     edi
        pop     esi
        ret     0x4
    }
}
