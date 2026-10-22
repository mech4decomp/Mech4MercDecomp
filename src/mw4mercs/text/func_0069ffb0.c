/*
 * FUN_0069ffb0 (30 B) — scalar deleting destructor (__thiscall, RET 0x4).
 * Calls base dtor FUN_006a0250, then if (flags & 1) operator delete via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a0250(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0069ffb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a0250
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
