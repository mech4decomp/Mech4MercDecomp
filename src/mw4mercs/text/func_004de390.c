/*
 * FUN_004de390 (650 B) — MLR/Adept mapping-group lookup/remove + dispatch.
 * __thiscall, RET 0xC (3 params: group id, sub-id, arg). Removes a matching
 * entry from a 0x24-byte-element array, then dispatches on group id via a
 * jump table (0x4de61c) to call the appropriate sub-object's vtable[+8]
 * method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern int g_jt_4de61c[];   /* jump table @ 0x4de61c */

__declspec(naked) void FUN_004de390(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x24]
        push    edi
        mov     edi, dword ptr [ebx + 0x20]
        cmp     edi, eax
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0x4], 0x0
        jz      L41A
        push    esi
        lea     esi, [edi + 0x24]
        mov     dword ptr [ebp - 0xc], esi
L3B5:
        mov     eax, dword ptr [esi - 0x14]
        cmp     eax, dword ptr [ebp + 0x8]
        jnz     L408
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     dword ptr [esi - 0x10], ecx
        jnz     L408
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     esi, ecx
        jz      L3FA
        sub     ecx, esi
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L3FA
L3E3:
        dec     edx
        lea     eax, [edi + 0x24]
        mov     ecx, 0x9
        mov     esi, eax
        rep     movsd
        mov     edi, eax
        jnz     L3E3
        mov     edi, dword ptr [ebp - 0x8]
        mov     esi, dword ptr [ebp - 0xc]
L3FA:
        mov     eax, dword ptr [ebx + 0x24]
        add     eax, -0x24
        mov     dword ptr [ebx + 0x24], eax
        inc     dword ptr [ebp - 0x4]
        jmp     L414
L408:
        add     edi, 0x24
        add     esi, 0x24
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0xc], esi
L414:
        cmp     edi, dword ptr [ebx + 0x24]
        jnz     L3B5
        pop     esi
L41A:
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0xa
        ja      L5FD
        jmp     dword ptr [eax*4 + g_jt_4de61c]
L42D:
        mov     ecx, dword ptr [ebx + 0x34]
        test    ecx, ecx
        jz      L60F
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x5
        jnc     L60F
        mov     edx, dword ptr [ecx + eax*4 + 0x24]
        test    edx, edx
        jz      L60F
        mov     edx, dword ptr [ebx + 0x38]
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        mov     eax, dword ptr [edx + ecx*4]
        lea     ecx, [edx + ecx*4]
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        call    dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L474:
        mov     eax, dword ptr [ebx + 0x34]
        test    eax, eax
        jz      L60F
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, dword ptr [eax]
        jnc     L60F
        lea     eax, [ecx*8 + 0x0]
        sub     eax, ecx
        mov     ecx, dword ptr [ebx + 0x3c]
        mov     edx, dword ptr [ecx + eax*4]
        lea     ecx, [ecx + eax*4]
        mov     eax, dword ptr [ebp + 0x10]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L4AE:
        mov     eax, dword ptr [ebx + 0x34]
        test    eax, eax
        jz      L60F
        cmp     dword ptr [eax + 0x20], 0x1
        jnz     L60F
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x4
        jnc     L60F
        mov     edx, dword ptr [ebx + 0x40]
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        mov     eax, dword ptr [edx + ecx*4]
        lea     ecx, [edx + ecx*4]
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        call    dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L4F3:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebx + 0x44]
        add     ebx, 0x44
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L50D:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + 0x60]
        add     ebx, 0x60
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L527:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + 0x7c]
        add     ebx, 0x7c
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L541:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + 0x98]
        add     ebx, 0x98
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L561:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + 0xb4]
        add     ebx, 0xb4
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L581:
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + ecx*4 + 0xd0]
        lea     ebx, [ebx + ecx*4 + 0xd0]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L5AF:
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + ecx*4 + 0x15c]
        lea     ebx, [ebx + ecx*4 + 0x15c]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L5DD:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebx + 0x3b54]
        add     ebx, 0x3b54
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L5FD:
        push    0x773930
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L60F
        int     3
L60F:
        mov     eax, dword ptr [ebp - 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
