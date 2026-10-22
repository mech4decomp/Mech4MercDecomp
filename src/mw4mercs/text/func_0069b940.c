/*
 * FUN_0069B940 (1211 B) — __cdecl, RET 0. ABL array/stack allocation manager
 * with a large dispatch loop over DAT_008058ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0069b5f0(void);
extern void __cdecl FUN_0064fd20(void);
extern void __cdecl FUN_0064fcd0(void);
extern void __cdecl FUN_0069ae50(void);
extern void __cdecl FUN_0064fe70(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_006498f0(void);

extern int _DAT_008058ac;   /* 0x008058ac */
extern int _DAT_008058c0;   /* 0x008058c0 */
extern int _DAT_0080da24;   /* 0x0080da24 */
extern int _DAT_0080d988;   /* 0x0080d988 */
extern int _DAT_00805940;   /* 0x00805940 */
extern int _DAT_00805928;   /* 0x00805928 */
extern int _DAT_008058b8;   /* 0x008058b8 */
extern int _DAT_0080593c;   /* 0x0080593c */
extern int _DAT_0080594c;   /* 0x0080594c */
extern int _DAT_00805944;   /* 0x00805944 */
extern int _DAT_00805938;   /* 0x00805938 */

__declspec(naked) void __cdecl FUN_0069b940(void)
{
    __asm {
        sub     esp, 0x34
        mov     ecx, dword ptr [esp + 0x38]
        push    ebx
        xor     eax, eax
        push    ebp
        push    esi
        cmp     ecx, eax
        push    edi
        setnz   byte ptr [esp + 0x13]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x24], eax
l_69b964:
        mov     eax, dword ptr [_DAT_008058ac]
l_69b969:
        mov     edi, 0x1
        cmp     eax, edi
        jz      l_69b980
        cmp     eax, 0x3f
        jz      l_69b980
        cmp     eax, 0x40
        jnz     l_69bdbc
l_69b980:
        xor     esi, esi
        cmp     eax, 0x3f
        mov     dword ptr [esp + 0x18], esi
        jz      l_69ba1d
        cmp     eax, 0x40
        jnz     l_69b9b3
        mov     dword ptr [esp + 0x18], edi
l_69b998:
        call    FUN_00649150
        cmp     dword ptr [_DAT_008058ac], edi
        jz      l_69b9af
        push    0x23
        call    FUN_00562f40
        add     esp, 0x4
l_69b9af:
        mov     esi, dword ptr [esp + 0x18]
l_69b9b3:
        mov     dword ptr [esp + 0x1c], 0x0
        call    FUN_0069b5f0
        mov     ebp, eax
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [_DAT_008058ac]
        mov     ebx, dword ptr [ebp + 0x8]
        dec     edx
        cmp     eax, edi
        mov     dword ptr [esp + 0x40], ebp
        mov     dword ptr [ebp], edx
        mov     dword ptr [esp + 0x38], ebx
        jnz     l_69bac6
l_69b9e1:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      l_69ba51
        cmp     esi, 0x2
        jnz     l_69ba2a
        mov     eax, dword ptr [_DAT_0080da24]
        mov     esi, dword ptr [_DAT_008058c0]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     dword ptr [_DAT_008058c0], 0x0
        call    FUN_0064fd20
        mov     dword ptr [_DAT_008058c0], esi
        mov     esi, dword ptr [esp + 0x20]
        add     esp, 0x8
        jmp     l_69ba37
l_69ba1d:
        mov     dword ptr [esp + 0x18], 0x2
        jmp     l_69b998
l_69ba2a:
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_0064fcd0
        add     esp, 0x4
l_69ba37:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [_DAT_0080d988]
        mov     dword ptr [eax + 0x40], ecx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x18], 0x3
        jmp     l_69ba5b
l_69ba51:
        push    0x17
        call    FUN_00562f40
        add     esp, 0x4
l_69ba5b:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x48], 0x0
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     l_69ba97
        mov     eax, dword ptr [esp + 0x14]
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x1c], eax
        jz      l_69baaa
        cmp     esi, 0x2
        jz      l_69baaa
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [ecx + 0x2c]
        test    edx, edx
        jnz     l_69baaa
        mov     dword ptr [ecx + 0x2c], eax
        jmp     l_69baaa
l_69ba97:
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0xc], ecx
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x20], eax
l_69baaa:
        call    FUN_00649150
        push    0x11
        call    FUN_0069ae50
        mov     eax, dword ptr [_DAT_008058ac]
        add     esp, 0x4
        cmp     eax, edi
        jz      l_69b9e1
l_69bac6:
        mov     edx, dword ptr [esp + 0x1c]
        test    edx, edx
        mov     dword ptr [esp + 0x14], edx
        jz      l_69bd30
l_69bad6:
        push    ebp
        call    FUN_0064fe70
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x3c], eax
        mov     al, byte ptr [esp + 0x17]
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x4
        test    al, al
        jz      l_69bcfc
        mov     eax, esi
        sub     eax, 0x0
        mov     dword ptr [edx + 0x1c], esi
        jz      l_69bce4
        dec     eax
        jz      l_69bc95
        dec     eax
        jnz     l_69bd14
        mov     edx, dword ptr [_DAT_00805940]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [_DAT_00805928]
        mov     dword ptr [eax + 0x20], edx
        cmp     dword ptr [ebp + 0x4], 0x3
        lea     esi, [ecx + edx*4]
        mov     dword ptr [esp + 0x3c], esi
        jnz     l_69bc75
        mov     ebp, dword ptr [_DAT_008058b8]
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      l_69bc2b
        push    eax
        push    ebx
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp + 0x14]
        cmp     edi, dword ptr [ebp + 0x18]
        mov     dword ptr [esp + 0x28], eax
        jz      l_69bb73
        test    edi, edi
        jz      l_69bb60
        mov     dword ptr [edi], eax
l_69bb60:
        mov     edx, dword ptr [_DAT_00805940]
        add     edi, 0x4
        mov     dword ptr [ebp + 0x14], edi
        mov     edi, eax
        jmp     l_69bc2d
l_69bb73:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x30], 0x1
        mov     dword ptr [esp + 0x34], eax
        lea     ecx, [esp + 0x30]
        jc      l_69bb96
        lea     ecx, [esp + 0x34]
l_69bb96:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x34], eax
        jz      l_69bbb2
        lea     edx, [eax*4 + 0x0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     l_69bbb4
l_69bbb2:
        xor     ebx, ebx
l_69bbb4:
        mov     ecx, edi
        sub     ecx, esi
        sar     ecx, 0x2
        test    ecx, ecx
        mov     eax, ebx
        jle     l_69bbd0
        mov     edx, esi
        sub     edx, ebx
l_69bbc5:
        mov     esi, dword ptr [edx + eax*1]
        mov     dword ptr [eax], esi
        add     eax, 0x4
        dec     ecx
        jnz     l_69bbc5
l_69bbd0:
        test    eax, eax
        jz      l_69bbda
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ecx
l_69bbda:
        lea     esi, [eax + 0x4]
        mov     eax, edi
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        jle     l_69bbf5
        sub     edi, esi
l_69bbea:
        mov     edx, dword ptr [edi + esi*1]
        mov     dword ptr [esi], edx
        add     esi, 0x4
        dec     eax
        jnz     l_69bbea
l_69bbf5:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      l_69bc05
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_69bc05:
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [_DAT_00805940]
        lea     ecx, [ebx + eax*4]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [ebp + 0x10], ebx
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [ebp + 0x14], esi
        mov     esi, dword ptr [esp + 0x3c]
        mov     dword ptr [ebp + 0x18], ecx
        mov     edi, eax
        jmp     l_69bc2d
l_69bc2b:
        xor     edi, edi
l_69bc2d:
        test    edi, edi
        mov     dword ptr [esi], edi
        jnz     l_69bc47
        push    0x799964
        push    edi
        call    FUN_00562f10
        mov     edx, dword ptr [_DAT_00805940]
        add     esp, 0x8
l_69bc47:
        mov     ebp, dword ptr [esp + 0x40]
        mov     ecx, ebx
        mov     esi, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x18]
        and     ecx, 0x3
        rep stosb
        mov     eax, dword ptr [_DAT_0080593c]
        mov     dword ptr [eax + edx*4], ebx
        inc     edx
        mov     dword ptr [_DAT_00805940], edx
        jmp     l_69bd14
l_69bc75:
        mov     ecx, dword ptr [_DAT_0080593c]
        mov     dword ptr [ecx + edx*4], 0x0
        inc     edx
        mov     dword ptr [esi], 0x0
        mov     esi, dword ptr [esp + 0x18]
        mov     dword ptr [_DAT_00805940], edx
        jmp     l_69bd14
l_69bc95:
        mov     eax, dword ptr [_DAT_0080594c]
        cmp     eax, dword ptr [_DAT_00805944]
        jnz     l_69bcb1
        push    0x38
        call    FUN_00562f40
        mov     eax, dword ptr [_DAT_0080594c]
        add     esp, 0x4
l_69bcb1:
        cmp     dword ptr [ebp + 0x4], 0x3
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x20], eax
        jnz     l_69bccf
        mov     ecx, dword ptr [_DAT_00805938]
        mov     dword ptr [ecx + eax*4], ebx
        inc     eax
        mov     dword ptr [_DAT_0080594c], eax
        jmp     l_69bd14
l_69bccf:
        mov     edx, dword ptr [_DAT_00805938]
        mov     dword ptr [edx + eax*4], 0x0
        inc     eax
        mov     dword ptr [_DAT_0080594c], eax
        jmp     l_69bd14
l_69bce4:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x14]
        add     edx, ebx
        mov     dword ptr [ecx + 0x20], eax
        mov     dword ptr [esp + 0x24], edx
        inc     eax
        jmp     l_69bd10
l_69bcfc:
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [edx + 0x1c], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x20], eax
        add     eax, ebx
l_69bd10:
        mov     dword ptr [esp + 0x4c], eax
l_69bd14:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jnz     l_69bad6
        mov     eax, dword ptr [_DAT_008058ac]
        mov     edx, dword ptr [esp + 0x1c]
l_69bd30:
        cmp     esi, 0x2
        jz      l_69bd48
        mov     ecx, dword ptr [esp + 0x2c]
        test    ecx, ecx
        jz      l_69bd40
        mov     dword ptr [ecx + 0xc], edx
l_69bd40:
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], ecx
l_69bd48:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jz      l_69bd6c
        push    0x7b5890
        push    0x7b58e0
        push    0x7b5f90
        call    FUN_00649920
        mov     eax, dword ptr [_DAT_008058ac]
        add     esp, 0xc
l_69bd6c:
        cmp     eax, 0xe
        jnz     l_69bd7b
        call    FUN_00649150
        jmp     l_69b964
l_69bd7b:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jz      l_69b969
        push    0x7b58e0
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     l_69bdad
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      l_69b964
l_69bdad:
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
        jmp     l_69b964
l_69bdbc:
        push    0x0
        push    0x0
        push    0x7b5fa0
        call    FUN_00649920
        mov     al, byte ptr [esp + 0x1f]
        add     esp, 0xc
        test    al, al
        jz      l_69bdf3
        mov     esi, dword ptr [esp + 0x24]
        cmp     esi, 0x7d00
        jle     l_69bdeb
        push    0x3f
        call    FUN_00562f40
        add     esp, 0x4
l_69bdeb:
        mov     edx, dword ptr [esp + 0x48]
        mov     word ptr [edx + 0x24], si
l_69bdf3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }
}
