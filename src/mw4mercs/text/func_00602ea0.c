/*
 * FUN_00602ea0 (86 B) — __fastcall (ECX = this) release helper.
 *
 * Frees [this+8] if non-null, then inspects flags in [this+4]:
 * if bit0 set, clears the low 2 bits and (depending on bit1) calls
 * a virtual method with 3 or 1, then nulls [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00602ea0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_b6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_b6:
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_f0
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_e1
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x4], ecx
        jz      L_f0
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0x18]
        mov     dword ptr [esi + 0x4], edi
        pop     edi
        pop     esi
        ret
L_e1:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x4], ecx
        jz      L_f0
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0x18]
L_f0:
        mov     dword ptr [esi + 0x4], edi
        pop     edi
        pop     esi
        ret
    }
}
