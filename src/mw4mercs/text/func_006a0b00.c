/*
 * FUN_006a0b00 (80 B) — __thiscall (ECX = this). Clears a flag field at
 * this->0x14, invoking a virtual method (vtable+0xC) with arg 3 or 1
 * depending on the low flag bits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006a0b00(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        test    eax, 0xfffffffc
        jz      L_end
        mov     ecx, eax
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_clear
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_branch2
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x14], ecx
        jz      L_clear
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0xc]
        mov     dword ptr [esi + 0x14], 0
        pop     esi
        ret
    L_branch2:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x14], ecx
        jz      L_clear
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0xc]
    L_clear:
        mov     dword ptr [esi + 0x14], 0
    L_end:
        pop     esi
        ret
    }
}
