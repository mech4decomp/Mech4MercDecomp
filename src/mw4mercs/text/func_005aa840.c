/*
 * FUN_005aa840 (30 B) — Destructor. Calls FUN_005aa860 (thiscall, ECX=this),
 * then if (param & 1) frees this via FUN_004084e0. Returns this in EAX.
 * __thiscall, RET 0x4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005aa860(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_005aa840(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005aa860
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
