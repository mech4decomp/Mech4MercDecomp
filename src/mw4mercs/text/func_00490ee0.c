/*
 * FUN_00490ee0 (36 B) — __thiscall, RET 4 (1 byte param on stack).
 * Destructor: sets vtable, calls FUN_00416320, optionally frees self.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416320(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void * __fastcall FUN_00490ee0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76ffe0
        call    FUN_00416320
        test    byte ptr [esp + 0x8], 0x1
        jz      l_ret
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_ret:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
