/*
 * FUN_006a4160 (40 B) — __thiscall destructor-style helper.
 *
 * Calls FUN_006a22e0(this+0xC) then FUN_006a22e0(this).
 * If (param & 1) != 0, calls FUN_004084e0(this).
 * Returns this in EAX. RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_006a4160(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0xC]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
