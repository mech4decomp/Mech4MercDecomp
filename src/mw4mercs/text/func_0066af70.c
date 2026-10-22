/*
 * FUN_0066af70 (36 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Sets vtable 0x796b24, calls FUN_00415380 (sub-destructor on this),
 * then if (param_1 & 1) frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_0066af70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00796b24
        call    FUN_00415380
        test    byte ptr [esp + 8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
