/*
 * FUN_00595ce0 (3536 B) — Large initialization/configuration routine.
 * Builds many formatted strings and dispatches them through a vtable
 * (call dword ptr [edx+0x24]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00597140(void);
extern void __cdecl FUN_005971f0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_005930c0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004cff20(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411a80(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_005945a0(void);
extern void __cdecl FUN_00594120(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041ef60(void);

extern int g_007b8810;
extern int g_0076b298;
extern int g_007b8c10;
extern int g_00782f04;
extern char g_00782f08;
extern int g_00782f00;

__declspec(naked) void __cdecl FUN_00595ce0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8810]
        sub     esp, 0x1d4
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    0xc
        call    FUN_004084c0
        mov     edi, eax
        xor     ebp, ebp
        add     esp, 8
        cmp     edi, ebp
        jz      label_1c
        mov     ecx, dword ptr [esp + 0x1ec]
        add     ecx, 0x44
        push    ecx
        mov     ecx, edi
        call    FUN_004c41d0
        mov     dword ptr [edi], 0x76cd64
        jmp     label_1e
label_1c:
        xor     edi, edi
label_1e:
        mov     ecx, edi
        mov     dword ptr [esp + 0x64], edi
        mov     dword ptr [esp + 0x3c], ebp
        mov     dword ptr [esp + 0x38], ebp
        mov     dword ptr [esp + 0x24], ebp
        call    FUN_0040c0e0
        cmp     eax, ebp
        mov     ebx, dword ptr [g_0076b298]
        jz      label_7b
label_3f:
        mov     esi, dword ptr [eax + 0x14]
        push    0x7830cc
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      label_57
        inc     dword ptr [esp + 0x3c]
        jmp     label_70
label_57:
        push    0x7830c4
        push    esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      label_6c
        inc     dword ptr [esp + 0x24]
        jmp     label_70
label_6c:
        inc     dword ptr [esp + 0x38]
label_70:
        mov     ecx, edi
        call    FUN_0040c0e0
        cmp     eax, ebp
        jnz     label_3f
label_7b:
        mov     esi, dword ptr [esp + 0x1e8]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, edi
        mov     dword ptr [edi + 8], edx
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jz      label_ce
label_a5:
        mov     eax, dword ptr [ebp + 0x14]
        push    0x7830c4
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      label_c1
        push    esi
        push    ebp
        call    FUN_005945a0
        add     esp, 8
label_c1:
        mov     ecx, edi
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jnz     label_a5
label_ce:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, edi
        mov     dword ptr [edi + 8], edx
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jz      label_1a
label_f1:
        mov     eax, dword ptr [ebp + 0x14]
        push    0x7830cc
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jz      label_0d
        push    esi
        push    ebp
        call    FUN_00594120
        add     esp, 8
label_0d:
        mov     ecx, edi
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jnz     label_f1
label_1a:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xdc]
        xor     ebp, ebp
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xe0], ebp
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x108]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x10c], ebp
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xe4]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xe8], ebp
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x110]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x114], ebp
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, edi
        mov     dword ptr [edi + 8], edx
        call    FUN_0040c0e0
        cmp     eax, ebp
        jz      label_ea
label_9d:
        mov     ebp, dword ptr [eax + 0x14]
        push    0x7830cc
        push    ebp
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     label_df
        push    0x7830c4
        push    ebp
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     label_df
        push    ebp
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        lea     ecx, [esp + 0x1c]
        call    FUN_0040d9b0
label_df:
        mov     ecx, edi
        call    FUN_0040c0e0
        test    eax, eax
        jnz     label_9d
label_ea:
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [edi + 8], edx
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], 0
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jz      label_9e0
label_f0b:
        mov     ebx, dword ptr [ebp + 0x14]
        push    0x7830cc
        push    ebx
        call    dword ptr [g_0076b298]
        add     esp, 8
        test    eax, eax
        jnz     label_9cf
        push    0x7830c4
        push    ebx
        call    dword ptr [g_0076b298]
        add     esp, 8
        test    eax, eax
        jnz     label_9cf
        mov     eax, dword ptr [esp + 0x20]
        xor     edi, edi
        cmp     eax, edi
        jnz     label_f50
        push    ebx
        lea     ecx, [esp + 0x24]
        call    FUN_00412780
label_f50:
        push    edi
        lea     eax, [esp + 0x98]
        push    eax
        push    0x782ad4
        mov     ecx, ebp
        mov     dword ptr [esp + 0xa0], 0xffffffff
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x98]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        lea     ecx, [esp + 0xec]
        push    ecx
        push    0x776994
        mov     ecx, ebp
        call    FUN_00411bf0
        mov     edx, dword ptr [esp + 0xe8]
        push    edx
        call    FUN_00597140
        add     esp, 4
        push    4
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    edi
        lea     edx, [esp + 0x4c]
        push    edx
        push    0x782cb8
        mov     ecx, ebp
        mov     dword ptr [esp + 0x54], 1
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    edi
        lea     edx, [esp + 0x10c]
        push    edx
        push    0x773784
        mov     ecx, ebp
        mov     dword ptr [esp + 0xa4], edi
        call    FUN_00411bf0
        test    al, al
        jz      label_6018
        mov     eax, dword ptr [esp + 0x108]
        push    eax
        call    FUN_005971f0
        add     esp, 4
        mov     dword ptr [esp + 0x98], eax
label_6018:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x9c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    edi
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x7830b8
        mov     ecx, ebp
        mov     dword ptr [esp + 0x3c], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x30]
        push    edi
        lea     edx, [esp + 0x54]
        push    edx
        mov     dword ptr [esp + 0x58], ecx
        push    0x7830a4
        mov     ecx, ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x54]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    edi
        lea     ecx, [esp + 0x144]
        call    FUN_0041ee70
        lea     edx, [esp + 0x140]
        push    ebp
        push    edx
        call    FUN_005930c0
        mov     eax, dword ptr [esp + 0x164]
        add     esp, 8
        cmp     eax, edi
        jbe     label_6224
        push    ebx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x18]
        push    0x78308c
        push    eax
        lea     ecx, [esp + 0xf8]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0xf0]
        call    FUN_0040d9b0
        mov     ebx, dword ptr [esp + 0x1ec]
        mov     ecx, dword ptr [ebx]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        lea     ecx, [esp + 0x28]
        call    FUN_00412950
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        call    FUN_004cff20
        add     esp, 4
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0xa0]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x11c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x114]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esp + 0x18]
        push    edi
        push    edx
        lea     ecx, [esp + 0x1a8]
        call    FUN_004d2000
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        lea     ecx, [esp + 0x16c]
        call    FUN_004d05d0
        push    edi
        lea     ecx, [esp + 0x17c]
        call    FUN_0041ee70
        add     ebx, 0xc
        push    ebx
        lea     ecx, [esp + 0x16c]
        mov     dword ptr [esp + 0x16c], 0x76d1f0
        call    FUN_00412b80
        lea     ecx, [esp + 0x168]
        push    ecx
        lea     edx, [esp + 0x144]
        push    edx
        lea     ecx, [esp + 0x1a8]
        call    FUN_004d2680
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x1e4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x168]
        call    FUN_00412b60
        lea     ecx, [esp + 0x1a0]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xa0]
        cmp     eax, edi
        jz      label_61ec
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_61ec
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_61ec:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, edi
        jz      label_6207
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6207
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_6207:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jz      label_6232
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6232
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_6232
label_6224:
        mov     edx, dword ptr [esi]
        push    4
        push    0x7db0ac
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_6232:
        push    edi
        lea     eax, [esp + 0x5c]
        push    eax
        push    0x78307c
        mov     ecx, ebp
        mov     dword ptr [esp + 0x64], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    edi
        lea     ecx, [esp + 0xac]
        push    ecx
        push    0x783074
        mov     ecx, ebp
        mov     dword ptr [esp + 0xb4], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xfc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x100], edi
        call    dword ptr [edx + 0x24]
        push    edi
        lea     ecx, [esp + 0x64]
        push    ecx
        push    0x782c98
        mov     ecx, ebp
        mov     dword ptr [esp + 0x6c], edi
        call    FUN_00411bf0
        mov     eax, dword ptr [esp + 0x60]
        cmp     eax, edi
        mov     dword ptr [esp + 0x1c], edi
        jz      label_62c7
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412780
label_62c7:
        lea     edx, [esp + 0x1c]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    edi
        lea     eax, [esp + 0xb4]
        push    eax
        push    0x783060
        mov     ecx, ebp
        mov     dword ptr [esp + 0xbc], 0x76b768
        mov     dword ptr [esp + 0x40], edi
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0xb0]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_00412780
        lea     edx, [esp + 0x34]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    edi
        lea     eax, [esp + 0x6c]
        push    eax
        push    0x783050
        mov     ecx, ebp
        mov     dword ptr [esp + 0x74], 1
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x6c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    edi
        lea     ecx, [esp + 0x114]
        push    ecx
        push    0x782c88
        mov     ecx, ebp
        call    FUN_00411bf0
        test    al, al
        jz      label_63dd
        mov     edx, dword ptr [esp + 0x110]
        push    edx
        lea     ecx, [esp + 0x74]
        call    FUN_00412570
        push    edi
        lea     eax, [esp + 0xbc]
        push    eax
        push    0x782c74
        mov     ecx, ebp
        mov     dword ptr [esp + 0xc4], 0x64
        mov     byte ptr [esp + 0x22], 1
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x1a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x70]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [esp + 0xbc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x70]
        cmp     eax, edi
        jz      label_63f0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_63f0
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_63f0
label_63dd:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x19]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1d], 0
        call    dword ptr [edx + 0x24]
label_63f0:
        push    0x782c2c
        mov     ecx, ebp
        call    FUN_00411a80
        mov     ebx, eax
        mov     edi, dword ptr [ebx]
        mov     ecx, ebx
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x100], eax
        push    4
        lea     eax, [esp + 0x104]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_641f:
        test    edi, edi
        jz      label_646d
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        jz      label_646d
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        lea     ecx, [esp + 0xc4]
        call    FUN_00412570
        lea     edx, [esp + 0xc0]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0xc8]
        add     esp, 8
        test    eax, eax
        jz      label_641f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_641f
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_641f
label_646d:
        test    ebx, ebx
        jz      label_6481
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4
label_6481:
        push    0
        lea     eax, [esp + 0x7c]
        push    eax
        or      edi, 0xffffffff
        push    0x783040
        mov     ecx, ebp
        mov     dword ptr [esp + 0x84], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xcc]
        push    ecx
        push    0x78302c
        mov     ecx, ebp
        mov     dword ptr [esp + 0xd4], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xcc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x88]
        push    ecx
        push    0x783014
        mov     ecx, ebp
        mov     dword ptr [esp + 0x90], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x88]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x84]
        push    ecx
        push    0x782ffc
        mov     ecx, ebp
        mov     dword ptr [esp + 0x8c], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x84]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xc8]
        push    ecx
        push    0x782fe4
        mov     ecx, ebp
        mov     dword ptr [esp + 0xd0], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xc8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x90]
        push    ecx
        push    0x782fd0
        mov     ecx, ebp
        mov     dword ptr [esp + 0x98], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x90]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     dword ptr [esp + 0xac], edi
        push    0
        lea     ecx, [esp + 0xb0]
        push    ecx
        push    0x782fc0
        mov     ecx, ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xb0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        cmp     dword ptr [esp + 0x2c], 1
        mov     dword ptr [esp + 0x40], edi
        jnz     label_65d3
        mov     dword ptr [esp + 0x40], 0
label_65d3:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xc0]
        push    ecx
        or      edi, 0xffffffff
        push    0x782fb4
        mov     ecx, ebp
        mov     dword ptr [esp + 0xc8], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xc0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xa0]
        push    ecx
        push    0x782fa0
        mov     ecx, ebp
        mov     dword ptr [esp + 0xa8], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xa0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xb8]
        push    ecx
        push    0x782f8c
        mov     ecx, ebp
        mov     dword ptr [esp + 0xc0], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xb8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0xa8]
        push    ecx
        push    0x782f78
        mov     ecx, ebp
        mov     dword ptr [esp + 0xb0], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xa8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x80]
        push    ecx
        push    0x782f68
        mov     ecx, ebp
        mov     dword ptr [esp + 0x88], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x8c]
        push    ecx
        push    0x782f58
        mov     ecx, ebp
        mov     dword ptr [esp + 0x94], edi
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x8c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xe0]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xe4], edi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x94]
        push    ecx
        mov     ebx, 1
        push    0x782f40
        mov     ecx, ebp
        mov     dword ptr [esp + 0x9c], ebx
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x94]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x48]
        push    ecx
        push    0x782f28
        mov     ecx, ebp
        mov     dword ptr [esp + 0x50], 0x270f
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x50]
        push    ecx
        push    0x782f18
        mov     ecx, ebp
        mov     dword ptr [esp + 0x58], ebx
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x1b]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1f], 0
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    ebx
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1b], 0
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi]
        test    ecx, ecx
        setz    cl
        push    ebx
        lea     eax, [esp + 0x18]
        mov     byte ptr [esp + 0x18], cl
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0
        lea     ecx, [esp + 0x11c]
        push    ecx
        push    0x782f0c
        mov     ecx, ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [g_00782f04]
        mov     cl, byte ptr [g_00782f08]
        mov     edx, dword ptr [g_00782f00]
        mov     dword ptr [esp + 0xd0], eax
        mov     eax, edi
        mov     byte ptr [esp + 0xd4], cl
        mov     ecx, 9
        lea     edi, [esp + 0x11c]
        rep stosd
        mov     dword ptr [esp + 0xcc], edx
        mov     byte ptr [esp + 0xd5], 0
        lea     edi, [esp + 0x11c]
label_682a:
        push    0
        mov     dl, bl
        push    edi
        lea     eax, [esp + 0xd4]
        add     dl, 0x30
        push    eax
        mov     ecx, ebp
        mov     byte ptr [esp + 0xdf], dl
        call    FUN_00411cb0
        cmp     dword ptr [edi], -1
        jnz     label_6856
        mov     ecx, dword ptr [esp + 0x118]
        mov     dword ptr [edi], ecx
label_6856:
        inc     ebx
        add     edi, 4
        cmp     ebx, 0xa
        jl      label_682a
        lea     edi, [esp + 0x118]
        mov     ebx, 0xa
label_686b:
        mov     edx, dword ptr [esi]
        push    4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 4
        dec     ebx
        jnz     label_686b
        push    0x782eec
        mov     ecx, ebp
        call    FUN_00411a80
        mov     ebx, eax
        mov     edi, dword ptr [ebx]
        mov     ecx, ebx
        call    FUN_00417a40
        push    4
        lea     ecx, [esp + 0xe8]
        mov     dword ptr [esp + 0xe8], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
label_68aa:
        test    edi, edi
        jz      label_68ef
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        jz      label_68ef
        mov     edx, dword ptr [eax + 0x18]
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_00412570
        lea     eax, [esp + 0x54]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x5c]
        add     esp, 8
        test    eax, eax
        jz      label_68aa
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_68aa
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_68aa
label_68ef:
        test    ebx, ebx
        jz      label_6903
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4
label_6903:
        push    0x782edc
        mov     ecx, ebp
        call    FUN_00411a80
        mov     edi, dword ptr [eax]
        mov     ecx, eax
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0xec], eax
        push    4
        lea     eax, [esp + 0xf0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_6930:
        test    edi, edi
        jz      label_6975
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        jz      label_6975
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    FUN_00412570
        lea     edx, [esp + 0x5c]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x64]
        add     esp, 8
        test    eax, eax
        jz      label_6930
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6930
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_6930
label_6975:
        test    ebx, ebx
        jz      label_6989
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4
label_6989:
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jz      label_69a4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_69a4
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_69a4:
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      label_69bf
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_69bf
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_69bf:
        lea     ecx, [esp + 0x140]
        call    FUN_0041ef60
        mov     edi, dword ptr [esp + 0x64]
label_9cf:
        mov     ecx, edi
        call    FUN_0040c0e0
        mov     ebp, eax
        test    ebp, ebp
        jnz     label_f0b
label_9e0:
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        xor     ebx, ebx
        call    FUN_00412a50
        add     esp, 8
        push    0x782eb0
        lea     ecx, [esp + 0x78]
        call    FUN_00412570
        lea     ecx, [esp + 0x74]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [esp + 0xf8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0xfc], ebx
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x100]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x104], ebx
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x6c]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x74], ebx
        call    FUN_00412a50
        push    edi
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x78]
        add     esp, 0xc
        cmp     eax, ebx
        jz      label_6a6f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6a6f
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_6a6f:
        mov     eax, dword ptr [esp + 0x74]
        cmp     eax, ebx
        jz      label_6a8a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6a8a
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_6a8a:
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        jz      label_6aa9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     label_6aa9
        push    eax
        call    FUN_004084e0
        add     esp, 4
label_6aa9:
        add     esp, 0x1d4
        ret
    }
}
