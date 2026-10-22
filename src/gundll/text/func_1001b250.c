/*
 * FUN_1001b250 (46 B) — __thiscall, RET 0x8.
 * Bounds-checked buffer copy helper.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037ef1(void);

__declspec(naked) void FUN_1001b250(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x80]
        cmp     dword ptr [esp + 0x8], eax
        jnc     L2
        mov     eax, 0xc1120002
        ret     0x8
    L2:
        push    eax
        mov     eax, dword ptr [esp + 0x8]
        add     ecx, 0x84
        push    ecx
        push    eax
        call    FUN_10037ef1
        add     esp, 0xc
        xor     eax, eax
        ret     0x8
    }
}
