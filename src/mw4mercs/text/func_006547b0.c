/*
 * FUN_006547b0 (163 B) — __thiscall (ECX = this). Nested loop over a
 * 2D array indexed by *(param+0x14)/*(param+0x18) and
 * *(param+0x20), comparing entries at +0x18 against -1. Returns
 * AL=1 on match else 0. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_006547b0(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [ecx + 0x400004]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x20]
        mov     dword ptr [esp + 0x10], esi
        lea     esi, [edx + edx*0x2]
        lea     ecx, [ecx + esi*0x4]
        lea     esi, [ebp + ebp*0x4]
        push    edi
        mov     edi, dword ptr [ecx]
        shl     esi, 0x3
        cmp     dword ptr [esi + edi*0x1 + 0x18], -0x1
        mov     byte ptr [esp + 0x1c], 0x0
        jz      L_7f1
        mov     byte ptr [esp + 0x1c], 0x1
L_7f1:
        cmp     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x10], edx
        jg      L_83b
        mov     edi, ecx
L_7fd:
        cmp     ebp, eax
        mov     edx, ebp
        jg      L_827
        mov     ecx, esi
L_805:
        mov     bl, byte ptr [esp + 0x1c]
        test    bl, bl
        mov     ebx, dword ptr [edi]
        jz      L_818
        cmp     dword ptr [ecx + ebx*0x1 + 0x18], -0x1
        jz      L_847
        jmp     L_81f
L_818:
        cmp     dword ptr [ecx + ebx*0x1 + 0x18], -0x1
        jnz     L_847
L_81f:
        inc     edx
        add     ecx, 0x28
        cmp     edx, eax
        jle     L_805
L_827:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        inc     ecx
        add     edi, 0xc
        cmp     ecx, edx
        mov     dword ptr [esp + 0x10], ecx
        jle     L_7fd
L_83b:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8
        ret     0x4
L_847:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
