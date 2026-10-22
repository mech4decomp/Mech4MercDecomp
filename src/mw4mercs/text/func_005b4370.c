/*
 * FUN_005b4370 (27 B) — __thiscall constructor, RET 4 (1 stack param).
 *
 * Saves this (ECX) in ESI, calls FUN_005f3990(this, param), then
 * FUN_005b4290(this, param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f3990(void);
extern void __stdcall FUN_005b4290(void);

__declspec(naked) void __stdcall FUN_005b4370(void)
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
        call    FUN_005b4290
        pop     edi
        pop     esi
        ret     0x4
    }
}
