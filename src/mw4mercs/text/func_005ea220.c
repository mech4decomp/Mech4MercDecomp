/*
 * FUN_005ea220 (30 B) — __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ea330(void *param);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005ea220(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005ea330
        test    byte ptr [esp + 0x8], 0x1
        jz      L_A238
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_A238:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
