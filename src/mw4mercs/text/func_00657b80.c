/*
 * FUN_00657b80 (744 B) ? cmovegrid lattice (re)construction. EBP-framed,
 * __cdecl with 2 params. Builds a 0x3f003f-filled lattice buffer and
 * streams it through a virtual device (call [reg+0x24]/[reg+0x14]).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7949f4[];      /* "need to recreate lattice for %s, very old data" */
extern char g_7949cc[];      /* "no data in cmovegrid::constructstream" */
extern void *g_0076b420;     /* sprintf IAT */
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __cdecl FUN_00657b80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x514
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        test    esi, esi
        push    edi
        jz      L_57dea
        lea     eax, [ebp + 0xc]
        push    eax
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    esi
        call    FUN_006faca0
        mov     ebx, dword ptr [ebp - 0x4]
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jle     L_57bd5
        push    esi
        lea     edx, [ebp - 0x114]
        push    offset g_7949f4
        push    edx
        call    dword ptr [g_0076b420]
        lea     eax, [ebp - 0x114]
        push    eax
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L_57bd5
        int     3
    L_57bd5:
        mov     eax, dword ptr [ebx + 0x4]
        add     ebx, 0x4
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        jle     L_57c09
        push    esi
        lea     ecx, [ebp - 0x114]
        push    offset g_7949f4
        push    ecx
        call    dword ptr [g_0076b420]
        lea     edx, [ebp - 0x114]
        push    edx
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L_57c09
        int     3
    L_57c09:
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp - 0x8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x8], 0x1400
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], 0x1400
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi]
        sub     ecx, 0xc
        push    0x4
        lea     eax, [ebp + 0x8]
        mov     dword ptr [ebp + 0xc], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], 0x80000
        call    dword ptr [edx + 0x24]
        add     ebx, 0x8
        cmp     edi, 0xfffff600
        mov     dword ptr [ebp - 0x8], ebx
        mov     ebx, 0xc0
        jg      L_57c95
        jz      L_57c8c
        cmp     edi, 0xffffec00
        jz      L_57c83
        cmp     edi, 0xfffff100
        jnz     L_57e5f
        mov     dword ptr [ebp + 0x8], 0x40
        jmp     L_57ca4
    L_57c83:
        mov     dword ptr [ebp + 0x8], 0x0
        jmp     L_57ca4
    L_57c8c:
        mov     dword ptr [ebp + 0x8], 0x80
        jmp     L_57ca4
    L_57c95:
        cmp     edi, 0xfffffb00
        jnz     L_57e5f
        mov     dword ptr [ebp + 0x8], ebx
    L_57ca4:
        mov     eax, dword ptr [ebp - 0xc]
        cmp     eax, 0xfffff600
        jg      L_57cd4
        jz      L_57ccd
        cmp     eax, 0xffffec00
        jz      L_57cc9
        cmp     eax, 0xfffff100
        jnz     L_57e5f
        mov     ebx, 0x40
        jmp     L_57cdf
    L_57cc9:
        xor     ebx, ebx
        jmp     L_57cdf
    L_57ccd:
        mov     ebx, 0x80
        jmp     L_57cdf
    L_57cd4:
        cmp     eax, 0xfffffb00
        jnz     L_57e5f
    L_57cdf:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_57cf8
        push    offset g_7949cc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_57cf8
        int     3
    L_57cf8:
        mov     eax, 0x99999999
        imul    edi
        mov     eax, dword ptr [esi]
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     dword ptr [ebp - 0x10], edx
        mov     edx, dword ptr [ebp - 0x8]
        push    0x80000
        mov     ecx, esi
        mov     dword ptr [ebp - 0xc], edx
        call    dword ptr [eax + 0x14]
        test    ebx, ebx
        mov     ecx, 0x100
        mov     eax, 0x3f003f
        lea     edi, [ebp - 0x514]
        rep stosd
        jle     L_57d4c
        mov     edi, ebx
    L_57d36:
        mov     edx, dword ptr [esi]
        push    0x400
        lea     eax, [ebp - 0x514]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        dec     edi
        jnz     L_57d36
    L_57d4c:
        mov     eax, 0x200
        sub     eax, ebx
        cmp     ebx, eax
        mov     dword ptr [ebp - 0x14], eax
        jge     L_57db4
        mov     ecx, dword ptr [ebp - 0x10]
        lea     edx, [ecx + ecx]
        sub     eax, ebx
        mov     dword ptr [ebp - 0x10], edx
        mov     dword ptr [ebp - 0x8], eax
    L_57d68:
        mov     ebx, dword ptr [ebp + 0x8]
        test    ebx, ebx
        jz      L_57d81
        mov     eax, dword ptr [esi]
        lea     ecx, [ebx + ebx]
        push    ecx
        lea     edx, [ebp - 0x514]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
    L_57d81:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        add     edi, dword ptr [ebp - 0x10]
        test    ebx, ebx
        mov     dword ptr [ebp - 0xc], edi
        jz      L_57dac
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + ebx]
        push    eax
        lea     ecx, [ebp - 0x514]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
    L_57dac:
        dec     dword ptr [ebp - 0x8]
        jnz     L_57d68
        mov     eax, dword ptr [ebp - 0x14]
    L_57db4:
        cmp     eax, 0x200
        jge     L_57dd8
        mov     edi, 0x200
        sub     edi, eax
    L_57dc2:
        mov     edx, dword ptr [esi]
        push    0x400
        lea     eax, [ebp - 0x514]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        dec     edi
        jnz     L_57dc2
    L_57dd8:
        mov     ecx, dword ptr [ebp - 0x4]
        push    ecx
        call    FUN_006f4230
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_57dea:
        mov     esi, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    0x80000
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     eax, 0x3f003f
        mov     ecx, 0x100
        lea     edi, [ebp - 0x514]
        rep stosd
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     edi, 0x1400
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], edi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x8], 0x80000
        call    dword ptr [edx + 0x24]
        mov     edi, 0x200
    L_57e49:
        mov     edx, dword ptr [esi]
        push    0x400
        lea     eax, [ebp - 0x514]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        dec     edi
        jnz     L_57e49
    L_57e5f:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
