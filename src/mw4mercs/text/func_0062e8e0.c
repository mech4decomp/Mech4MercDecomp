/*
 * FUN_0062e8e0 (924 B) — ABL/game-logic: loads an animation script, builds
 * effect/site data, iterates a linked list of effect files, and updates
 * global state (0x7db0a0/0x7db0ac/0x7db0ae/0x7db0b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db0b0;
extern int g_007db0a0;
extern int g_007b8c10;
extern int g_007b8810;

extern void __cdecl FUN_00507b10(void *a);
extern void __cdecl FUN_0040ed60(void *a);
extern void __cdecl FUN_00411bf0(void *a, void *b, int c);
extern int __cdecl FUN_0062de40(int a);
extern void __cdecl FUN_0040dd50(int a);
extern char __cdecl FUN_00412390(void *a, void *b, int c);
extern void __cdecl FUN_004d2000(int a, int b);
extern char __cdecl FUN_004d24f0(void);
extern char __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(int a);
extern void __cdecl FUN_00415180(int a);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_00412b80(void *a);
extern void __cdecl FUN_004cfbd0(void *a);
extern void *__cdecl FUN_004084c0(int a, int b);
extern void __cdecl FUN_004084e0(void *a);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void *a, int b);
extern void __cdecl FUN_00412780(int a);
extern void __cdecl FUN_00412a50(void *a, void *b);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void *a, void *b);
extern void __cdecl FUN_00412e70(void *a);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_0062e8e0(void)
{
    __asm {
        sub     esp, 0x150
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x164]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x29c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507b10
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x4]
        mov     esi, eax
        xor     ebx, ebx
        push    0x7723e8
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_0040ed60
        mov     ebp, eax
        push    ebx
        lea     eax, [esp + 0x1c]
        push    eax
        push    0x78d240
        mov     ecx, ebp
        call    FUN_00411bf0
        lea     edx, [esi + 0x88]
        mov     byte ptr [edx], bl
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, ebx
        jz      L_e96d
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [esp + 0x10]
    L_e96d:
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x78d230
        mov     ecx, ebp
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_0062de40
        mov     cx, word ptr [g_007db0ae]
        add     esp, 0x4
        mov     dword ptr [esi + 0x50], eax
        mov     ax, word ptr [g_007db0ac]
        mov     word ptr [esi + 0x5e], cx
        push    ebx
        lea     ecx, [esp + 0xd0]
        mov     word ptr [esi + 0x5c], ax
        call    FUN_0040dd50
        push    ebx
        lea     edx, [esp + 0xd0]
        push    edx
        push    0x78d220
        mov     ecx, ebp
        call    FUN_00412390
        test    al, al
        jz      L_ec65
        mov     eax, dword ptr [esp + 0xcc]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x90]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0xc4], ebx
        jz      L_ea4c
        cmp     dword ptr [esp + 0xa4], ebx
        jbe     L_ea4c
        lea     ecx, [esp + 0x88]
        call    FUN_004d24f0
        test    al, al
        jz      L_ea4c
        mov     cx, word ptr [esp + 0xc8]
        mov     dx, word ptr [esp + 0xca]
        mov     word ptr [esi + 0x5c], cx
        lea     ecx, [esp + 0x88]
        mov     word ptr [esi + 0x5e], dx
        call    FUN_004d2630
        test    al, al
        jnz     L_ec59
        mov     eax, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [esp + 0x8c]
        call    FUN_004d2840
        jmp     L_ec59
    L_ea4c:
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_00415180
        push    ebx
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x5c], ebx
        mov     dword ptr [esp + 0x60], ebx
        mov     dword ptr [esp + 0x54], 0x76cd9c
        call    FUN_0041ee70
        lea     edx, [esp + 0xd8]
        push    edx
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x54], 0x76d1f0
        call    FUN_00412b80
        mov     ebp, dword ptr [g_007db0b0]
        lea     ecx, [esp + 0xcc]
        lea     eax, [esp + 0x50]
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [g_007db0b0], eax
        call    FUN_004cfbd0
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041ee70
        mov     edx, dword ptr [g_007b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_eaee
        lea     ecx, [esp + 0x110]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0x110]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_eaf0
    L_eaee:
        xor     edi, edi
    L_eaf0:
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, ebx
        jz      L_ebc1
        mov     esi, dword ptr [eax]
        cmp     esi, ebx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], eax
        jz      L_ebbd
        push    0x1
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x78d214
        mov     ecx, esi
        call    FUN_00411bf0
        lea     ecx, [esp + 0x11c]
        call    FUN_004d1f10
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [g_007db0a0]
        push    edx
        lea     eax, [esp + 0x120]
        push    eax
        call    FUN_004d0100
        mov     edx, dword ptr [esp + 0x28]
        push    0x4
        lea     ecx, [esp + 0x160]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     eax, [esp + 0x24]
        push    eax
        push    0x78d208
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_eba8
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_eba8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_eba8:
        lea     ecx, [esp + 0x11c]
        call    FUN_004d21c0
        mov     esi, dword ptr [esp + 0x10]
        jmp     L_eaf0
    L_ebbd:
        mov     esi, dword ptr [esp + 0x10]
    L_ebc1:
        mov     ecx, dword ptr [esp + 0x3c]
        sub     ecx, dword ptr [esp + 0x38]
        jz      L_ec17
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x90]
        call    FUN_004d2680
        lea     ecx, [esp + 0x88]
        call    FUN_004d2630
        test    al, al
        jnz     L_ebfd
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, ebp
        call    FUN_00412e70
    L_ebfd:
        mov     dx, word ptr [esp + 0xc8]
        mov     ax, word ptr [esp + 0xca]
        mov     word ptr [esi + 0x5c], dx
        mov     word ptr [esi + 0x5e], ax
        jmp     L_ec2d
    L_ec17:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x5c], cx
        mov     word ptr [esi + 0x5e], dx
    L_ec2d:
        push    edi
        mov     dword ptr [g_007db0b0], ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [g_007db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x28]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x50]
        call    FUN_00412b60
    L_ec59:
        lea     ecx, [esp + 0x88]
        call    FUN_004d21c0
    L_ec65:
        lea     ecx, [esp + 0xcc]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x150
        ret
    }
}
