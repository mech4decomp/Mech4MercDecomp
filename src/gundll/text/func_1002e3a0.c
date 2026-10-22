/*
 * FUN_1002e3a0 (59 B) - __thiscall, RET 0x4. Stores this+0x14 into
 * this+0x1c and (this+0x10 - this+0x18) into this+0x20. If param_1
 * == 0xc1121c00, calls FUN_10037ef1(local, this+8, 0xf). Returns
 * param_1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037ef1(void);

__declspec(naked) void FUN_1002e3a0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [ecx + 0x14]
        sub     esp, 0x20
        push    esi
        sub     edx, dword ptr [ecx + 0x18]
        mov     esi, dword ptr [esp + 0x28]
        cmp     esi, 0xc1121c00
        mov     dword ptr [ecx + 0x1c], eax
        mov     dword ptr [ecx + 0x20], edx
        jnz     L_d2
        mov     eax, dword ptr [ecx + 0x8]
        push    0xf
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_10037ef1
        add     esp, 0xc
    L_d2:
        mov     eax, esi
        pop     esi
        add     esp, 0x20
        ret     0x4
    }
}
