/*
 * FUN_005f86a0 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_005f89d0, then conditionally frees this based on a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f89d0(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005f86a0(void *p1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f89d0
        test    byte ptr [esp + 0x8], 0x1
        jz      loc_86b8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_86b8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
