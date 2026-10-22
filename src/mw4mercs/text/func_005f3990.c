/*
 * FUN_005f3990 (27 B) — __thiscall, RET 4 (1 stack param).
 *
 * Calls FUN_005f88e0(param) then FUN_005f37e0(param) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f88e0(void);
extern void FUN_005f37e0(void);

__declspec(naked) void __fastcall FUN_005f3990(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_005f88e0
        push    edi
        mov     ecx, esi
        call    FUN_005f37e0
        pop     edi
        pop     esi
        ret     4
    }
}
