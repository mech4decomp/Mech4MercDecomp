/*
 * FUN_00508160 (3734 B) — terrain/geometry tile loader (post-MLR block).
 * Loads a tile's NameTable/Props/Armory sections and four bound sets
 * (NameTable/NightSky/WarningBounds/MissionBounds) via the 0x4dxxxx
 * stream/table helpers, populating a tile object (ESI) with word-sized
 * bounds at offsets 0x60..0x7e.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004fbe20(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004fbf30(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004fc600(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0690(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004fca80(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004fc1c0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004d0600(void);

extern int  g_007db0a0;   /* DAT_007db0a0 */
extern int  g_007db0b0;   /* DAT_007db0b0 */
extern unsigned short g_007db0ac;  /* DAT_007db0ac */
extern unsigned short g_007db0ae;  /* DAT_007db0ae */
extern int  g_007dab44;   /* DAT_007dab44 */
extern int  g_007dab40;   /* DAT_007dab40 */
extern int  g_007b8810;   /* DAT_007b8810 */
extern int  g_007b8c10;   /* DAT_007b8c10 */

__declspec(naked) void FUN_00508160(void)
{
    __asm {
        sub     esp, 0x124
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x134]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x84
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ebx, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [ebx + 0x10]
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x14]
        and     eax, 0xfffffff9
        or      eax, 0x1
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [esi], 0x84
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esp + 0x94], ebx
        call    FUN_004cfbd0
        push    0xa0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L81D5
        mov     ecx, eax
        call    FUN_004fbe20
        jmp     L81D7
L81D5:
        xor     eax, eax
L81D7:
        push    0x4
        push    eax
        call    FUN_004c8eb0
        mov     edx, dword ptr [ebx + 0x14]
        add     esp, 0x8
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0xc]
        push    0x777204
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L8227
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L8227
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L8227:
        mov     ecx, dword ptr [esp + 0xc]
        push    ebp
        push    0x0
        push    ecx
        lea     ecx, [esp + 0xa4]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xd8]
        test    eax, eax
        jz      L82DC
        mov     eax, dword ptr [esp + 0xb8]
        test    eax, eax
        jbe     L82DC
        lea     ecx, [esp + 0x9c]
        call    FUN_004d24f0
        test    al, al
        jz      L82DC
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2310
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        lea     edx, [esp + 0x9c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fbf30
        mov     dx, word ptr [esp + 0xdc]
        mov     ax, word ptr [esp + 0xde]
        lea     ecx, [esp + 0x9c]
        mov     word ptr [esi + 0x64], dx
        mov     word ptr [esi + 0x66], ax
        call    FUN_004d2630
        test    al, al
        jnz     L83FF
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_004d2840
        jmp     L83FF
L82DC:
        push    0x0
        lea     ecx, [esp + 0xe8]
        call    FUN_0040dd50
        push    0x0
        lea     edx, [esp + 0xe8]
        push    edx
        push    0x775a74
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jz      L8346
        mov     ecx, dword ptr [g_007db0a0]
        lea     eax, [esp + 0xe4]
        push    eax
        call    FUN_004cfbd0
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0xe4]
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fc1c0
        mov     ecx, dword ptr [g_007db0a0]
        call    FUN_004cfc90
L8346:
        push    0x0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ebp, dword ptr [g_007dab40]
        lea     ecx, [esp + 0x1c]
        push    ecx
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fc600
        mov     ecx, dword ptr [esp + 0x30]
        sub     ecx, dword ptr [esp + 0x2c]
        jz      L83D4
        lea     edx, [esp + 0xf0]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_004d2680
        lea     ecx, [esp + 0x9c]
        call    FUN_004d2630
        test    al, al
        jz      L83BA
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0xa0]
        call    FUN_004d2840
L83BA:
        mov     dx, word ptr [esp + 0xdc]
        mov     ax, word ptr [esp + 0xde]
        mov     word ptr [esi + 0x64], dx
        mov     word ptr [esi + 0x66], ax
        jmp     L83EA
L83D4:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x64], cx
        mov     word ptr [esi + 0x66], dx
L83EA:
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0xe4]
        call    FUN_0040de20
L83FF:
        lea     ecx, [esp + 0x9c]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L8426
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L8426
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L8426:
        push    0x0
        lea     ecx, [esp + 0xe8]
        call    FUN_0040dd50
        push    0x1
        lea     eax, [esp + 0xe8]
        push    eax
        push    0x775b1c
        mov     ecx, ebx
        call    FUN_00412390
        lea     ecx, [esp + 0x4c]
        call    FUN_004d1f10
        mov     edi, dword ptr [edi + 0x8]
        mov     bp, word ptr [edi + 0x2]
        push    edi
        lea     ecx, [esp + 0xe8]
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        lea     edx, [esp + 0x54]
        push    edx
        call    FUN_004d0690
        mov     cx, word ptr [esp + 0x8e]
        mov     dx, word ptr [edi + 0x2]
        mov     ax, word ptr [esp + 0x8c]
        mov     word ptr [esi + 0x76], cx
        sub     dx, bp
        add     word ptr [esi + 0x1a], dx
        lea     ecx, [esp + 0x4c]
        mov     word ptr [esi + 0x74], ax
        call    FUN_004d21c0
        lea     ecx, [esp + 0xe4]
        call    FUN_0040de20
        push    0x0
        lea     ecx, [esp + 0xe8]
        call    FUN_0040dd50
        push    0x0
        lea     eax, [esp + 0xe8]
        push    eax
        push    0x775b14
        mov     ecx, ebx
        call    FUN_00412390
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        mov     ebp, eax
        add     esp, 0x8
        test    ebp, ebp
        jz      L84FE
        lea     edx, [esp + 0x128]
        push    edx
        mov     ecx, ebp
        call    FUN_004c41d0
        mov     dword ptr [ebp], 0x76cd64
        jmp     L8500
L84FE:
        xor     ebp, ebp
L8500:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_00417a40
        test    eax, eax
        jnz     L852A
        mov     ax, word ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x70], ax
        mov     word ptr [esi + 0x72], cx
        jmp     L87D4
L852A:
        mov     edx, dword ptr [esp + 0xe4]
        push    0x0
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x88]
        test    eax, eax
        jz      L85CC
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jbe     L85CC
        lea     ecx, [esp + 0x4c]
        call    FUN_004d24f0
        test    al, al
        jz      L85CC
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2310
        mov     edx, dword ptr [esp + 0x4c]
        push    0x2
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x54]
        call    dword ptr [edx + 0x20]
        mov     ax, word ptr [esp + 0x10]
        add     word ptr [edi + 0x2], ax
        mov     cx, word ptr [esp + 0x10]
        add     word ptr [esi + 0x1a], cx
        mov     dx, word ptr [esp + 0x8c]
        mov     ax, word ptr [esp + 0x8e]
        lea     ecx, [esp + 0x4c]
        mov     word ptr [esi + 0x70], dx
        mov     word ptr [esi + 0x72], ax
        call    FUN_004d2630
        test    al, al
        jnz     L87CB
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
        jmp     L87CB
L85CC:
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        lea     ecx, [esp + 0xa0]
        call    FUN_00415180
        xor     eax, eax
        push    eax
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0xa8], eax
        mov     dword ptr [esp + 0xac], eax
        mov     dword ptr [esp + 0xa0], 0x76cd9c
        call    FUN_0041ee70
        lea     eax, [esp + 0xf0]
        push    eax
        lea     ecx, [esp + 0xa0]
        mov     dword ptr [esp + 0xa0], 0x76d1f0
        call    FUN_00412b80
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0xe4]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [g_007db0a0]
        lea     edx, [esp + 0x9c]
        push    eax
        mov     dword ptr [g_007db0b0], edx
        call    FUN_004cfbd0
        push    0x2
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x1c]
        push    0x2
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x20], 0x0
        call    dword ptr [edx + 0x24]
        mov     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [esp + 0x30]
        mov     word ptr [esp + 0x1a], ax
        jmp     L868F
L8684:
        mov     ebp, dword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x94]
L868F:
        mov     edx, dword ptr [ebp + 0x8]
        test    edx, edx
        jz      L86F6
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [ebp + 0x8], edx
        jz      L86F6
        mov     ebx, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [g_007db0a0]
        push    edi
        push    eax
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_004d0600
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ebp, eax
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebp + 0x5c], eax
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x30], ecx
        jbe     L8684
        mov     dword ptr [esp + 0x34], ecx
        jmp     L8684
L86F6:
        sub     ecx, dword ptr [esp + 0x2c]
        cmp     ecx, 0x2
        jbe     L876E
        mov     edx, dword ptr [esp + 0x1c]
        push    0x0
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x24], 0xffffffec
        mov     ax, word ptr [edi + 0x2]
        sub     ax, word ptr [esp + 0x1a]
        push    0x2
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [edx + 0x24]
        mov     ax, word ptr [esp + 0x10]
        add     word ptr [esi + 0x1a], ax
        lea     ecx, [esp + 0x9c]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2680
        mov     ax, word ptr [esp + 0x8c]
        mov     cx, word ptr [esp + 0x8e]
        mov     word ptr [esi + 0x70], ax
        mov     word ptr [esi + 0x72], cx
        jmp     L8783
L876E:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x70], dx
        mov     word ptr [esi + 0x72], ax
L8783:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2630
        test    al, al
        jnz     L87A1
        lea     ecx, [esp + 0x9c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_00412e70
L87A1:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [g_007db0b0], edx
        call    FUN_004cfc90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x9c]
        call    FUN_00412b60
L87CB:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d21c0
L87D4:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp + 0xe4]
        call    FUN_0040de20
        push    0x0
        lea     ecx, [esp + 0xe8]
        call    FUN_0040dd50
        push    0x0
        lea     eax, [esp + 0xe8]
        push    eax
        push    0x7771fc
        mov     ecx, ebx
        call    FUN_00412390
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L8840
        lea     edx, [esp + 0x128]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0x128]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     ebp, eax
        jmp     L8842
L8840:
        xor     ebp, ebp
L8842:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_00417a40
        test    eax, eax
        jnz     L886C
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x60], dx
        mov     word ptr [esi + 0x62], ax
        jmp     L8B16
L886C:
        mov     ecx, dword ptr [esp + 0xe4]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x88]
        test    eax, eax
        jz      L890E
        mov     eax, dword ptr [esp + 0x68]
        test    eax, eax
        jbe     L890E
        lea     ecx, [esp + 0x4c]
        call    FUN_004d24f0
        test    al, al
        jz      L890E
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2310
        mov     eax, dword ptr [esp + 0x4c]
        push    0x2
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x54]
        call    dword ptr [eax + 0x20]
        mov     cx, word ptr [esp + 0x14]
        add     word ptr [edi + 0x2], cx
        mov     dx, word ptr [esp + 0x14]
        mov     cx, word ptr [esp + 0x8e]
        add     word ptr [esi + 0x1a], dx
        mov     ax, word ptr [esp + 0x8c]
        mov     word ptr [esi + 0x62], cx
        lea     ecx, [esp + 0x4c]
        mov     word ptr [esi + 0x60], ax
        call    FUN_004d2630
        test    al, al
        jnz     L8B0D
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2840
        jmp     L8B0D
L890E:
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        lea     ecx, [esp + 0xa0]
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        lea     ecx, [esp + 0xb0]
        mov     dword ptr [esp + 0xa8], ebx
        mov     dword ptr [esp + 0xac], ebx
        mov     dword ptr [esp + 0xa0], 0x76cd9c
        call    FUN_0041ee70
        lea     ecx, [esp + 0xf0]
        push    ecx
        lea     ecx, [esp + 0xa0]
        mov     dword ptr [esp + 0xa0], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_007db0b0]
        lea     ecx, [esp + 0xe4]
        lea     eax, [esp + 0x9c]
        push    ecx
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [g_007db0b0], eax
        call    FUN_004cfbd0
        push    0x2
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        mov     eax, dword ptr [esp + 0x1c]
        push    0x2
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], ebx
        call    dword ptr [eax + 0x24]
        mov     cx, word ptr [edi + 0x2]
        mov     word ptr [esp + 0xe2], cx
        mov     ecx, dword ptr [esp + 0x30]
        jmp     L89C7
L89C3:
        mov     ebp, dword ptr [esp + 0x10]
L89C7:
        mov     edx, dword ptr [ebp + 0x8]
        test    edx, edx
        jz      L8A2E
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [ebp + 0x8], edx
        jz      L8A2E
        mov     ebx, dword ptr [eax + 0x14]
        mov     ecx, dword ptr [g_007db0a0]
        push    edi
        push    eax
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_004d0600
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ebp, eax
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fca80
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebp + 0x5c], eax
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x30], ecx
        jbe     L89C3
        mov     dword ptr [esp + 0x34], ecx
        jmp     L89C3
L8A2E:
        sub     ecx, dword ptr [esp + 0x2c]
        cmp     ecx, 0x2
        jbe     L8AA9
        mov     edx, dword ptr [esp + 0x1c]
        push    0x0
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x24], 0xffffffec
        mov     ax, word ptr [edi + 0x2]
        sub     ax, word ptr [esp + 0xe2]
        push    0x2
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [edx + 0x24]
        mov     ax, word ptr [esp + 0x14]
        add     word ptr [esi + 0x1a], ax
        lea     ecx, [esp + 0x9c]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004d2680
        mov     ax, word ptr [esp + 0x8c]
        mov     cx, word ptr [esp + 0x8e]
        mov     word ptr [esi + 0x60], ax
        mov     word ptr [esi + 0x62], cx
        jmp     L8ABE
L8AA9:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x60], dx
        mov     word ptr [esi + 0x62], ax
L8ABE:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2630
        test    al, al
        jnz     L8ADC
        lea     ecx, [esp + 0x9c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        call    FUN_00412e70
L8ADC:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_007db0a0]
        mov     dword ptr [g_007db0b0], edx
        call    FUN_004cfc90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x9c]
        call    FUN_00412b60
        mov     ebx, dword ptr [esp + 0x94]
L8B0D:
        lea     ecx, [esp + 0x4c]
        call    FUN_004d21c0
L8B16:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp + 0xe4]
        call    FUN_0040de20
        mov     ecx, dword ptr [g_007db0a0]
        call    FUN_004cfc90
        mov     cx, word ptr [g_007db0ae]
        mov     ax, word ptr [g_007db0ac]
        push    0x0
        lea     edx, [esp + 0x94]
        push    edx
        mov     word ptr [esi + 0x6a], cx
        push    0x775b10
        mov     ecx, ebx
        mov     word ptr [esi + 0x68], ax
        call    FUN_00411bf0
        test    al, al
        pop     ebp
        jz      L8C55
        mov     eax, dword ptr [esp + 0x8c]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        mov     ecx, dword ptr [esp + 0x3c]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x84]
        test    eax, eax
        jz      L8BCC
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        jbe     L8BCC
        lea     ecx, [esp + 0x48]
        call    FUN_004d24f0
        test    al, al
        jz      L8BCC
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8C2B
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2840
        jmp     L8C2B
L8BCC:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b30
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_00412bf0
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2680
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8C1F
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0x98]
        push    eax
        call    FUN_00412e70
L8C1F:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b60
L8C2B:
        mov     cx, word ptr [esp + 0x88]
        mov     dx, word ptr [esp + 0x8a]
        mov     word ptr [esi + 0x68], cx
        lea     ecx, [esp + 0x48]
        mov     word ptr [esi + 0x6a], dx
        call    FUN_004d21c0
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
L8C55:
        mov     cx, word ptr [g_007db0ae]
        mov     ax, word ptr [g_007db0ac]
        push    0x0
        lea     edx, [esp + 0x90]
        push    edx
        mov     word ptr [esi + 0x6e], cx
        push    0x775ac4
        mov     ecx, ebx
        mov     word ptr [esi + 0x6c], ax
        call    FUN_00411bf0
        test    al, al
        jz      L8D73
        mov     eax, dword ptr [esp + 0x8c]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        mov     ecx, dword ptr [esp + 0x3c]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x84]
        test    eax, eax
        jz      L8CEA
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        jbe     L8CEA
        lea     ecx, [esp + 0x48]
        call    FUN_004d24f0
        test    al, al
        jz      L8CEA
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8D49
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2840
        jmp     L8D49
L8CEA:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b30
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_00412bf0
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2680
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8D3D
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0x98]
        push    eax
        call    FUN_00412e70
L8D3D:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b60
L8D49:
        mov     cx, word ptr [esp + 0x88]
        mov     dx, word ptr [esp + 0x8a]
        mov     word ptr [esi + 0x6c], cx
        lea     ecx, [esp + 0x48]
        mov     word ptr [esi + 0x6e], dx
        call    FUN_004d21c0
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
L8D73:
        mov     cx, word ptr [g_007db0ae]
        mov     ax, word ptr [g_007db0ac]
        push    0x0
        lea     edx, [esp + 0x98]
        push    edx
        mov     word ptr [esi + 0x7a], cx
        push    0x775ad0
        mov     ecx, ebx
        mov     word ptr [esi + 0x78], ax
        call    FUN_00411bf0
        test    al, al
        jz      L8E91
        mov     eax, dword ptr [esp + 0x94]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        mov     ecx, dword ptr [esp + 0x3c]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x84]
        test    eax, eax
        jz      L8E08
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        jbe     L8E08
        lea     ecx, [esp + 0x48]
        call    FUN_004d24f0
        test    al, al
        jz      L8E08
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8E67
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2840
        jmp     L8E67
L8E08:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b30
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_00412bf0
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2680
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8E5B
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0x98]
        push    eax
        call    FUN_00412e70
L8E5B:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b60
L8E67:
        mov     cx, word ptr [esp + 0x88]
        mov     dx, word ptr [esp + 0x8a]
        mov     word ptr [esi + 0x78], cx
        lea     ecx, [esp + 0x48]
        mov     word ptr [esi + 0x7a], dx
        call    FUN_004d21c0
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
L8E91:
        mov     cx, word ptr [g_007db0ae]
        mov     ax, word ptr [g_007db0ac]
        push    0x0
        lea     edx, [esp + 0x98]
        push    edx
        mov     word ptr [esi + 0x7e], cx
        push    0x775af0
        mov     ecx, ebx
        mov     word ptr [esi + 0x7c], ax
        call    FUN_00411bf0
        test    al, al
        jz      L8FAF
        mov     eax, dword ptr [esp + 0x94]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        mov     ecx, dword ptr [esp + 0x3c]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x84]
        test    eax, eax
        jz      L8F26
        mov     eax, dword ptr [esp + 0x64]
        test    eax, eax
        jbe     L8F26
        lea     ecx, [esp + 0x48]
        call    FUN_004d24f0
        test    al, al
        jz      L8F26
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8F85
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x4c]
        call    FUN_004d2840
        jmp     L8F85
L8F26:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b30
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x9c]
        call    FUN_00412bf0
        lea     ecx, [esp + 0x98]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004d2680
        lea     ecx, [esp + 0x48]
        call    FUN_004d2630
        test    al, al
        jnz     L8F79
        mov     ecx, dword ptr [g_007db0b0]
        lea     eax, [esp + 0x98]
        push    eax
        call    FUN_00412e70
L8F79:
        lea     ecx, [esp + 0x98]
        call    FUN_00412b60
L8F85:
        mov     cx, word ptr [esp + 0x88]
        mov     dx, word ptr [esp + 0x8a]
        mov     word ptr [esi + 0x7c], cx
        lea     ecx, [esp + 0x48]
        mov     word ptr [esi + 0x7e], dx
        call    FUN_004d21c0
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
L8FAF:
        push    0x0
        add     esi, 0x80
        push    esi
        push    0x7771f4
        mov     ecx, ebx
        mov     byte ptr [esi], 0x0
        call    FUN_00411ec0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        xor     ecx, 0x85739531
        pop     edi
        pop     esi
        pop     ebx
        jz      L8FE8
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L8FE8:
        push    0x4
        call    FUN_004c8e90
        add     esp, 0x128
        ret
    }
}
