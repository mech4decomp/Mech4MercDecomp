/*
 * FUN_005a00d0 (30 B) — __thiscall destructor-like function.
 * Calls FUN_004dd1c0 (sub-destructor), then if param bit 0 is set,
 * frees this via FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd1c0(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005a00d0(int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 8], 1
        jz      label_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4

label_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
