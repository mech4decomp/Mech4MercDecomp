/*
 * FUN_5e030672 (659 B) - format a 96-bit fixed-point value as a decimal
 * string (float-to-string). Handles zero, +/-INF, IND, QNAN, SNAN
 * special cases, then does long division by 10 to emit digits with
 * rounding and exponent bookkeeping.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02e220(void);
extern void __cdecl FUN_5e0323e1(void);
extern void __cdecl FUN_5e0321c1(void);
extern void __cdecl FUN_5e030043(void);
extern void __cdecl FUN_5e030071(void);
extern void __cdecl FUN_5e02ffe5(void);
extern char g_5e0366d0[];   /* "1#SNAN" */
extern char g_5e0366c8[];   /* "1#IND"  */
extern char g_5e0366c0[];   /* "1#INF"  */
extern char g_5e0366b8[];   /* "1#QNAN" */

__declspec(naked) void FUN_5e030672(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     eax, dword ptr [ebp+0x10]
        push    ebx
        mov     ebx, dword ptr [ebp+0x1c]
        push    esi
        mov     ecx, eax
        mov     esi, 0x7fff
        and     ecx, 0x8000
        and     eax, esi
        test    cx, cx
        push    edi
        mov     byte ptr [ebp-0x1c], 0xcc
        mov     byte ptr [ebp-0x1b], 0xcc
        mov     byte ptr [ebp-0x1a], 0xcc
        mov     byte ptr [ebp-0x19], 0xcc
        mov     byte ptr [ebp-0x18], 0xcc
        mov     byte ptr [ebp-0x17], 0xcc
        mov     byte ptr [ebp-0x16], 0xcc
        mov     byte ptr [ebp-0x15], 0xcc
        mov     byte ptr [ebp-0x14], 0xcc
        mov     byte ptr [ebp-0x13], 0xcc
        mov     byte ptr [ebp-0x12], 0xfb
        mov     byte ptr [ebp-0x11], 0x3f
        mov     dword ptr [ebp-0x4], 1
        mov     edx, eax
        jz      L6d4
        mov     byte ptr [ebx+2], 0x2d
        jmp     L6d8
    L6d4:
        mov     byte ptr [ebx+2], 0x20
    L6d8:
        mov     edi, dword ptr [ebp+0xc]
        test    dx, dx
        jnz     L6fe
        test    edi, edi
        jnz     L6fe
        cmp     dword ptr [ebp+0x8], edi
        jnz     L6fe
    L6e9:
        and     word ptr [ebx], 0
        mov     byte ptr [ebx+2], 0x20
        mov     byte ptr [ebx+3], 1
        mov     byte ptr [ebx+4], 0x30
        jmp     L8fc
    L6fe:
        cmp     dx, si
        jnz     L77d
        mov     eax, 0x80000000
        mov     word ptr [ebx], 1
        cmp     edi, eax
        jnz     L717
        cmp     dword ptr [ebp+0x8], 0
        jz      L726
    L717:
        test    edi, 0x40000000
        jnz     L726
        push    offset g_5e0366d0
        jmp     L76c
    L726:
        test    cx, cx
        jz      L740
        cmp     edi, 0xc0000000
        jnz     L740
        cmp     dword ptr [ebp+0x8], 0
        jnz     L767
        push    offset g_5e0366c8
        jmp     L74f
    L740:
        cmp     edi, eax
        jnz     L767
        cmp     dword ptr [ebp+0x8], 0
        jnz     L767
        push    offset g_5e0366c0
    L74f:
        lea     eax, [ebx+4]
        push    eax
        call    FUN_5e02e220
        pop     ecx
        mov     byte ptr [ebx+3], 5
        pop     ecx
    L75e:
        and     dword ptr [ebp-0x4], 0
        jmp     L8d5
    L767:
        push    offset g_5e0366b8
    L76c:
        lea     eax, [ebx+4]
        push    eax
        call    FUN_5e02e220
        pop     ecx
        mov     byte ptr [ebx+3], 6
        pop     ecx
        jmp     L75e
    L77d:
        movzx   eax, dx
        mov     ecx, edi
        mov     esi, eax
        shr     ecx, 0x18
        imul    eax, eax, 0x4d10
        shr     esi, 8
        and     word ptr [ebp-0x10], 0
        push    1
        lea     ecx, [esi+ecx*2]
        mov     word ptr [ebp-0x6], dx
        imul    ecx, ecx, 0x4d
        mov     dword ptr [ebp-0xa], edi
        lea     esi, [ecx+eax+0xecbced0c]
        mov     eax, dword ptr [ebp+0x8]
        sar     esi, 0x10
        mov     dword ptr [ebp-0xe], eax
        movsx   eax, si
        neg     eax
        push    eax
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e0323e1
        add     esp, 0xc
        cmp     word ptr [ebp-0x6], 0x3fff
        jc      L7de
        lea     eax, [ebp-0x1c]
        inc     esi
        push    eax
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e0321c1
        pop     ecx
        pop     ecx
    L7de:
        test    byte ptr [ebp+0x18], 1
        mov     word ptr [ebx], si
        jz      L7f8
        mov     edi, dword ptr [ebp+0x14]
        movsx   eax, si
        add     edi, eax
        test    edi, edi
        jg      L7fb
        jmp     L6e9
    L7f8:
        mov     edi, dword ptr [ebp+0x14]
    L7fb:
        cmp     edi, 0x15
        jle     L803
        push    0x15
        pop     edi
    L803:
        movzx   esi, word ptr [ebp-0x6]
        sub     esi, 0x3ffe
        and     word ptr [ebp-0x6], 0
        mov     dword ptr [ebp+0x1c], 8
    L819:
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e030043
        dec     dword ptr [ebp+0x1c]
        pop     ecx
        jnz     L819
        test    esi, esi
        jge     L843
        neg     esi
        and     esi, 0xff
        jle     L843
    L836:
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e030071
        dec     esi
        pop     ecx
        jnz     L836
    L843:
        lea     ecx, [edi+1]
        lea     eax, [ebx+4]
        test    ecx, ecx
        mov     dword ptr [ebp+0x1c], eax
        jle     L8a0
        mov     dword ptr [ebp+0x14], ecx
    L853:
        lea     esi, [ebp-0x10]
        lea     edi, [ebp+0x8]
        movsd
        movsd
        lea     eax, [ebp-0x10]
        push    eax
        movsd
        call    FUN_5e030043
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e030043
        lea     eax, [ebp+0x8]
        push    eax
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e02ffe5
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_5e030043
        mov     al, byte ptr [ebp-0x5]
        mov     ecx, dword ptr [ebp+0x1c]
        and     byte ptr [ebp-0x5], 0
        add     esp, 0x14
        add     al, 0x30
        inc     dword ptr [ebp+0x1c]
        dec     dword ptr [ebp+0x14]
        mov     byte ptr [ecx], al
        jnz     L853
        mov     eax, dword ptr [ebp+0x1c]
    L8a0:
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     eax
        cmp     cl, 0x35
        lea     ecx, [ebx+4]
        jl      L8dd
    L8ad:
        cmp     eax, ecx
        jc      L8c0
        cmp     byte ptr [eax], 0x39
        jnz     L8bc
        mov     byte ptr [eax], 0x30
        dec     eax
        jmp     L8ad
    L8bc:
        cmp     eax, ecx
        jnc     L8c4
    L8c0:
        inc     eax
        inc     word ptr [ebx]
    L8c4:
        inc     byte ptr [eax]
    L8c6:
        sub     al, bl
        sub     al, 3
        mov     byte ptr [ebx+3], al
        movsx   eax, al
        and     byte ptr [eax+ebx+4], 0
    L8d5:
        mov     eax, dword ptr [ebp-0x4]
    L8d8:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L8dd:
        cmp     eax, ecx
        jc      L8ed
        cmp     byte ptr [eax], 0x30
        jnz     L8e9
        dec     eax
        jmp     L8dd
    L8e9:
        cmp     eax, ecx
        jnc     L8c6
    L8ed:
        and     word ptr [ebx], 0
        mov     byte ptr [ebx+2], 0x20
        mov     byte ptr [ebx+3], 1
        mov     byte ptr [ecx], 0x30
    L8fc:
        and     byte ptr [ebx+5], 0
        push    1
        pop     eax
        jmp     L8d8
    }
}
