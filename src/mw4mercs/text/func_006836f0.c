/*
 * FUN_006836f0 (642 B) — HUD element list scan / aim-check family.
 * Iterates a list of HUD elements, checks element type (via FUN_004e7a90)
 * and a per-element flag at +0x34, does a random dispatch (jump table at
 * 0x683974, just past the function slice), then a merge/sort of the list
 * with a float comparison (aim-check) and random selection.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004e7a90(void);
extern int __cdecl FUN_007047f0(void);
extern int __cdecl FUN_00683530(int, int);
extern void __cdecl FUN_005cb3a0(void);
extern int __cdecl FUN_00684500(int, int, int);
extern void __cdecl FUN_00684410(int, int, int);
extern void __cdecl FUN_005cb520(int, int);
extern void __cdecl FUN_005cb4e0(int, int);

extern float g_00785968;          /* float const @ 0x785968 */
extern char  g_00798bc0;          /* fn-ptr table @ 0x798bc0 (addr stored) */
extern int   g_jt_683974[];       /* 4-entry jump table @ 0x683974 */

__declspec(naked) int FUN_006836f0(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [edi]
        mov     esi, dword ptr [edi + 0x4]
        mov     ebp, ebx
        cmp     ebp, esi
        mov     byte ptr [esp + 0x13], 0x0
        jz      L_6837b8
L_68370f:
        mov     edi, dword ptr [ebp]
        mov     ecx, edi
        call    FUN_004e7a90
        cmp     eax, 0x1
        jnz     L_683722
        mov     byte ptr [esp + 0x13], al
L_683722:
        mov     eax, dword ptr [edi + 0x34]
        sub     eax, 0x0
        jz      L_683780
        dec     eax
        jz      L_68375c
        sub     eax, 0x5
        jnz     L_6837a1
        mov     ecx, edi
        call    FUN_004e7a90
        cmp     eax, 0x1
        jz      L_68374a
        mov     ecx, edi
        call    FUN_004e7a90
        cmp     eax, 0x2
        jnz     L_6837a1
L_68374a:
        fld     dword ptr [edi + 0x48]
        fcomp   dword ptr [g_00785968]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_6837d3
        jmp     L_6837a1
L_68375c:
        mov     ecx, edi
        call    FUN_004e7a90
        cmp     eax, 0x2
        jnz     L_6837a1
        mov     eax, ebx
        cmp     eax, esi
        jz      L_6837a1
L_68376e:
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx + 0x34]
        test    edx, edx
        jz      L_6837de
        add     eax, 0x4
        cmp     eax, esi
        jnz     L_68376e
        jmp     L_6837a1
L_683780:
        mov     ecx, edi
        call    FUN_004e7a90
        cmp     eax, 0x2
        jnz     L_6837a1
        mov     eax, ebx
        cmp     eax, esi
        jz      L_6837a1
L_683792:
        mov     edx, dword ptr [eax]
        cmp     dword ptr [edx + 0x34], 0x1
        jz      L_6837de
        add     eax, 0x4
        cmp     eax, esi
        jnz     L_683792
L_6837a1:
        add     ebp, 0x4
        cmp     ebp, esi
        jnz     L_68370f
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        mov     edi, dword ptr [esp + 0x34]
        jnz     L_683814
L_6837b8:
        call    FUN_007047f0
        and     eax, 0x7
        cmp     eax, 0x3
        ja      L_6837fd
        jmp     dword ptr [eax*4 + g_jt_683974]
L_6837cc:
        mov     eax, 0x2
        jmp     L_683802
L_6837d3:
        mov     eax, dword ptr [ebp]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
L_6837de:
        mov     eax, dword ptr [eax]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
L_6837e8:
        mov     eax, 0x5
        jmp     L_683802
L_6837ef:
        mov     eax, 0x4
        jmp     L_683802
L_6837f6:
        mov     eax, 0x3
        jmp     L_683802
L_6837fd:
        mov     eax, 0x6
L_683802:
        push    eax
        push    edi
        call    FUN_00683530
        add     esp, 0x8
        test    eax, eax
        jnz     L_68396a
L_683814:
        mov     ebx, dword ptr [edi + 0x4]
        mov     esi, dword ptr [edi]
        mov     eax, ebx
        sub     eax, esi
        test    eax, 0xfffffffc
        mov     dword ptr [esp + 0x14], offset g_00798bc0
        jz      L_683968
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_005cb3a0
        cmp     esi, ebx
        mov     ecx, dword ptr [esp + 0x24]
        jz      L_68391a
L_68384a:
        mov     edi, dword ptr [esp + 0x20]
        mov     edx, ecx
        sub     edx, edi
        test    edx, 0xfffffffc
        jnz     L_683880
        cmp     ecx, dword ptr [esp + 0x28]
        jz      L_6838fe
        test    ecx, ecx
        jz      L_6838f5
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [esp + 0x24]
        add     ecx, 0x4
        mov     dword ptr [esp + 0x24], ecx
        jmp     L_68390f
L_683880:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    dword ptr [edx]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_6838d0
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    eax
        call    FUN_00684500
        mov     ecx, eax
        add     esp, 0xc
        mov     dword ptr [esp + 0x24], ecx
        jmp     L_6838d4
L_6838d0:
        mov     ecx, dword ptr [esp + 0x24]
L_6838d4:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_68390f
        cmp     ecx, dword ptr [esp + 0x28]
        jz      L_6838fe
        test    ecx, ecx
        jz      L_6838f5
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [esp + 0x24]
L_6838f5:
        add     ecx, 0x4
        mov     dword ptr [esp + 0x24], ecx
        jmp     L_68390f
L_6838fe:
        push    0x1
        push    esi
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_00684410
        mov     ecx, dword ptr [esp + 0x24]
L_68390f:
        add     esi, 0x4
        cmp     esi, ebx
        jnz     L_68384a
L_68391a:
        mov     edx, dword ptr [esp + 0x20]
        sub     ecx, edx
        mov     esi, ecx
        sar     esi, 0x2
        jz      L_683954
        call    FUN_007047f0
        xor     edx, edx
        div     esi
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x28]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        mov     esi, dword ptr [eax + edx*4]
        call    FUN_005cb520
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
L_683954:
        mov     eax, dword ptr [esp + 0x28]
        sub     eax, edx
        sar     eax, 0x2
        push    eax
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_005cb4e0
L_683968:
        xor     eax, eax
L_68396a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
