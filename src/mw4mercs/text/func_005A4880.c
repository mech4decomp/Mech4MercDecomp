/*
 * FUN_005A4880 (27 B) — __thiscall (RET 0x4). Calls FUN_005F3990(edi),
 * then FUN_005A4870(this, edi).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f3990(void);
extern void __cdecl FUN_005a4870(void);

__declspec(naked) void FUN_005A4880(void)
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
        call    FUN_005a4870
        pop     edi
        pop     esi
        ret     4
    }
}
