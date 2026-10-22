/*
 * FUN_005eee90 (30 B) — __thiscall (ECX = this), RET 4 (1 stack param: flags).
 *
 * Destructor: calls FUN_005eef70, then if (flags & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005eef70(void);
extern void __stdcall FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_005eee90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005eef70
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
