/*
 * FUN_005a4d10 (30 B) — __thiscall destructor with optional free.
 *
 * Calls FUN_005a4d30 (sub-destructor), then if flags & 1, frees this.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a4d30(void);
extern void __stdcall FUN_004084e0(void *ptr);

void __declspec(naked) __stdcall FUN_005a4d10(int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a4d30
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
