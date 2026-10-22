/*
 * FUN_005f2cc0 (30 B) — __thiscall destructor.
 *
 * Calls FUN_004dd1c0 (thiscall, ECX=ESI); if (param & 1) frees via
 * FUN_004084e0. Returns this in EAX. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void);
extern void FUN_004084e0(void);

__declspec(naked) void *FUN_005f2cc0(void *this, int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 0x1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
