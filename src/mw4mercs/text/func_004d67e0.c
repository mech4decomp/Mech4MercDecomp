/*
 * FUN_004D67E0 (34 B) — Conditional cleanup (__thiscall, RET 4).
 *
 * If bit 6 of param_1->field_10 is set, calls FUN_004154D0(this + 0x14)
 * and clears bit 6.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(int ptr);

__declspec(naked) void __fastcall FUN_004d67e0(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 8]
        mov     eax, [esi + 0x10]
        shr     eax, 6
        test    al, 1
        jz      l_done
        add     ecx, 0x14
        push    ecx
        mov     ecx, esi
        call    FUN_004154d0
        and     dword ptr [esi + 0x10], 0xffffffbf
    l_done:
        pop     esi
        ret     4
    }
}
