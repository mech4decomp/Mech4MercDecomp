/*
 * FUN_0067E280 (1510 B) — __fastcall (ECX = param_1), RET (no stack args).
 *
 * Iterates over a list of objects (via FUN_004de340), processes each one's
 * heightmap/terrain data, and updates a global structure. Uses the
 * DAT_007dab44/DAT_007dab40 XOR-obfuscated pointer scheme and the
 * DAT_007db094/DAT_007db098 type tags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_004de340(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00766c60(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0067c130(void);
extern void __cdecl FUN_0041ef30(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_00639780(void);
extern void __cdecl FUN_0041ea10(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_0041c7d0(void);

extern int    DAT_007f2548;   /* 0x007F2548 */
extern int    DAT_007dc728;   /* 0x007DC728 */
extern int    DAT_007dab44;   /* 0x007DAB44 */
extern int    DAT_007dab40;   /* 0x007DAB40 */
extern int    DAT_007b8d88;   /* 0x007B8D88 */
extern int    DAT_007b8d8c;   /* 0x007B8D8C */
extern int    DAT_007b8d90;   /* 0x007B8D90 */
extern float  DAT_0077d140;   /* 0x0077D140 */
extern float  DAT_0078096c;   /* 0x0078096C */
extern int    DAT_007f2290;   /* 0x007F2290 */
extern double DAT_0077b648;   /* 0x0077B648 */
extern int    DAT_007db094;   /* 0x007DB094 */
extern int    DAT_007db098;   /* 0x007DB098 */

__declspec(naked) void __fastcall FUN_0067e280(void)
{
    __asm {
        sub     esp, 0xe8
        mov     eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        push    edi
        add     eax, 0x94
        mov     dword ptr [esp + 0x38], ecx
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x3c], 0x78714c
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jz      l_e85b
l_e2ba:
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        call    FUN_0041fd80
        add     eax, 0x3f8
        push    eax
        lea     ecx, [esp + 0x7c]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x78], 0x77d13c
        call    FUN_0040c0e0
        test    eax, eax
        jz      l_e4ce
        mov     ebx, dword ptr [esi + 0x10]
l_e2ef:
        mov     ecx, dword ptr [eax + 0x184]
        mov     edx, 0x1
        shl     edx, cl
        test    edx, ebx
        jnz     l_e312
        lea     ecx, [esp + 0x78]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     l_e2ef
        jmp     l_e4ce
l_e312:
        mov     ecx, dword ptr [DAT_007f2548]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     l_e4ce
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [ecx + 0x8c]
        add     ecx, 0x80
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [esp + 0x18], edx
        mov     ecx, dword ptr [ecx + 0x2c]
        lea     ebx, [eax + 0x400]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_e38f
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x14], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x1c], edx
l_e38f:
        lea     eax, [esi + 0xbc]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0040c5d0
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        push    0x0
        push    0x3f800000
        push    0x0
        fstp    dword ptr [esp + 0x54]
        lea     ecx, [esp + 0xd0]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0xd4]
        call    FUN_0040c410
        lea     edx, [esp + 0x48]
        push    edx
        lea     ecx, [esp + 0xd4]
        call    FUN_00766c60
        mov     ecx, edi
        mov     dword ptr [esp + 0xe8], 0x44bb8000
        call    FUN_0041fd80
        lea     ecx, [esp + 0xd0]
        mov     dword ptr [esp + 0x94], eax
        lea     eax, [esp + 0x84]
        mov     dword ptr [esp + 0x84], ecx
        mov     ecx, dword ptr [DAT_007dc728]
        lea     edx, [esp + 0xc4]
        push    eax
        mov     dword ptr [esp + 0x8c], edx
        mov     dword ptr [esp + 0x90], 0x0
        mov     dword ptr [esp + 0x9c], 0x2000
        call    FUN_004e2f40
        lea     ebp, [esi + 0x1c]
        mov     ecx, ebp
        mov     ebx, eax
        call    FUN_0041fcb0
        test    ebx, ebx
        jz      l_e470
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fcd0
l_e470:
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [esp + 0x88]
        mov     edx, dword ptr [ecx + 0x18]
        push    edx
        call    FUN_004e8dc0
        mov     eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        cmp     ebx, edx
        jz      l_e4c1
        test    ebx, ebx
        jz      l_e4c1
        mov     ecx, dword ptr [ebx + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esi + 0x24]
        call    FUN_0041c830
        jmp     l_e4ce
l_e4c1:
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esi + 0x24]
        call    FUN_0040c410
l_e4ce:
        lea     ebp, [esi + 0x1c]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_e614
        push    0x7b8d88
        lea     ecx, [esp + 0x70]
        mov     ebx, 0x4f
        call    FUN_0040c5d0
        mov     ecx, dword ptr [DAT_007b8d88]
        mov     edx, dword ptr [DAT_007b8d8c]
        mov     eax, dword ptr [DAT_007b8d90]
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x70]
        push    edx
        mov     edx, dword ptr [DAT_007dab44]
        lea     eax, [esp + 0x3c]
        push    eax
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x80]
        push    ecx
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x54], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x58], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x5c], eax
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [esp + 0x40]
        sub     esp, 0xc
        mov     dword ptr [eax + 0x8], ecx
        lea     edx, [esp + 0x84]
        mov     ecx, esp
        push    edx
        lea     edi, [esi + 0x24]
        call    FUN_00551870
        sub     esp, 0xc
        mov     ecx, esp
        push    edi
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x84]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esp + 0x11c]
        push    ecx
        call    FUN_0067c130
        fld     dword ptr [esi + 0x28]
        mov     edx, dword ptr [eax]
        fcomp   dword ptr [DAT_0077d140]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [eax + 0x8]
        fnstsw  ax
        add     esp, 0x34
        mov     dword ptr [edi + 0x4], ecx
        test    ah, 0x1
        mov     dword ptr [edi + 0x8], edx
        jz      l_e5f4
        mov     dword ptr [esi + 0x28], 0xc47a0000
        jmp     l_e6e8
l_e5f4:
        fld     dword ptr [esi + 0x28]
        fcomp   dword ptr [DAT_0078096c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_e6e8
        mov     dword ptr [esi + 0x28], 0x447a0000
        jmp     l_e6e8
l_e614:
        mov     eax, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edi
        mov     edi, dword ptr [ecx + 0x1c]
        mov     ecx, ebp
        xor     edi, 0x85739531
        call    FUN_0041fd80
        cmp     eax, edi
        jnz     l_e641
        mov     ebx, 0x4d
        jmp     l_e6e8
l_e641:
        mov     edx, dword ptr [DAT_007db098]
        mov     bl, byte ptr [edx + 0x28]
        mov     ecx, ebp
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jnz     l_e6af
        mov     ecx, ebp
        mov     ebx, 0x4d
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     edi, [esi + 0x24]
        push    edi
        lea     ecx, [esp + 0x68]
        call    FUN_0041c7d0
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     dword ptr [edi + 0x4], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edi + 0x8], edx
        xor     ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x1c]
        xor     edx, 0x85739531
        push    edx
        mov     ecx, ebp
        call    FUN_0041fcd0
        jmp     l_e6e8
l_e6af:
        mov     eax, dword ptr [DAT_007db094]
        mov     bl, byte ptr [eax + 0x28]
        mov     ecx, ebp
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jz      l_e6ca
        mov     ebx, 0x4c
        jmp     l_e6e8
l_e6ca:
        mov     ecx, dword ptr [DAT_007db094]
        mov     bl, byte ptr [ecx + 0x28]
        mov     ecx, ebp
        call    FUN_0041fd80
        cmp     byte ptr [eax + 0x14], bl
        jnz     l_e833
        mov     ebx, 0x4e
l_e6e8:
        mov     edx, dword ptr [DAT_007f2290]
        push    0x0
        push    0x400
        push    edx
        lea     ecx, [esp + 0xa8]
        call    FUN_0041ef30
        mov     ebp, dword ptr [esp + 0x38]
        mov     edi, dword ptr [ebp + 0x8]
        test    edi, edi
        mov     dword ptr [esp + 0x10], 0x0
        push    0x1
        jnz     l_e729
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        jmp     l_e751
l_e729:
        call    FUN_00707e70
        fmul    qword ptr [DAT_0077b648]
        call    FUN_0075db4a
        mov     ecx, eax
        sub     ecx, edi
        cmp     ecx, 0x1f40
        mov     dword ptr [esp + 0x10], ecx
        jle     l_e751
        mov     dword ptr [esp + 0x10], 0x1f40
l_e751:
        mov     dword ptr [ebp + 0x8], eax
        push    0xd
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0xa4]
        call    FUN_0041ec50
        mov     eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        lea     ecx, [esp + 0x9c]
        push    ecx
        push    esi
        push    ebx
        push    edx
        call    FUN_00639780
        add     esp, 0x10
        lea     ecx, [esp + 0x9c]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0x9c]
        push    0x0
        lea     ecx, [esp + 0xa0]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0xac]
        mov     eax, dword ptr [esp + 0xb4]
        mov     edi, dword ptr [DAT_007dab40]
        sub     eax, ecx
        mov     ecx, dword ptr [DAT_007db094]
        mov     dword ptr [esp + 0xa4], 0xffffffec
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, edi
        lea     edi, [ecx + 0x14]
        mov     ecx, dword ptr [edi]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     ebp, dword ptr [ecx + edx*0x4 + 0x545c]
        add     ecx, 0x5454
        shl     eax, 0x3
        add     ebp, eax
        mov     dword ptr [ecx + edx*0x4 + 0x8], ebp
        mov     ebp, dword ptr [ecx + 0xc00]
        add     ebp, eax
        push    0x0
        lea     eax, [esp + 0xa0]
        push    eax
        mov     dword ptr [ecx + 0xc00], ebp
        mov     ecx, dword ptr [edi]
        push    ebx
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x9c]
        call    FUN_0041ef60
l_e833:
        lea     ecx, [esp + 0x3c]
        call    FUN_00417ad0
        test    esi, esi
        jz      l_e848
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
l_e848:
        lea     ecx, [esp + 0x3c]
        call    FUN_004de340
        mov     esi, eax
        test    esi, esi
        jnz     l_e2ba
l_e85b:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xe8
        ret
    }
}
