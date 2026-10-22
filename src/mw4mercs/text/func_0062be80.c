/*
 * FUN_0062BE80 (664 B) — Array compaction/insertion routine.
 *
 * Walks a 0x1c-byte-element array between param_1 and param_2, using
 * FUN_0062b5c0 as a predicate to decide whether to shift elements
 * (via rep movsd) left or right.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0062b5c0(void);

__declspec(naked) void FUN_0062be80(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        mov     ebx, dword ptr [esp + 0x48]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        mov     ecx, esi
        sub     ecx, ebx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x10
        push    edi
        jle     L_c023
        lea     eax, [ebx + 0x1c0]
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], eax
        jz      L_bfaa
        lea     ebp, [ebx + 0x1c]
        cmp     ebp, eax
        jz      L_bfaa
        lea     ecx, [ebp - 0x1c]
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_bed9
L_bed5:
        mov     ebx, dword ptr [esp + 0x54]
L_bed9:
        mov     ecx, 0x7
        mov     esi, ebp
        lea     edi, [esp + 0x18]
        rep movsd
        push    ebx
        lea     ecx, [esp + 0x1c]
        call    FUN_0062b5c0
        test    al, al
        jz      L_bf40
        mov     edx, dword ptr [esp + 0x10]
        lea     ebx, [edx + 0x38]
        mov     edx, dword ptr [esp + 0x54]
        mov     ecx, ebp
        sub     ecx, edx
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_bf31
        lea     eax, [ebx - 0x1c]
L_bf1d:
        sub     ebx, 0x1c
        sub     eax, 0x1c
        dec     edx
        mov     ecx, 0x7
        mov     esi, eax
        mov     edi, ebx
        rep movsd
        jnz     L_bf1d
L_bf31:
        mov     edi, dword ptr [esp + 0x54]
        mov     ecx, 0x7
        lea     esi, [esp + 0x18]
        jmp     L_bf8a
L_bf40:
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, 0x7
        lea     esi, [esp + 0x18]
        lea     edi, [esp + 0x34]
        rep movsd
        mov     ecx, ebx
        push    ecx
        lea     ecx, [esp + 0x38]
        mov     edi, ebp
        call    FUN_0062b5c0
        test    al, al
        jz      L_bf81
L_bf65:
        mov     esi, ebx
        mov     ecx, 0x7
        rep movsd
        mov     edi, ebx
        sub     ebx, 0x1c
        push    ebx
        lea     ecx, [esp + 0x38]
        call    FUN_0062b5c0
        test    al, al
        jnz     L_bf65
L_bf81:
        mov     ecx, 0x7
        lea     esi, [esp + 0x34]
L_bf8a:
        mov     eax, dword ptr [esp + 0x14]
        rep movsd
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 0x1c
        add     ecx, 0x1c
        cmp     ebp, eax
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_bed5
        mov     esi, dword ptr [esp + 0x58]
L_bfaa:
        mov     ebp, eax
        cmp     ebp, esi
        jz      L_c110
        lea     ebx, [ebp - 0x1c]
        mov     dword ptr [esp + 0x54], ebx
        jmp     L_bfc1
L_bfbd:
        mov     ebx, dword ptr [esp + 0x54]
L_bfc1:
        mov     ecx, 0x7
        mov     esi, ebp
        lea     edi, [esp + 0x34]
        rep movsd
        push    ebx
        lea     ecx, [esp + 0x38]
        mov     edi, ebp
        call    FUN_0062b5c0
        test    al, al
        jz      L_bffa
L_bfde:
        mov     esi, ebx
        mov     ecx, 0x7
        rep movsd
        mov     edi, ebx
        sub     ebx, 0x1c
        push    ebx
        lea     ecx, [esp + 0x38]
        call    FUN_0062b5c0
        test    al, al
        jnz     L_bfde
L_bffa:
        mov     eax, dword ptr [esp + 0x58]
        mov     ecx, 0x7
        lea     esi, [esp + 0x34]
        rep movsd
        mov     ecx, dword ptr [esp + 0x54]
        add     ebp, 0x1c
        add     ecx, 0x1c
        cmp     ebp, eax
        mov     dword ptr [esp + 0x54], ecx
        jnz     L_bfbd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
L_c023:
        cmp     ebx, esi
        jz      L_c110
        lea     ebp, [ebx + 0x1c]
        cmp     ebp, esi
        jz      L_c110
        lea     edx, [ebp - 0x1c]
        mov     dword ptr [esp + 0x10], edx
        jmp     L_c043
L_c03f:
        mov     ebx, dword ptr [esp + 0x54]
L_c043:
        mov     ecx, 0x7
        mov     esi, ebp
        lea     edi, [esp + 0x34]
        rep movsd
        push    ebx
        lea     ecx, [esp + 0x38]
        call    FUN_0062b5c0
        test    al, al
        jz      L_c0aa
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x54]
        lea     ebx, [eax + 0x38]
        mov     ecx, ebp
        sub     ecx, edi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    edx, edx
        jle     L_c09b
        lea     eax, [ebx - 0x1c]
L_c087:
        sub     ebx, 0x1c
        sub     eax, 0x1c
        dec     edx
        mov     ecx, 0x7
        mov     esi, eax
        mov     edi, ebx
        rep movsd
        jnz     L_c087
L_c09b:
        mov     edi, dword ptr [esp + 0x54]
        mov     ecx, 0x7
        lea     esi, [esp + 0x34]
        jmp     L_c0f4
L_c0aa:
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, 0x7
        lea     esi, [esp + 0x34]
        lea     edi, [esp + 0x18]
        rep movsd
        mov     edx, ebx
        push    edx
        lea     ecx, [esp + 0x1c]
        mov     edi, ebp
        call    FUN_0062b5c0
        test    al, al
        jz      L_c0eb
L_c0cf:
        mov     esi, ebx
        mov     ecx, 0x7
        rep movsd
        mov     edi, ebx
        sub     ebx, 0x1c
        push    ebx
        lea     ecx, [esp + 0x1c]
        call    FUN_0062b5c0
        test    al, al
        jnz     L_c0cf
L_c0eb:
        mov     ecx, 0x7
        lea     esi, [esp + 0x18]
L_c0f4:
        mov     eax, dword ptr [esp + 0x58]
        rep movsd
        mov     ecx, dword ptr [esp + 0x10]
        add     ebp, 0x1c
        add     ecx, 0x1c
        cmp     ebp, eax
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_c03f
L_c110:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
    }
}
