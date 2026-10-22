/*
 * FUN_005b8e90 (30 B) — Destructor. __thiscall (ECX = this), RET 0x4
 * (one stack param = flags). Calls FUN_005b8f00(this), then if (flags&1)
 * frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b8f00(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005b8e90(void *flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b8f00
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
