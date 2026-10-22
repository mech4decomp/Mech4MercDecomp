/*
 * FUN_005cfcc0 (110 B) — __thiscall
 * Dispatches to a sub-object vtable method, then conditionally calls
 * vtable[0x178] and clears a field.
 */

__declspec(naked) void func_005cfcc0(void)
{
    __asm {
        push    ebx
        mov     ebx, [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     ecx, [esi + 0x364]
        test    ecx, ecx
        jz      L_e3
        mov     edx, [esp + 0x10]
        mov     eax, [ecx]
        push    ebx
        push    edx
        mov     edx, [esp + 0x14]
        push    edx
        push    esi
        call    dword ptr [eax + 0x1c]
    L_e3:
        test    bl, bl
        jnz     L_d29
        mov     eax, [esi + 0x364]
        test    eax, eax
        jz      L_d15
        mov     cl, byte ptr [eax + 0x1a]
        test    cl, cl
        jz      L_d11
        mov     eax, [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x178]
        mov     dword ptr [esi + 0x3d0], 0x0
        pop     esi
        pop     ebx
        ret     0xc
    L_d11:
        test    eax, eax
        jnz     L_d1f
    L_d15:
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x178]
    L_d1f:
        mov     dword ptr [esi + 0x3d0], 0x0
    L_d29:
        pop     esi
        pop     ebx
        ret     0xc
    }
}
