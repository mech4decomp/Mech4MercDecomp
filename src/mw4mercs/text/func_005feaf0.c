/*
 * FUN_005feaf0 (30 B) — __thiscall (RET 4) destructor-style wrapper.
 *
 * Calls FUN_005feb10() (thiscall on this), then if the low bit of the
 * flag param is set, frees this via FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005feb10(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005feaf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005feb10
        test    byte ptr [esp + 8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
