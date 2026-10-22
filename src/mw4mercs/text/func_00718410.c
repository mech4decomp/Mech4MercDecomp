/*
 * FUN_00718410 (758 B) — DirectSound buffer setup/update. Handles a special
 * 0xF3 opcode path (streaming buffer) and a general path that allocates a
 * sound-buffer node, copies the caller's descriptor, and issues
 * FUN_00741b30 / FUN_00741bc0 (sound device calls).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00741b30(void);
extern void __cdecl FUN_007018c0(void);
extern void __cdecl FUN_00717df0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00741bc0(void);

extern int DAT_0085b4a0;
extern int DAT_008aaabc;
extern int DAT_008aaae4;
extern char DAT_0087dd0a;
extern char DAT_0087ceac;
extern int DAT_007a11c8;
extern int DAT_00849314;
extern double d_77b648;

__declspec(naked) void __cdecl FUN_00718410(void)
{
    __asm {
        mov     eax, dword ptr [DAT_0085b4a0]
        sub     esp, 0x604
        cmp     eax, 1
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_186f7
        mov     ebx, dword ptr [esp + 0x618]
        mov     al, byte ptr [ebx + 0x14]
        cmp     al, 0xf3
        mov     byte ptr [esp + 0x14], al
        jnz     L_184ca
        xor     eax, eax
        mov     dword ptr [esp + 0x19], eax
        mov     dword ptr [esp + 0x1d], eax
        mov     dword ptr [esp + 0x21], eax
        mov     dword ptr [esp + 0x25], eax
        call    FUN_00707e90
        fmul    qword ptr [d_77b648]
        call    FUN_0075db4a
        mov     ebx, dword ptr [ebx + 4]
        mov     edx, dword ptr [DAT_008aaabc]
        push    0
        push    0
        push    0
        push    0
        push    0x15
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x600
        push    ebx
        mov     dword ptr [esp + 0x39], eax
        mov     eax, dword ptr [DAT_008aaae4]
        push    edx
        push    eax
        mov     byte ptr [DAT_0087dd0a], 1
        call    FUN_00741b30
        cmp     eax, 0x80004001
        mov     byte ptr [DAT_0087dd0a], 0
        jnz     L_186f7
        mov     edx, dword ptr [DAT_008aaabc]
        mov     eax, dword ptr [DAT_008aaae4]
        push    0x15
        lea     ecx, [esp + 0x18]
        push    ecx
        push    0
        push    ebx
        push    edx
        mov     byte ptr [DAT_0087dd0a], 1
        push    eax
        jmp     L_186eb
L_184ca:
        mov     ebp, dword ptr [ebx + 4]
        push    ebp
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_007018c0
        mov     esi, eax
        test    esi, esi
        jz      L_18619
        mov     al, byte ptr [DAT_0087ceac]
        test    al, al
        jnz     L_18659
        mov     ebp, dword ptr [esi + 0x10]
        test    ebp, ebp
        jz      L_184fb
        test    byte ptr [ebx + 8], 1
        jnz     L_1852e
L_184fb:
        mov     ecx, dword ptr [DAT_007a11c8]
        xor     edi, edi
        mov     di, word ptr [esi + 8]
        xor     edx, edx
        mov     dx, word ptr [esi + 0xc]
        push    ecx
        mov     eax, edi
        and     eax, 0xffff
        push    edx
        push    eax
        call    FUN_00717df0
        test    al, al
        jnz     L_185ec
        test    byte ptr [ebx + 8], 1
        jz      L_185dd
L_1852e:
        mov     edi, ebp
        test    edi, edi
        jz      L_18557
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jz      L_18544
L_1853b:
        mov     edi, eax
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jnz     L_1853b
L_18544:
        mov     ecx, dword ptr [DAT_00849314]
        push    ecx
        push    8
        call    FUN_006f3c80
        mov     dword ptr [edi + 4], eax
        jmp     L_18568
L_18557:
        mov     edx, dword ptr [DAT_00849314]
        push    edx
        push    8
        call    FUN_006f3c80
        mov     dword ptr [esi + 0x10], eax
L_18568:
        mov     esi, eax
        mov     eax, dword ptr [DAT_00849314]
        push    eax
        push    0x19
        mov     dword ptr [esi + 4], 0
        call    FUN_006f3c80
        mov     ebp, eax
        mov     dword ptr [esi], ebp
        mov     ecx, 6
        mov     esi, ebx
        mov     edi, ebp
        rep     movsd
        xor     eax, eax
        movsb
        mov     ax, word ptr [ebp + 0x12]
        test    ax, ax
        jz      L_185d6
        mov     ecx, dword ptr [DAT_00849314]
        push    ecx
        and     eax, 0xffff
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x15]
        xor     ecx, ecx
        mov     dword ptr [ebp + 0x15], eax
        mov     cx, word ptr [ebp + 0x12]
        mov     edi, eax
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x604
        ret     4
L_185d6:
        mov     dword ptr [ebp + 0x15], 0
L_185dd:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x604
        ret     4
L_185ec:
        mov     word ptr [esp + 0x15], di
        mov     ax, word ptr [esi + 0xa]
        push    1
        mov     word ptr [esp + 0x1b], ax
        call    FUN_00707e70
        fstp    qword ptr [esi]
        inc     word ptr [esi + 8]
        cmp     word ptr [esi + 8], 0xc350
        jc      L_18615
        mov     word ptr [esi + 8], 0
L_18615:
        mov     ebp, dword ptr [esp + 0x10]
L_18619:
        mov     esi, dword ptr [ebx + 0x15]
        xor     edx, edx
        mov     dx, word ptr [ebx + 0x12]
        lea     edi, [esp + 0x19]
        mov     byte ptr [DAT_0087dd0a], 1
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 8]
        mov     eax, ecx
        and     eax, 2
        test    ax, ax
        jnz     L_18688
        test    cl, 1
        jnz     L_18688
        mov     edi, 0x3e8
        jmp     L_1868a
L_18659:
        mov     cx, word ptr [esi + 8]
        mov     word ptr [esp + 0x15], cx
        mov     dx, word ptr [esi + 0xa]
        push    1
        mov     word ptr [esp + 0x1b], dx
        call    FUN_00707e70
        fstp    qword ptr [esi]
        inc     word ptr [esi + 8]
        cmp     word ptr [esi + 8], 0xc350
        jc      L_18619
        mov     word ptr [esi + 8], 0
        jmp     L_18619
L_18688:
        xor     edi, edi
L_1868a:
        push    0
        neg     ax
        push    0
        push    edi
        push    0
        lea     esi, [edx + 5]
        push    esi
        lea     edx, [esp + 0x28]
        sbb     eax, eax
        and     eax, 0x41
        and     ecx, 1
        or      eax, ecx
        mov     ecx, dword ptr [DAT_008aaae4]
        push    edx
        or      eax, 0x600
        push    eax
        mov     eax, dword ptr [DAT_008aaabc]
        push    ebp
        push    eax
        push    ecx
        call    FUN_00741b30
        cmp     eax, 0x80004001
        mov     byte ptr [DAT_0087dd0a], 0
        jnz     L_186f7
        mov     eax, dword ptr [DAT_008aaabc]
        mov     ecx, dword ptr [DAT_008aaae4]
        push    esi
        lea     edx, [esp + 0x18]
        push    edx
        push    0
        push    ebp
        push    eax
        mov     byte ptr [DAT_0087dd0a], 1
        push    ecx
L_186eb:
        call    FUN_00741bc0
        mov     byte ptr [DAT_0087dd0a], 0
L_186f7:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x604
        ret     4
    }
}
