/*
 * FUN_0068c2e0 (36 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Sets vtable 0x798e68, calls FUN_006b06d0 (sub-destructor on this),
 * then if (param_1 & 1) frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006b06d0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_0068c2e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00798e68
        call    FUN_006b06d0
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
