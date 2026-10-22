/*
 * FUN_005a17b0 (30 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 0x4 (one stack param: flags).
 * Calls destructor, then frees if flag & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void * __fastcall FUN_005a17b0(int this_ptr)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
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
