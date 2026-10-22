/*
 * FUN_004E50B0 (35 B) — Two-call helper (__thiscall, RET 4).
 *
 * Calls FUN_004B5E40(param_1), then FUN_00482220(param_1 + 0x40, param_1 + 0x44).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004b5e40(int param);
extern void __cdecl FUN_00482220(int a, int b);

__declspec(naked) void __fastcall FUN_004e50b0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004b5e40
        mov     ecx, [esi + 0x10]
        lea     eax, [edi + 0x44]
        push    eax
        add     edi, 0x40
        push    edi
        call    FUN_00482220
        pop     edi
        pop     esi
        ret     4
    }
}
