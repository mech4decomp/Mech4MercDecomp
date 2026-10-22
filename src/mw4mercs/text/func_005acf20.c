/*
 * FUN_005acf20 (30 B) — __thiscall (ECX = this), RET 4 (one byte param).
 *
 * Calls FUN_004dd1c0() (this=ECX); if (param & 1) frees this via
 * FUN_004084e0; returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004dd1c0(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005acf20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 1
        jz      L_38
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_38:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
