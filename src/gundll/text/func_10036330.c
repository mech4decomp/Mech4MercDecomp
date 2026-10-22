/*
 * FUN_10036330 (66 B) — __thiscall, RET 0x10 (ECX = this, 4 stack params).
 * Computes iVar1 from param_4 (0->4, 1->1, 2->2, else 0), then calls
 * vtable method [*(this+0xc) + 0x20] with (this, param_1+0x14, param_2,
 * param_3, iVar1).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10036330(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        xor     edx, edx
        test    eax, eax
        jnz     L41
        mov     edx, 0x4
        jmp     L51
    L41:
        cmp     eax, 0x1
        jnz     L4a
        mov     edx, eax
        jmp     L51
    L4a:
        cmp     eax, 0x2
        jnz     L51
        mov     edx, eax
    L51:
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [eax + 0x14]
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x20]
        pop     esi
        ret     0x10
    }
}
