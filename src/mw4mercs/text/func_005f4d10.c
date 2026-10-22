/*
 * FUN_005f4d10 (860 B) — __fastcall (ECX = this). Vehicle/entity update:
 * queries the terrain database, computes orientation angles, and writes
 * several fields on the object.
 *
 * CFLAGS: /O1
 */

extern float DAT_0076c5b0;
extern float g_78096c;   /* 0x0078096c */
extern float g_7748c8;   /* 0x007748c8 */
extern float g_78a310;   /* 0x0078a310 */
extern float g_78a314;   /* 0x0078a314 */
extern float g_78a318;   /* 0x0078a318 */
extern int   g_7dc728;   /* 0x007dc728 */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */

extern void FUN_0040d560(void);
extern void FUN_004e2f40(void);
extern void FUN_004e27b0(void);
extern void FUN_006fab90(void);
extern void FUN_004e8dc0(void);
extern void FUN_00419460(void);
extern void FUN_0040d030(void);
extern void FUN_004daa20(void);
extern void FUN_0041fde0(void);
extern void FUN_0041c6e0(void);
extern void FUN_0075db50(void);
extern void FUN_0040c9e0(void);

__declspec(naked) void __fastcall FUN_005f4d10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x114
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0xd8]
        push    edi
        push    0x7b8d08
        lea     ecx, [ebp - 0x1c]
        add     esi, 0x80
        mov     dword ptr [ebp - 0x10], 0x44fa0000
        call    FUN_0040d560
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [ebp - 0x28], eax
        mov     ecx, dword ptr [esi + 0x1c]
        mov     dword ptr [ebp - 0x24], ecx
        fld     dword ptr [ebp - 0x24]
        mov     edx, dword ptr [esi + 0x2c]
        fadd    dword ptr [g_78096c]
        mov     dword ptr [ebp - 0x20], edx
        lea     ecx, [ebp - 0x90]
        lea     edx, [ebp - 0x50]
        fstp    dword ptr [ebp - 0x24]
        lea     eax, [ebp - 0x28]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     ecx, dword ptr [g_7dc728]
        xor     esi, esi
        mov     edi, 0x1000
        push    edx
        mov     dword ptr [ebp - 0x50], eax
        mov     dword ptr [ebp - 0x48], esi
        mov     dword ptr [ebp - 0x40], ebx
        mov     dword ptr [ebp - 0x3c], edi
        call    FUN_004e2f40
        test    eax, eax
        jnz     l_exit
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x1c]
        lea     edx, [ebp - 0x28]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004e27b0
        cmp     eax, -1
        jnz     l_offedge
        push    0x78a7b4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_exit
        int     3
        jmp     l_exit
    l_offedge:
        push    0x7b8d08
        lea     ecx, [ebp - 0x78]
        mov     dword ptr [ebp - 0x6c], 0x447a0000
        call    FUN_0040d560
        mov     ecx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x7c], ecx
        lea     ecx, [ebp - 0xa8]
        mov     dword ptr [ebp - 0x84], eax
        lea     edx, [ebp - 0x84]
        lea     eax, [ebp - 0x114]
        push    ecx
        mov     ecx, dword ptr [g_7dc728]
        mov     dword ptr [ebp - 0x80], 0x43fa0000
        mov     dword ptr [ebp - 0xa8], edx
        mov     dword ptr [ebp - 0xa4], eax
        mov     dword ptr [ebp - 0xa0], esi
        mov     dword ptr [ebp - 0x98], esi
        mov     dword ptr [ebp - 0x94], edi
        call    FUN_004e2f40
        cmp     eax, esi
        mov     dword ptr [ebp - 0x5c], 0
        mov     dword ptr [ebp - 0x58], 0x43fa0000
        mov     dword ptr [ebp - 0x54], 0
        jz      l_after
        mov     eax, dword ptr [ebp - 0x6c]
        lea     edx, [ebp - 0x5c]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x84]
        call    FUN_004e8dc0
    l_after:
        mov     ecx, dword ptr [ebx + 0xd8]
        add     ecx, 0x50
        push    ecx
        lea     ecx, [ebp - 0x108]
        mov     dword ptr [ebx + 0x440], esi
        mov     dword ptr [ebx + 0x168], esi
        mov     dword ptr [ebx + 0x16c], esi
        mov     dword ptr [ebx + 0x170], esi
        mov     dword ptr [ebx + 0x198], esi
        mov     dword ptr [ebx + 0x19c], esi
        mov     dword ptr [ebx + 0x1a0], esi
        call    FUN_00419460
        fld     dword ptr [ebp - 0x58]
        fadd    dword ptr [g_7748c8]
        mov     edx, dword ptr [ebp - 0xfc]
        mov     eax, dword ptr [ebp - 0xdc]
        lea     ecx, [ebp - 0x34]
        push    ecx
        fstp    dword ptr [ebp - 0x30]
        lea     ecx, [ebp - 0x108]
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_0040d030
        lea     edx, [ebp - 0x108]
        push    edx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     eax, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
    l_exit:
        mov     eax, dword ptr [ebp - 0x4c]
        fld     dword ptr [eax]
        mov     cl, byte ptr [ebp - 0x44]
        fst     dword ptr [ebp - 0xc]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 8], edx
        fstp    dword ptr [ebx + 0x494]
        mov     eax, dword ptr [eax + 8]
        fld     dword ptr [ebp - 8]
        mov     byte ptr [ebx + 0x4bc], cl
        mov     ecx, edx
        mov     edx, eax
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebx + 0x498], ecx
        mov     dword ptr [ebx + 0x49c], edx
        call    FUN_0075db50
        fstp    dword ptr [ebx + 0x484]
        mov     esi, dword ptr [ebx + 0xd8]
        push    2
        push    0
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp - 0xd8]
        push    1
        rep     movsd
        push    0x7b8d18
        lea     ecx, [ebp - 0xd8]
        call    FUN_0041fde0
        lea     eax, [ebp - 0xd8]
        push    eax
        lea     ecx, [ebp - 0xc]
        lea     esi, [ebx + 0x488]
        push    ecx
        mov     ecx, esi
        call    FUN_0041c6e0
        fld     dword ptr [esi]
        lea     eax, [ebp - 0x34]
        fld     dword ptr [ebx + 0x48c]
        fpatan
        push    eax
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     ecx, [ebp - 0x68]
        fchs
        fst     dword ptr [ebx + 0x480]
        fld     dword ptr [ebx + 0x490]
        fld     dword ptr [ebx + 0x48c]
        fpatan
        fchs
        fst     dword ptr [ebp - 0x38]
        fstp    dword ptr [ebx + 0x47c]
        mov     edx, dword ptr [ebp - 0x38]
        mov     dword ptr [ebx + 0x474], edx
        fstp    dword ptr [ebx + 0x478]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x2c]
        call    FUN_0040c9e0
        mov     eax, dword ptr [g_7dab44]
        mov     esi, dword ptr [eax]
        mov     edx, dword ptr [g_7dab40]
        xor     edx, esi
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld     dword ptr [eax + 0x34]
        fsub    dword ptr [ebp - 0x64]
        fst     dword ptr [ebx + 0x454]
        fcom    dword ptr [g_78a310]
        fnstsw  ax
        fcom    dword ptr [g_78a314]
        test    ah, 1
        fnstsw  ax
        jnz     l_5024
        test    ah, 1
        jz      l_5029
        mov     byte ptr [ebx + 0x4bc], 0x19
        jmp     l_5053
    l_5024:
        test    ah, 1
        jnz     l_503f
    l_5029:
        fcom    dword ptr [g_78a318]
        fnstsw  ax
        test    ah, 1
        jz      l_504c
        mov     byte ptr [ebx + 0x4bc], 0x1a
        jmp     l_5053
    l_503f:
        fcom    dword ptr [g_78a318]
        fnstsw  ax
        test    ah, 1
        jnz     l_5053
    l_504c:
        mov     byte ptr [ebx + 0x4bc], 0x1b
    l_5053:
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_506a
        mov     dword ptr [ebx + 0x454], 0
    l_506a:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
