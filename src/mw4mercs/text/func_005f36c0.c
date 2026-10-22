/*
 * FUN_005f36c0 (30 B) — Scalar deleting destructor (__thiscall, RET 4).
 *
 * Calls FUN_005f36e0() on this, then if (param & 1) frees this via
 * FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f36e0(void);
extern void FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_005f36c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f36e0
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
