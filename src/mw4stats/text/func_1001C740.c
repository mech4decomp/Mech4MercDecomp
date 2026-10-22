/*
 * FUN_1001c740 (4002 B) - __fastcall. Main ZoneStats upload/retry loop with
 * SEH. Large state machine: connects, reads HTTP response, retries, logs
 * stats. Uses SEH frame (handler at 0x100201b2).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10004110(void);
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_100108f0(void);
extern void __cdecl FUN_10010870(void);
extern void __cdecl FUN_1001c6c0(void);
extern void __cdecl FUN_1001c100(void);
extern void __cdecl FUN_10010c30(void);
extern void __cdecl FUN_1001c420(void);
extern void __cdecl FUN_1001c2f0(void);
extern void __cdecl FUN_1001d6f0(void);
extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_10011810(void);
extern void __cdecl FUN_10011830(void);
extern void __cdecl FUN_100119f0(void);
extern void __cdecl FUN_1000b7b0(void);
extern void __cdecl FUN_1000b450(void);
extern void __cdecl FUN_1000b480(void);

extern void *g_100210ec;   /* free */
extern void *g_1002102c;   /* release */
extern void *g_10021094;   /* GetSystemTime */
extern void *g_10021090;   /* SystemTimeToFileTime */
extern void *g_100210f8;   /* malloc */
extern void *g_100210f4;   /* wcslen */
extern unsigned short g_10026408;   /* wide string data */

__declspec(naked) int __cdecl FUN_1001c740(void)
{
    __asm {
        push    -1
        push    0x100201b2
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x910
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        mov     ecx, 0x400
        push    esi
        push    edi
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x58], ebx
        mov     dword ptr [esp + 0x5c], ecx
        mov     eax, dword ptr [ebp + 0x78]
        mov     dword ptr [esp + 0x928], ebx
        mov     esi, eax
        mov     dword ptr [esp + 0x40], 0x10026a2c
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0xe0], ebx
        mov     dword ptr [esp + 0xe4], ebx
        mov     dword ptr [esp + 0xe8], ebx
        mov     dword ptr [esp + 0xec], ebx
        mov     dword ptr [esp + 0xf0], ebx
        mov     dword ptr [esp + 0xf4], ecx
        lea     ecx, [esp + 0xe0]
        mov     byte ptr [esp + 0x928], 3
        call    FUN_100011a0
        lea     eax, [ebp + 0x84]
        lea     ecx, [esp + 0xe0]
        push    eax
        call    FUN_10004110
        push    0x10026300
        lea     ecx, [esp + 0xe4]
        call    FUN_10001680
        push    0x10026304
        lea     ecx, [esp + 0xe4]
        call    FUN_10001680
        mov     eax, dword ptr [esp + 0xec]
        cmp     eax, ebx
        mov     eax, dword ptr [esp + 0xe0]
        ja      L_c836
        mov     eax, 0x100274ec
L_c836:
        mov     ecx, dword ptr [ebp + 0x78]
        lea     edi, [esp + 0x2d0]
        push    edi
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x4]
        cmp     eax, -1
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x24], eax
        jnz     L_c8bf
        lea     ecx, [esp + 0xe0]
        mov     dword ptr [ebp + 0x1c], 1
        mov     byte ptr [esp + 0x928], 2
        call    FUN_100011a0
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [g_1002102c]
        cmp     eax, ebx
        mov     byte ptr [esp + 0x928], 1
        jz      L_c89c
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, ebx
        jz      L_c895
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_c898
L_c895:
        push    eax
        call    edi
L_c898:
        mov     dword ptr [esp + 0x10], ebx
L_c89c:
        cmp     esi, ebx
        mov     byte ptr [esp + 0x928], 0
        jz      L_c8b6
        mov     eax, dword ptr [esi]
        push    -1
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        jmp     L_d6b0
L_c8b6:
        push    -1
        call    edi
        jmp     L_d6b0
L_c8bf:
        mov     ecx, 9
        xor     eax, eax
        lea     edi, [esp + 0x17c]
        mov     dword ptr [esp + 0x178], 0x28
        rep stosd
        lea     ecx, [esp + 0x520]
        mov     dword ptr [esp + 0x18c], ecx
        lea     edx, [esp + 0x10]
L_c8e8:
        mov     ecx, 0x94
        push    edx
        lea     esi, [esp + 0x2d4]
        sub     esp, 0x250
        mov     edi, esp
        rep movsd
        mov     ecx, ebp
        call    FUN_100108f0
        mov     esi, eax
        cmp     esi, ebx
        mov     dword ptr [esp + 0x2c], esi
        jz      L_c922
        cmp     esi, 0x80040242
        jnz     L_cf97
        xor     ebx, ebx
L_c922:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d09d
        mov     eax, dword ptr [ebp + 0x74]
        cmp     dword ptr [eax + 0x8], ebx
        jz      L_c947
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_d1ac
L_c947:
        cmp     dword ptr [ebp + 0x44], ebx
        jnz     L_c973
        cmp     dword ptr [ebp + 0x40], ebx
        jnz     L_c973
        mov     edx, dword ptr [ebp + 0x128]
        mov     ecx, ebp
        inc     edx
        mov     dword ptr [ebp + 0x128], edx
        call    FUN_1001c6c0
        test    eax, eax
        jz      L_d006
        inc     dword ptr [ebp + 0x12c]
L_c973:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d09d
        mov     edx, dword ptr [ebp + 0x74]
        cmp     dword ptr [edx + 0x8], ebx
        jz      L_c998
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_d1ac
L_c998:
        cmp     dword ptr [ebp + 0x1f0], ebx
        jbe     L_c9a8
        mov     eax, dword ptr [ebp + 0x1e4]
        jmp     L_c9ad
L_c9a8:
        mov     eax, 0x100274ec
L_c9ad:
        lea     edx, [esp + 0x40]
        push    0x4000000
        push    edx
        push    0x100269ec
        lea     ebx, [ebp + 0x18]
        push    0x10026a18
        push    eax
        push    0x10026a0c
        mov     ecx, ebx
        call    FUN_1001c100
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d0a9
        mov     eax, dword ptr [ebp + 0x74]
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_c9f8
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_d1cc
L_c9f8:
        mov     al, byte ptr [ebp + 0x49]
        test    al, al
        jz      L_d630
        mov     eax, dword ptr [ebp + 0x58]
        test    eax, eax
        jz      L_d630
        xor     edx, edx
        cmp     esi, 0x80040242
        setz    dl
        lea     eax, [esp + 0x10]
        push    edx
        push    eax
        mov     ecx, 0x94
        sub     esp, 0x250
        lea     esi, [esp + 0x528]
        mov     edi, esp
        rep movsd
        mov     ecx, ebp
        call    FUN_10010c30
        test    eax, eax
        jz      L_d55a
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d0be
        mov     ecx, dword ptr [ebp + 0x74]
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_ca6b
        push    ebp
        call    FUN_10010870
        mov     edx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [edx + 0x8]
        ja      L_d0d3
L_ca6b:
        lea     eax, [esp + 0x30]
        push    eax
        call    dword ptr [g_10021094]
        lea     eax, [ebp + 0x60]
        lea     ecx, [esp + 0x30]
        push    eax
        push    ecx
        call    dword ptr [g_10021090]
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        jbe     L_ca9f
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jz      L_ca9f
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_ca9f:
        xor     eax, eax
        mov     ecx, 0x100
        lea     edi, [esp + 0x520]
        lea     edx, [esp + 0x178]
        rep stosd
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x194], 0x3fe
        call    FUN_1001c420
        mov     esi, eax
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_ccc2
L_cae2:
        mov     eax, dword ptr [ebp + 0x74]
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_cafe
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_ccdd
L_cafe:
        test    esi, esi
        jz      L_cc8c
        mov     edx, dword ptr [esp + 0x190]
        test    edx, edx
        mov     dword ptr [esp + 0x20], edx
        jz      L_cc1c
        mov     eax, dword ptr [esp + 0x54]
        mov     esi, dword ptr [esp + 0x58]
        lea     ecx, [eax + edx + 2]
        cmp     ecx, esi
        jbe     L_cbe0
        mov     edx, dword ptr [esp + 0x5c]
        lea     eax, [edx + ecx]
        push    eax
        mov     dword ptr [esp + 0x5c], eax
        call    dword ptr [g_100210f8]
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jnz     L_cb8d
        lea     ecx, [esp + 0x48]
        call    FUN_100011a0
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 5
        push    2
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        call    FUN_1000b7b0
        mov     eax, dword ptr [ebp + 0x58]
        add     esp, 8
        test    eax, eax
        jz      L_cb81
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
        test    eax, eax
        jz      L_cc36
L_cb81:
        mov     dword ptr [ebp + 0x58], 0
        jmp     L_cc36
L_cb8d:
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        jbe     L_cbd8
        mov     esi, dword ptr [esp + 0x48]
        mov     ecx, eax
        mov     edi, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        xor     eax, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x54]
        sub     ecx, edx
        lea     edi, [edx + ebx]
        mov     edx, ecx
        shr     ecx, 2
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x58]
        add     esp, 4
L_cbd8:
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x48], ebx
L_cbe0:
        mov     edi, dword ptr [esp + 0x48]
        mov     ecx, edx
        add     edi, eax
        mov     eax, ecx
        lea     esi, [esp + 0x520]
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x48]
        add     eax, edx
        mov     dword ptr [esp + 0x54], eax
        mov     byte ptr [eax + ecx], 0
        mov     edx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [esp + 0x48]
        mov     byte ptr [edx + eax + 1], 0
L_cc1c:
        lea     eax, [esp + 0x30]
        push    eax
        call    dword ptr [g_10021094]
        lea     eax, [ebp + 0x60]
        lea     ecx, [esp + 0x30]
        push    eax
        push    ecx
        call    dword ptr [g_10021090]
L_cc36:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, 0x3fe
        jz      L_cc5e
        test    eax, eax
        jbe     L_ccf5
        mov     eax, dword ptr [ebp + 0x50]
        cmp     eax, 0x64
        jz      L_ccf5
        cmp     eax, 0x33
        jz      L_ccf5
L_cc5e:
        mov     ecx, 0x100
        xor     eax, eax
        lea     edi, [esp + 0x520]
        lea     edx, [esp + 0x178]
        rep stosd
        push    edx
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c420
        mov     esi, eax
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_ccc2
        jmp     L_cae2
L_cc8c:
        mov     eax, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 5
        push    2
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        mov     eax, dword ptr [ebp + 0x58]
        add     esp, 8
        test    eax, eax
        jz      L_d4cd
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
        test    eax, eax
        jnz     L_d4cd
        jmp     L_ccf5
L_ccc2:
        mov     edx, dword ptr [ebp + 0x70]
        mov     ebx, 9
        mov     dword ptr [ebp + 0x1c], ebx
        push    1
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b7b0
        add     esp, 8
        jmp     L_ccfa
L_ccdd:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 0xa
        push    1
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        call    FUN_1000b7b0
        add     esp, 8
L_ccf5:
        mov     ebx, 9
L_ccfa:
        mov     eax, dword ptr [esp + 0x48]
        xor     edi, edi
        cmp     eax, edi
        mov     esi, eax
        jz      L_cf97
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d1a7
        mov     eax, dword ptr [ebp + 0x74]
        cmp     dword ptr [eax + 0x8], edi
        jz      L_cd2f
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_d1ac
L_cd2f:
        mov     eax, dword ptr [ebp + 0x130]
        push    esi
        inc     eax
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x130], eax
        call    FUN_1001d6f0
        cmp     dword ptr [esp + 0x2c], 0x80040242
        jnz     L_cfbb
        cmp     eax, edi
        jz      L_cf18
L_cd5a:
        cmp     eax, 0x80040272
        jnz     L_d409
        mov     eax, 0x400
        mov     dword ptr [esp + 0x1a0], edi
        mov     dword ptr [esp + 0x1a4], edi
        mov     dword ptr [esp + 0x1a8], edi
        mov     dword ptr [esp + 0x1ac], edi
        mov     dword ptr [esp + 0x1b0], edi
        mov     dword ptr [esp + 0x1b4], eax
        mov     dword ptr [esp + 0x238], edi
        mov     dword ptr [esp + 0x23c], edi
        mov     dword ptr [esp + 0x240], edi
        mov     dword ptr [esp + 0x244], edi
        mov     dword ptr [esp + 0x248], edi
        mov     dword ptr [esp + 0x24c], eax
        mov     eax, dword ptr [ebp + 0x90]
        mov     byte ptr [esp + 0x928], 5
        cmp     eax, edi
        jbe     L_cde4
        mov     ecx, dword ptr [ebp + 0x84]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x1a8]
        call    FUN_100016b0
L_cde4:
        lea     ecx, [esp + 0x2fc]
        test    ecx, ecx
        jz      L_ce21
        cmp     word ptr [esp + 0x2fc], di
        jz      L_ce21
        lea     edx, [esp + 0x2fc]
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        lea     ecx, [esp + 0x1a0]
        shl     eax, 1
        push    eax
        lea     eax, [esp + 0x300]
        push    eax
        call    FUN_100016b0
L_ce21:
        mov     eax, dword ptr [esp + 0x1ac]
        cmp     eax, edi
        jbe     L_ce41
        mov     ecx, dword ptr [esp + 0x1a0]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x240]
        call    FUN_100016b0
L_ce41:
        mov     edx, 0x10026408
        test    edx, edx
        jz      L_ce71
        cmp     word ptr [g_10026408], di
        jz      L_ce71
        push    edx
        call    dword ptr [g_100210f4]
        add     esp, 4
        lea     ecx, [esp + 0x238]
        shl     eax, 1
        push    eax
        push    0x10026408
        call    FUN_100016b0
L_ce71:
        mov     eax, dword ptr [esp + 0x244]
        mov     ecx, dword ptr [esp + 0x238]
        cmp     eax, edi
        ja      L_ce88
        mov     ecx, 0x100274ec
L_ce88:
        mov     eax, dword ptr [esp + 0x1ac]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0x1a0]
        ja      L_ce9f
        mov     eax, 0x100274ec
L_ce9f:
        push    ecx
        push    eax
        mov     ecx, ebp
        call    FUN_10011810
        cmp     dword ptr [esp + 0x244], edi
        jbe     L_cec6
        mov     eax, dword ptr [esp + 0x238]
        cmp     eax, edi
        jz      L_cec6
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_cec6:
        mov     eax, dword ptr [esp + 0x1ac]
        mov     dword ptr [esp + 0x238], edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x248], edi
        mov     dword ptr [esp + 0x244], edi
        mov     byte ptr [esp + 0x928], 3
        jbe     L_cf03
        mov     eax, dword ptr [esp + 0x1a0]
        cmp     eax, edi
        jz      L_cf03
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_cf03:
        mov     dword ptr [esp + 0x1a0], edi
        mov     dword ptr [esp + 0x1b0], edi
        mov     dword ptr [esp + 0x1ac], edi
L_cf18:
        mov     eax, dword ptr [ebp + 0x58]
        cmp     eax, edi
        jz      L_cf30
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
        test    eax, eax
        jz      L_d0e8
L_cf30:
        mov     al, byte ptr [ebp + 0x14]
        mov     dword ptr [ebp + 0x58], edi
        test    al, al
        jnz     L_d1a7
        mov     eax, dword ptr [ebp + 0x74]
        cmp     dword ptr [eax + 0x8], edi
        jz      L_cf58
        push    ebp
        call    FUN_10010870
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [ecx + 0x8]
        ja      L_d1ac
L_cf58:
        lea     edx, [esp + 0x30]
        push    edx
        call    dword ptr [g_10021094]
        lea     eax, [ebp + 0x60]
        push    eax
        lea     eax, [esp + 0x34]
        push    eax
        call    dword ptr [g_10021090]
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jnz     L_d1be
        mov     ecx, dword ptr [ebp + 0x74]
        cmp     dword ptr [ecx + 0x8], edi
        jz      L_cf97
        push    ebp
        call    FUN_10010870
        mov     edx, dword ptr [ebp + 0x74]
        cmp     eax, dword ptr [edx + 0x8]
        ja      L_d1cc
L_cf97:
        mov     ecx, dword ptr [ebp + 0x78]
        lea     edx, [esp + 0x2d0]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x8]
        test    eax, eax
        jz      L_d1e4
        xor     ebx, ebx
        /* __emit: backward jmp rel32 to L_c8e8; MSVC6 miscomputes disp by +4
           (call-relocs sit between branch and target) -> E9 2D F9 FF FF */
        __emit 0xE9
        __emit 0x2D
        __emit 0xF9
        __emit 0xFF
        __emit 0xFF
L_cfbb:
        cmp     eax, edi
        jnz     L_cd5a
        mov     eax, dword ptr [ebp + 0x134]
        mov     edx, dword ptr [ebp + 0x144]
        mov     esi, dword ptr [ebp + 0x138]
        inc     eax
        add     esi, edx
        mov     dword ptr [ebp + 0x134], eax
        mov     dword ptr [ebp + 0x138], esi
        mov     edx, dword ptr [ebp + 0x13c]
        lea     eax, [esp + 0x2fc]
        mov     ecx, ebp
        adc     edx, edi
        push    eax
        mov     dword ptr [ebp + 0x13c], edx
        call    FUN_10011830
        jmp     L_cf18
L_d006:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 3
        push    2
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        call    FUN_1000b7b0
        add     esp, 8
        lea     ecx, [esp + 0xe0]
        mov     byte ptr [esp + 0x928], 2
        call    FUN_100011a0
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [g_1002102c]
        cmp     eax, ebx
        mov     byte ptr [esp + 0x928], 1
        jz      L_d05f
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, ebx
        jz      L_d058
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d05b
L_d058:
        push    eax
        call    esi
L_d05b:
        mov     dword ptr [esp + 0x10], ebx
L_d05f:
        mov     eax, dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x928], 0
        cmp     eax, ebx
        jz      L_d082
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, ebx
        jz      L_d07f
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d082
L_d07f:
        push    eax
        call    esi
L_d082:
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x928], 0xffffffff
        call    FUN_100011a0
        xor     eax, eax
        jmp     L_d6c9
L_d09d:
        mov     dword ptr [ebp + 0x1c], 9
        jmp     L_d1d3
L_d0a9:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 9
        push    1
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        jmp     L_d1dc
L_d0be:
        mov     edx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 9
        push    1
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        jmp     L_d1dc
L_d0d3:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 0xa
        push    1
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        jmp     L_d1dc
L_d0e8:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 3
        push    2
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        call    FUN_1000b7b0
        mov     eax, dword ptr [esp + 0xf4]
        add     esp, 8
        cmp     eax, edi
        jbe     L_d120
        mov     eax, dword ptr [esp + 0xe0]
        cmp     eax, edi
        jz      L_d120
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_d120:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [g_1002102c]
        cmp     eax, edi
        mov     dword ptr [esp + 0xe0], edi
        mov     dword ptr [esp + 0xf0], edi
        mov     dword ptr [esp + 0xec], edi
        mov     byte ptr [esp + 0x928], 1
        jz      L_d162
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jz      L_d15b
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d15e
L_d15b:
        push    eax
        call    esi
L_d15e:
        mov     dword ptr [esp + 0x10], edi
L_d162:
        mov     eax, dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x928], 0
        cmp     eax, edi
        jz      L_d185
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, edi
        jz      L_d182
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d185
L_d182:
        push    eax
        call    esi
L_d185:
        cmp     dword ptr [esp + 0x54], edi
        jbe     L_d19d
        mov     eax, dword ptr [esp + 0x48]
        cmp     eax, edi
        jz      L_d19d
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_d19d:
        mov     eax, 3
        jmp     L_d6c9
L_d1a7:
        mov     dword ptr [ebp + 0x1c], ebx
        jmp     L_d1d3
L_d1ac:
        mov     edx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 0xa
        push    1
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        jmp     L_d1dc
L_d1be:
        mov     ecx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], ebx
        push    1
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        jmp     L_d1dc
L_d1cc:
        mov     dword ptr [ebp + 0x1c], 0xa
L_d1d3:
        mov     eax, dword ptr [ebp + 0x70]
        push    1
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
L_d1dc:
        call    FUN_1000b7b0
        add     esp, 8
L_d1e4:
        mov     ecx, dword ptr [ebp + 0x78]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebp + 0x58]
        xor     esi, esi
        xor     edx, edx
        cmp     eax, esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x10], edx
        jz      L_d211
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
        mov     edx, dword ptr [esp + 0x10]
L_d211:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jz      L_d278
        cmp     dword ptr [esp + 0xec], esi
        jbe     L_d23a
        mov     eax, dword ptr [esp + 0xe0]
        cmp     eax, esi
        jz      L_d23a
L_d22c:
        push    eax
        call    dword ptr [g_100210ec]
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 4
L_d23a:
        cmp     edx, esi
        mov     dword ptr [esp + 0xe0], esi
        mov     dword ptr [esp + 0xf0], esi
        mov     dword ptr [esp + 0xec], esi
        mov     byte ptr [esp + 0x928], 1
        jz      L_d3ea
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, esi
        jz      L_d272
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x24]
        jmp     L_d3e6
L_d272:
        push    edx
        jmp     L_d3e0
L_d278:
        cmp     dword ptr [ebp + 0x140], esi
        jz      L_d28b
        mov     ecx, ebp
        call    FUN_100119f0
        mov     edx, dword ptr [esp + 0x10]
L_d28b:
        mov     al, byte ptr [ebp + 0x14]
        test    al, al
        jz      L_d2a8
        cmp     dword ptr [esp + 0xec], esi
        jbe     L_d23a
        mov     eax, dword ptr [esp + 0xe0]
        cmp     eax, esi
        jz      L_d23a
        jmp     L_d22c
L_d2a8:
        mov     edx, dword ptr [ebp + 0x70]
        mov     ecx, dword ptr [ebp + 0x128]
        push    ecx
        push    0x10026054
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b450
        mov     edx, dword ptr [ebp + 0x70]
        mov     ecx, dword ptr [ebp + 0x12c]
        push    ecx
        push    0x1002603c
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b450
        mov     edx, dword ptr [ebp + 0x70]
        mov     ecx, dword ptr [ebp + 0x130]
        push    ecx
        push    0x1002602c
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b450
        mov     edx, dword ptr [ebp + 0x70]
        mov     ecx, dword ptr [ebp + 0x134]
        push    ecx
        push    0x10026014
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b450
        mov     ecx, dword ptr [ebp + 0x13c]
        mov     eax, dword ptr [ebp + 0x70]
        mov     edx, dword ptr [ebp + 0x138]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10026068
        push    ecx
        call    FUN_1000b480
        mov     eax, dword ptr [ebp + 0x70]
        mov     edx, dword ptr [ebp + 0x11c]
        add     esp, 0x40
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        push    0x10025ffc
        push    ecx
        call    FUN_1000b450
        mov     eax, dword ptr [ebp + 0x70]
        mov     edx, dword ptr [ebp + 0x120]
        push    edx
        push    0x10025fe4
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b450
        mov     eax, dword ptr [ebp + 0x70]
        mov     edx, dword ptr [ebp + 0x124]
        push    edx
        push    0x10025fd0
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b450
        mov     edx, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 1
        push    1
        mov     eax, dword ptr [edx + 0x10]
        push    eax
        call    FUN_1000b7b0
        mov     eax, dword ptr [esp + 0x118]
        add     esp, 0x2c
        cmp     eax, esi
        jbe     L_d3aa
        mov     eax, dword ptr [esp + 0xe0]
        cmp     eax, esi
        jz      L_d3aa
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_d3aa:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0xe0], esi
        cmp     eax, esi
        mov     dword ptr [esp + 0xf0], esi
        mov     dword ptr [esp + 0xec], esi
        mov     byte ptr [esp + 0x928], 1
        jz      L_d3ea
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, esi
        jz      L_d3df
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d3e6
L_d3df:
        push    eax
L_d3e0:
        call    dword ptr [g_1002102c]
L_d3e6:
        mov     dword ptr [esp + 0x10], esi
L_d3ea:
        cmp     dword ptr [esp + 0x54], esi
        jbe     L_d402
        mov     eax, dword ptr [esp + 0x48]
        cmp     eax, esi
        jz      L_d402
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_d402:
        xor     eax, eax
        jmp     L_d6c9
L_d409:
        mov     eax, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 5
        push    2
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        mov     eax, dword ptr [ebp + 0x58]
        add     esp, 8
        cmp     eax, edi
        jz      L_d431
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
L_d431:
        mov     ecx, dword ptr [ebp + 0x78]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0xec]
        xor     eax, eax
        cmp     ecx, edi
        mov     dword ptr [ebp + 0x58], edi
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x10], eax
        jbe     L_d46f
        mov     ecx, dword ptr [esp + 0xe0]
        cmp     ecx, edi
        jz      L_d46f
        push    ecx
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
L_d46f:
        cmp     eax, edi
        mov     dword ptr [esp + 0xe0], edi
        mov     dword ptr [esp + 0xf0], edi
        mov     dword ptr [esp + 0xec], edi
        mov     byte ptr [esp + 0x928], 1
        jz      L_d4ab
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jz      L_d4a0
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d4a7
L_d4a0:
        push    eax
L_d4a1:
        call    dword ptr [g_1002102c]
L_d4a7:
        mov     dword ptr [esp + 0x10], edi
L_d4ab:
        cmp     dword ptr [esp + 0x54], edi
        jbe     L_d4c3
        mov     eax, dword ptr [esp + 0x48]
        cmp     eax, edi
        jz      L_d4c3
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
L_d4c3:
        mov     eax, 0xfffffffc
        jmp     L_d6c9
L_d4cd:
        lea     ecx, [esp + 0xe0]
        mov     dword ptr [ebp + 0x58], 0
        mov     byte ptr [esp + 0x928], 2
        call    FUN_100011a0
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [g_1002102c]
        test    eax, eax
        mov     byte ptr [esp + 0x928], 1
        jz      L_d519
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_d50e
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d511
L_d50e:
        push    eax
        call    esi
L_d511:
        mov     dword ptr [esp + 0x10], 0
L_d519:
        mov     eax, dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x928], 0
        test    eax, eax
        jz      L_d53c
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jz      L_d539
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d53c
L_d539:
        push    eax
        call    esi
L_d53c:
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x928], 0xffffffff
        call    FUN_100011a0
        mov     eax, 2
        jmp     L_d6c9
L_d55a:
        mov     eax, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 4
        push    2
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        mov     eax, dword ptr [ebp + 0x58]
        xor     esi, esi
        add     esp, 8
        cmp     eax, esi
        jz      L_d584
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c2f0
L_d584:
        mov     ecx, dword ptr [ebp + 0x78]
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [ebp + 0x78]
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0xec]
        xor     eax, eax
        cmp     ecx, esi
        mov     dword ptr [ebp + 0x58], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x10], eax
        jbe     L_d5cf
        mov     ecx, dword ptr [esp + 0xe0]
        cmp     ecx, esi
        jz      L_d5cf
        push    ecx
        call    dword ptr [g_100210ec]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 4
L_d5cf:
        cmp     eax, esi
        mov     dword ptr [esp + 0xe0], esi
        mov     dword ptr [esp + 0xf0], esi
        mov     dword ptr [esp + 0xec], esi
        mov     byte ptr [esp + 0x928], 1
        jz      L_d60b
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, esi
        jz      L_d600
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d607
L_d600:
        push    eax
L_d601:
        call    dword ptr [g_1002102c]
L_d607:
        mov     dword ptr [esp + 0x10], esi
L_d60b:
        cmp     dword ptr [esp + 0x54], esi
        jbe     L_d6c4
        mov     eax, dword ptr [esp + 0x48]
        cmp     eax, esi
        jz      L_d6c4
        push    eax
        call    dword ptr [g_100210ec]
        add     esp, 4
        jmp     L_d6c4
L_d630:
        mov     eax, dword ptr [ebp + 0x70]
        mov     dword ptr [ebp + 0x1c], 4
        push    2
        mov     ecx, dword ptr [eax + 0x10]
        push    ecx
        call    FUN_1000b7b0
        add     esp, 8
        lea     ecx, [esp + 0xe0]
        mov     byte ptr [esp + 0x928], 2
        call    FUN_100011a0
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [g_1002102c]
        test    eax, eax
        mov     byte ptr [esp + 0x928], 1
        jz      L_d68d
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        jz      L_d682
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d685
L_d682:
        push    eax
        call    esi
L_d685:
        mov     dword ptr [esp + 0x10], 0
L_d68d:
        mov     eax, dword ptr [esp + 0x18]
        mov     byte ptr [esp + 0x928], 0
        test    eax, eax
        jz      L_d6b0
        mov     ecx, dword ptr [esp + 0x1c]
        test    ecx, ecx
        jz      L_d6ad
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        jmp     L_d6b0
L_d6ad:
        push    eax
        call    esi
L_d6b0:
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x928], 0xffffffff
        call    FUN_100011a0
L_d6c4:
        mov     eax, 1
L_d6c9:
        mov     ecx, dword ptr [esp + 0x920]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x91c
        ret
    }
}
