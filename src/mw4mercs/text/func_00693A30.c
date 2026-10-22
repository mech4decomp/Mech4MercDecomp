/*
 * FUN_00693A30 (1477 B) — util data-block function (block 0x693651).
 * Reads a config object, calls through its vtable, and builds/updates
 * two 0x120-byte records (ebx) with 16-bit fields at +0x118/+0x11a and
 * +0x11c/+0x11e. Uses a linked list (edi) of string/float entries and
 * several 0x4d2xxx config helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00509000(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void *__cdecl FUN_004084c0(int, int);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern unsigned int g_7db0a0;
extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern unsigned int g_7db0b0;
extern unsigned int g_7b8810;

__declspec(naked) void FUN_00693A30(void)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xe4]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x120
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00509000
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, dword ptr [edi + 4]
        mov     ecx, dword ptr [g_7db0a0]
        push    edi
        mov     ebx, eax
        call    FUN_004cfbd0
        push    0x7723e8
        mov     ecx, edi
        call    FUN_0040ed60
        mov     cx, word ptr [g_7db0ae]
        mov     ebp, eax
        mov     ax, word ptr [g_7db0ac]
        mov     word ptr [ebx + 0x11a], cx
        push    0
        lea     ecx, [esp + 0x94]
        mov     word ptr [ebx + 0x118], ax
        call    FUN_0040dd50
        push    0
        lea     edx, [esp + 0x94]
        push    edx
        push    0x799448
        mov     ecx, ebp
        call    FUN_00412390
        test    al, al
        jne     L_3ae1
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [ebx + 0x118], ax
        mov     word ptr [ebx + 0x11a], cx
        jmp     L_3d49
    L_3ae1:
        mov     edx, dword ptr [esp + 0x90]
        push    0
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x88]
        test    eax, eax
        je      L_3b58
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jbe     L_3b58
        lea     ecx, [esp + 0x4c]
        call    FUN_004d24f0
        test    al, al
        je      L_3b58
        mov     cx, word ptr [esp + 0x8e]
        mov     ax, word ptr [esp + 0x8c]
        mov     word ptr [ebx + 0x11a], cx
        lea     ecx, [esp + 0x4c]
        mov     word ptr [ebx + 0x118], ax
        call    FUN_004d2630
        test    al, al
        jne     L_3d40
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
        jmp     L_3d40
    L_3b58:
        mov     ecx, dword ptr [g_7db0a0]
        lea     eax, [esp + 0x90]
        push    eax
        call    FUN_004cfbd0
        mov     ecx, dword ptr [g_7b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        je      L_3b9b
        lea     edx, [esp + 0xd4]
        push    edx
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], 0x76cd64
        mov     edi, esi
        jmp     L_3b9d
    L_3b9b:
        xor     edi, edi
    L_3b9d:
        push    0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi + 4]
        call    FUN_00417a40
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], eax
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x24]
        call    dword ptr [edx + 0x24]
    L_3bc6:
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        je      L_3ca7
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [edi + 8], eax
        je      L_3ca7
        push    1
        lea     ecx, [esp + 0x48]
        push    ecx
        push    0x79943c
        mov     ecx, esi
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x44]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_00412570
        push    eax
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x50]
        add     esp, 8
        test    eax, eax
        je      L_3c2b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_3c2b
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_3c2b:
        push    1
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x79942c
        mov     ecx, esi
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        push    eax
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
        test    eax, eax
        je      L_3c75
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_3c75
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_3c75:
        push    0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x79941c
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    FUN_00411d60
        mov     eax, dword ptr [esp + 0x1c]
        push    4
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x24]
        call    dword ptr [eax + 0x24]
        jmp     L_3bc6
    L_3ca7:
        mov     ecx, dword ptr [esp + 0x30]
        sub     ecx, dword ptr [esp + 0x2c]
        cmp     ecx, 4
        jbe     L_3d07
        lea     edx, [esp + 0x9c]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_004d2680
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2630
        test    al, al
        jne     L_3ce7
        mov     ecx, dword ptr [g_7db0b0]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
    L_3ce7:
        mov     dx, word ptr [esp + 0x8c]
        mov     ax, word ptr [esp + 0x8e]
        mov     word ptr [ebx + 0x118], dx
        mov     word ptr [ebx + 0x11a], ax
        jmp     L_3d23
    L_3d07:
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     word ptr [ebx + 0x118], cx
        mov     word ptr [ebx + 0x11a], dx
    L_3d23:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
    L_3d40:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d21c0
    L_3d49:
        lea     ecx, [esp + 0x90]
        call    FUN_0040de20
        mov     cx, word ptr [g_7db0ae]
        mov     ax, word ptr [g_7db0ac]
        mov     word ptr [ebx + 0x11e], cx
        push    0
        lea     ecx, [esp + 0x94]
        mov     word ptr [ebx + 0x11c], ax
        call    FUN_0040dd50
        push    0
        lea     edx, [esp + 0x94]
        push    edx
        push    0x79940c
        mov     ecx, ebp
        call    FUN_00412390
        test    al, al
        jne     L_3db8
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [ebx + 0x11c], ax
        mov     word ptr [ebx + 0x11e], cx
        jmp     L_3fd3
    L_3db8:
        mov     edx, dword ptr [esp + 0x90]
        push    0
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x88]
        test    eax, eax
        je      L_3e2f
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jbe     L_3e2f
        lea     ecx, [esp + 0x4c]
        call    FUN_004d24f0
        test    al, al
        je      L_3e2f
        mov     cx, word ptr [esp + 0x8e]
        mov     ax, word ptr [esp + 0x8c]
        mov     word ptr [ebx + 0x11e], cx
        lea     ecx, [esp + 0x4c]
        mov     word ptr [ebx + 0x11c], ax
        call    FUN_004d2630
        test    al, al
        jne     L_3fca
        mov     edx, dword ptr [g_7db0b0]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
        jmp     L_3fca
    L_3e2f:
        mov     ecx, dword ptr [g_7db0a0]
        lea     eax, [esp + 0x90]
        push    eax
        call    FUN_004cfbd0
        mov     ecx, dword ptr [g_7b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        je      L_3e75
        lea     edx, [esp + 0xd4]
        mov     dword ptr [eax + 4], edx
        mov     ecx, dword ptr [esp + 0xd4]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_3e77
    L_3e75:
        xor     edi, edi
    L_3e77:
        push    0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        mov     ecx, dword ptr [edi + 4]
        call    FUN_00417a40
        push    4
        lea     edx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x24]
        call    dword ptr [eax + 0x24]
    L_3ea0:
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        je      L_3f33
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [edi + 8], ecx
        je      L_3f33
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    0x79943c
        mov     ecx, esi
        call    FUN_00411bf0
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 8
        test    eax, eax
        je      L_3f01
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_3f01
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_3f01:
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        push    0x799400
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], 0x3c23d70a
        call    FUN_00411d60
        mov     edx, dword ptr [esp + 0x1c]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x24]
        call    dword ptr [edx + 0x24]
        jmp     L_3ea0
    L_3f33:
        mov     eax, dword ptr [esp + 0x30]
        sub     eax, dword ptr [esp + 0x2c]
        cmp     eax, 4
        jbe     L_3f92
        lea     ecx, [esp + 0x9c]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2680
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2630
        test    al, al
        jne     L_3f72
        mov     eax, dword ptr [g_7db0b0]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
    L_3f72:
        mov     cx, word ptr [esp + 0x8c]
        mov     dx, word ptr [esp + 0x8e]
        mov     word ptr [ebx + 0x11c], cx
        mov     word ptr [ebx + 0x11e], dx
        jmp     L_3fad
    L_3f92:
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [ebx + 0x11c], ax
        mov     word ptr [ebx + 0x11e], cx
    L_3fad:
        push    edi
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
    L_3fca:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d21c0
    L_3fd3:
        lea     ecx, [esp + 0x90]
        call    FUN_0040de20
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd0
        ret
    }
}
