/*
 * FUN_00518bf0 (2315 B) — terrain/geometry tile-set loader. __stdcall,
 * RET 0xC (3 params). Loads the current tile-set name/type strings from the
 * global object (DAT_007dd268) into the active tile-set, then walks the
 * tile-type list building per-tile entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00519500(void);
extern void __cdecl FUN_00519cd0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0041f8d0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_0040de20(void);

extern void *g_0076b320;   /* IAT strncpy */
extern void *g_0076b2f8;   /* IAT strncat */
extern int  g_007dab44;    /* DAT_007dab44 */
extern int  g_007dab40;    /* DAT_007dab40 */
extern int  g_007dd268;    /* DAT_007dd268 */

__declspec(naked) unsigned int __stdcall FUN_00518bf0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        sub     esp, 0xd0
        push    ebx
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        push    ebp
        push    esi
        xor     edx, 0x85739531
        push    edi
        mov     edi, dword ptr [edx + 0x50]
        mov     eax, dword ptr [edi + 0xb4]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_8d78
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00519500
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x20160]
        cmp     ecx, ebx
        jle     L_8d70
        cmp     dword ptr [eax + 0x5c], ecx
        jl      L_8c4b
        mov     dword ptr [eax + 0x5c], ebx
L_8c4b:
        mov     esi, dword ptr [g_0076b320]
        mov     ecx, 0x1
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x50], ecx
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        lea     ecx, [eax + edx*8 + 0x20164]
        push    0x7f
        push    ecx
        add     eax, 0x60
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        lea     ecx, [eax + edx*8 + 0x201e4]
        push    0x7f
        push    ecx
        add     eax, 0xe0
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        lea     ecx, [eax + edx*8 + 0x201e4]
        push    0x7f
        push    ecx
        add     eax, 0x1e0
        push    eax
        call    esi
        mov     edx, dword ptr [g_007dd268]
        mov     ebp, dword ptr [g_0076b2f8]
        push    0x7f
        add     edx, 0x1e0
        push    0x779fe0
        push    edx
        call    ebp
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        lea     ecx, [eax + edx*8 + 0x202e4]
        push    0x7f
        push    ecx
        add     eax, 0x1e0
        push    eax
        call    ebp
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        lea     ecx, [eax + edx*8 + 0x20264]
        push    0x7f
        push    ecx
        add     eax, 0x160
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        mov     cl, byte ptr [eax + edx*8 + 0x20364]
        mov     byte ptr [eax + 0x260], cl
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, ecx
        shl     edx, 0x6
        add     edx, ecx
        mov     ecx, dword ptr [eax + edx*8 + 0x20368]
        add     esp, 0x48
        mov     dword ptr [edi + 0xa4], ecx
        mov     dword ptr [edi + 0x374], ebx
        or      ecx, 0xffffffff
        mov     dword ptr [eax + 0x58], ecx
        push    ebx
        mov     dword ptr [eax + 0x54], ecx
        call    FUN_00519cd0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xd0
        ret     0xc
L_8d70:
        mov     dword ptr [edi + 0xb4], ebx
        jmp     L_8d7d
L_8d78:
        mov     eax, dword ptr [g_007dd268]
L_8d7d:
        mov     edi, dword ptr [edi + 0xa4]
        cmp     edi, dword ptr [eax + 0x58]
        mov     dword ptr [esp + 0x3c], edi
        jnz     L_8d9b
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xd0
        ret     0xc
L_8d9b:
        mov     dword ptr [eax + 0x58], edi
        mov     dword ptr [eax + 0x4c], ebx
        push    0x779fc8
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [eax + 0x50], ebx
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_8dd4
        mov     edx, dword ptr [esp + 0x28]
        push    0x1
        push    edx
        mov     ecx, eax
        call    FUN_0041d890
        mov     dword ptr [esp + 0x14], eax
        jmp     L_8dd8
L_8dd4:
        mov     dword ptr [esp + 0x14], ebx
L_8dd8:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_0041db30
        mov     esi, dword ptr [g_0076b320]
        mov     edi, dword ptr [g_0076b2f8]
        mov     ebp, eax
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x20], ebp
        jz      L_9116
        jmp     L_8e01
L_8dfd:
        mov     ebp, dword ptr [esp + 0x20]
L_8e01:
        push    0x779cb0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    ebp
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, ebx
        jz      L_8e47
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_8e47
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_8e47:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x9c]
        call    FUN_0040dca0
        push    0x772f0c
        lea     ecx, [esp + 0x94]
        call    FUN_0040ecc0
        cmp     eax, ebx
        jz      L_90d1
        push    ebx
        lea     edx, [esp + 0x30]
        push    edx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      L_90d1
        push    0x779fb0
        lea     ecx, [esp + 0x94]
        call    FUN_0040ecc0
        mov     ebp, eax
        cmp     ebp, ebx
        jz      L_90d1
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_8ecf
        lea     ecx, [ebp + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, eax
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [esp + 0x1c], ecx
        jmp     L_8ed5
L_8ecf:
        mov     dword ptr [esp + 0x1c], ebx
L_8ed3:
        mov     ecx, ebx
L_8ed5:
        mov     eax, dword ptr [ecx + 0x8]
        cmp     eax, ebx
        jz      L_90c8
        mov     ebp, dword ptr [eax]
        cmp     ebp, ebx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], edx
        jz      L_90c8
        push    ebx
        lea     ecx, [esp + 0x44]
        call    FUN_0040dd50
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, ebp
        call    FUN_0041f8d0
        push    0x7727b4
        lea     ecx, [esp + 0x44]
        call    FUN_0040ecc0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_90b4
        push    0x0
        lea     ecx, [esp + 0x38]
        push    ecx
        push    0x779d58
        mov     ecx, ebx
        mov     dword ptr [esp + 0x30], 0x0
        call    FUN_00411cb0
        test    al, al
        jz      L_90b4
        push    0x0
        lea     edx, [esp + 0x28]
        push    edx
        push    0x779fa8
        mov     ecx, ebx
        call    FUN_00411bf0
        test    al, al
        jz      L_90b4
        mov     eax, dword ptr [esp + 0x3c]
        cmp     dword ptr [esp + 0x34], eax
        jnz     L_90ac
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        lea     ecx, [esp + 0x18]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     eax, dword ptr [esp + 0x18]
        push    0x7f
        push    eax
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x38]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0xe0]
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        push    0x7f
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    0x779fe0
        push    eax
        call    edi
        mov     ecx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    eax
        call    edi
        mov     ecx, dword ptr [esp + 0x6c]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        add     esp, 0x48
        mov     edx, ecx
        shl     edx, 0x9
        mov     ebx, eax
        add     ebx, edx
        mov     byte ptr [ecx + ebx + 0x260], 0x0
        inc     dword ptr [eax + 0x4c]
        mov     ecx, dword ptr [esp + 0x30]
        test    ecx, ecx
        jz      L_9091
        mov     dl, byte ptr [ecx - 0x1]
        dec     ecx
        dec     dl
        mov     byte ptr [ecx], dl
        jnz     L_9091
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dd268]
        add     esp, 0x4
L_9091:
        mov     ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jz      L_90b1
        mov     dl, byte ptr [ecx - 0x1]
        dec     ecx
        dec     dl
        mov     byte ptr [ecx], dl
        jnz     L_90b1
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_90ac:
        mov     eax, dword ptr [g_007dd268]
L_90b1:
        inc     dword ptr [eax + 0x50]
L_90b4:
        lea     ecx, [esp + 0x40]
        call    FUN_0040de20
        mov     ecx, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        jmp     L_8ed5
L_90c8:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_90d1:
        mov     ebp, dword ptr [esp + 0x14]
        mov     ecx, ebp
        call    FUN_0041db70
        lea     ecx, [esp + 0x90]
        call    FUN_0040de20
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_9103
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_9103
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_9103:
        mov     ecx, ebp
        call    FUN_0041db30
        cmp     eax, ebx
        mov     dword ptr [esp + 0x20], eax
        jnz     L_8dfd
L_9116:
        mov     ebp, dword ptr [esp + 0x14]
        cmp     ebp, ebx
        jz      L_912e
        mov     ecx, ebp
        call    FUN_0041dac0
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_912e:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, ebx
        jz      L_9149
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_9149
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_9149:
        push    0x779f8c
        lea     ecx, [esp + 0x30]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_9179
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     dword ptr [esp + 0x14], eax
        jmp     L_917d
L_9179:
        mov     dword ptr [esp + 0x14], ebx
L_917d:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_0041db30
        mov     ebp, eax
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x18], ebp
        jz      L_94b0
        jmp     L_919a
L_9196:
        mov     ebp, dword ptr [esp + 0x18]
L_919a:
        push    0x779d68
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    ebp
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, ebx
        jz      L_91e0
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_91e0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_91e0:
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_0040dca0
        push    0x772f0c
        lea     ecx, [esp + 0x44]
        call    FUN_0040ecc0
        cmp     eax, ebx
        jz      L_946e
        push    ebx
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      L_946e
        push    0x779fb0
        lea     ecx, [esp + 0x44]
        call    FUN_0040ecc0
        mov     ebp, eax
        cmp     ebp, ebx
        jz      L_946e
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_9260
        mov     edx, dword ptr [ebp + 0x18]
        lea     ecx, [ebp + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, eax
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [esp + 0x1c], ecx
        jmp     L_9266
L_9260:
        mov     dword ptr [esp + 0x1c], ebx
L_9264:
        mov     ecx, ebx
L_9266:
        mov     eax, dword ptr [ecx + 0x8]
        cmp     eax, ebx
        jz      L_9465
        mov     ebp, dword ptr [eax]
        cmp     ebp, ebx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        jz      L_9465
        push    ebx
        lea     ecx, [esp + 0x94]
        call    FUN_0040dd50
        lea     ecx, [esp + 0x90]
        push    ecx
        mov     ecx, ebp
        call    FUN_0041f8d0
        push    0x7727b4
        lea     ecx, [esp + 0x94]
        call    FUN_0040ecc0
        mov     ebx, eax
        test    ebx, ebx
        jz      L_944e
        push    0x0
        lea     edx, [esp + 0x3c]
        push    edx
        push    0x779d58
        mov     ecx, ebx
        mov     dword ptr [esp + 0x3c], 0x0
        call    FUN_00411cb0
        test    al, al
        jz      L_944e
        push    0x0
        lea     eax, [esp + 0x34]
        push    eax
        push    0x779fa8
        mov     ecx, ebx
        call    FUN_00411bf0
        test    al, al
        jz      L_944e
        mov     ecx, dword ptr [esp + 0x3c]
        cmp     dword ptr [esp + 0x38], ecx
        jnz     L_9446
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        mov     eax, dword ptr [ebp + 0x14]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        lea     ecx, [esp + 0x20]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0xe0]
        push    eax
        call    esi
        mov     ecx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        push    0x7f
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    0x779fe0
        push    eax
        call    edi
        mov     ecx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x1e0]
        push    eax
        call    edi
        mov     ecx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [g_007dd268]
        push    0x7f
        push    ecx
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, ecx
        shl     edx, 0x9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        call    esi
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x4c]
        add     esp, 0x48
        mov     edx, ecx
        shl     edx, 0x9
        mov     ebx, eax
        add     ebx, edx
        mov     byte ptr [ecx + ebx + 0x260], 0x1
        inc     dword ptr [eax + 0x4c]
        mov     ecx, dword ptr [esp + 0x24]
        test    ecx, ecx
        jz      L_942b
        mov     dl, byte ptr [ecx - 0x1]
        dec     ecx
        dec     dl
        mov     byte ptr [ecx], dl
        jnz     L_942b
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dd268]
        add     esp, 0x4
L_942b:
        mov     ecx, dword ptr [esp + 0x20]
        test    ecx, ecx
        jz      L_944b
        mov     dl, byte ptr [ecx - 0x1]
        dec     ecx
        dec     dl
        mov     byte ptr [ecx], dl
        jnz     L_944b
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_9446:
        mov     eax, dword ptr [g_007dd268]
L_944b:
        inc     dword ptr [eax + 0x50]
L_944e:
        lea     ecx, [esp + 0x90]
        call    FUN_0040de20
        mov     ecx, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        jmp     L_9266
L_9465:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_946e:
        mov     ebp, dword ptr [esp + 0x14]
        mov     ecx, ebp
        call    FUN_0041db70
        lea     ecx, [esp + 0x40]
        call    FUN_0040de20
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_949d
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_949d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_949d:
        mov     ecx, ebp
        call    FUN_0041db30
        cmp     eax, ebx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_9196
L_94b0:
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, ebx
        jz      L_94c8
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_94c8:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        jz      L_94e3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_94e3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_94e3:
        push    ebx
        call    FUN_00519cd0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0xd0
        ret     0xc
    }
}
