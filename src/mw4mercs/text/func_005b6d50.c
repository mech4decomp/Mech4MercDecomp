/*
 * FUN_005b6d50 (30 B) — __thiscall destructor (ECX = this), RET 4.
 *
 * Calls FUN_005b6eb0(this), then if (flag & 1) calls FUN_004084e0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b6eb0(void);
extern void __cdecl FUN_004084e0(void *this);

__declspec(naked) void __stdcall FUN_005b6d50(void *this, unsigned int flag)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b6eb0
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
