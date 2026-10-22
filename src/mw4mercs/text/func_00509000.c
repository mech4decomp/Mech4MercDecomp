/*
 * FUN_00509000 (1168 B) — GameData physics-parameter load/validate.
 *
 * __cdecl, 1 stack param (at [ESP+0xcc] after prologue).
 * Loads a physics parameter block, calls a virtual method to allocate,
 * then parses/validates two sets of values (MoverMass / MomentOfInertia
 * style) via a series of __thiscall helpers, writing results into the
 * object at ESI+0x1c / ESI+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501eb0(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_004122e0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004900f0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0040de20(void);

extern int            DAT_007db0a0; /* 0x007DB0A0 */
extern unsigned short DAT_007db0ac; /* 0x007DB0AC */
extern unsigned short DAT_007db0ae; /* 0x007DB0AE */
extern int            DAT_007db0b0; /* 0x007DB0B0 */
extern int            DAT_007b8810; /* 0x007B8810 */

__declspec(naked) void __cdecl FUN_00509000(void)
{
    __asm {
        sub     esp, 0xbc
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xcc]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x118
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501eb0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [DAT_007db0a0]
        push    edi
        mov     esi, eax
        call    FUN_004cfbd0
        push    0x7723e8
        mov     ecx, edi
        call    FUN_0040ed60
        mov     ebx, eax
        lea     eax, [esi + 0x2c]
        push    0x0
        push    eax
        push    0x7758b8
        mov     ecx, ebx
        mov     dword ptr [eax], 0x0
        mov     dword ptr [esi + 0x30], 0x0
        mov     dword ptr [esi + 0x34], 0x0
        mov     dword ptr [esi + 0x38], 0x3f800000
        call    FUN_004122e0
        push    0x0
        lea     ecx, [esp + 0x7c]
        call    FUN_0040dd50
        push    0x0
        lea     eax, [esp + 0x7c]
        push    eax
        push    0x77721c
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jnz     l_5090b7
        mov     cx, word ptr [DAT_007db0ac]
        mov     dx, word ptr [DAT_007db0ae]
        mov     word ptr [esi + 0x1c], cx
        mov     word ptr [esi + 0x1e], dx
        jmp     l_509272

    l_5090b7:
        mov     eax, dword ptr [esp + 0x78]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        jz      l_50911b
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jbe     l_50911b
        lea     ecx, [esp + 0x34]
        call    FUN_004d24f0
        test    al, al
        jz      l_50911b
        mov     cx, word ptr [esp + 0x74]
        mov     dx, word ptr [esp + 0x76]
        mov     word ptr [esi + 0x1c], cx
        lea     ecx, [esp + 0x34]
        mov     word ptr [esi + 0x1e], dx
        call    FUN_004d2630
        test    al, al
        jnz     l_509269
        mov     eax, dword ptr [DAT_007db0b0]
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_004d2840
        jmp     l_509269

    l_50911b:
        push    ebp
        lea     ecx, [esp + 0x7c]
        push    ecx
        mov     ecx, dword ptr [DAT_007db0a0]
        call    FUN_004cfbd0
        push    0x0
        lea     ecx, [esp + 0x14]
        call    FUN_0041ee70
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_00421ec0
        mov     eax, dword ptr [DAT_007b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0xc
        test    eax, eax
        jz      l_509173
        lea     ecx, [esp + 0xc0]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0xc0]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     ebp, eax
        jmp     l_509175
    l_509173:
        xor     ebp, ebp
    l_509175:
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jz      l_5091ad
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ebp + 0x8], eax
        jz      l_5091ad
        push    ecx
        call    FUN_004900f0
        mov     edi, eax
        mov     edx, dword ptr [edi]
        add     esp, 0x4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        test    edi, edi
        jz      l_509175
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        jmp     l_509175

    l_5091ad:
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, dword ptr [esp + 0x20]
        cmp     eax, 0x2
        jbe     l_509216
        mov     edx, dword ptr [esp + 0x10]
        push    0x0
        lea     ecx, [esp + 0x14]
        call    dword ptr [edx + 0xc]
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x40]
        mov     dword ptr [esp + 0x20], 0xffffffec
        call    FUN_004d2680
        lea     ecx, [esp + 0x38]
        call    FUN_004d2630
        test    al, al
        jnz     l_509202
        mov     edx, dword ptr [DAT_007db0b0]
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_004d2840
    l_509202:
        mov     ax, word ptr [esp + 0x78]
        mov     cx, word ptr [esp + 0x7a]
        mov     word ptr [esi + 0x1c], ax
        mov     word ptr [esi + 0x1e], cx
        jmp     l_50924b

    l_509216:
        mov     dx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [DAT_007db0ae]
        lea     ecx, [esp + 0x38]
        mov     word ptr [esi + 0x1c], dx
        mov     word ptr [esi + 0x1e], ax
        call    FUN_004d2630
        test    al, al
        jnz     l_50924b
        lea     ecx, [esp + 0x88]
        push    ecx
        mov     ecx, dword ptr [DAT_007db0b0]
        call    FUN_00412e70

    l_50924b:
        push    ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [DAT_007db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0x10]
        call    FUN_0041ef60
        pop     ebp

    l_509269:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0

    l_509272:
        lea     ecx, [esp + 0x78]
        call    FUN_0040de20
        push    0x0
        lea     ecx, [esp + 0x7c]
        call    FUN_0040dd50
        push    0x0
        lea     edx, [esp + 0x7c]
        push    edx
        push    0x777210
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jnz     l_5092b7
        mov     ax, word ptr [DAT_007db0ac]
        mov     cx, word ptr [DAT_007db0ae]
        mov     word ptr [esi + 0x20], ax
        mov     word ptr [esi + 0x22], cx
        jmp     l_509472

    l_5092b7:
        mov     edx, dword ptr [esp + 0x78]
        push    0x0
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        jz      l_50931c
        mov     eax, dword ptr [esp + 0x50]
        test    eax, eax
        jbe     l_50931c
        lea     ecx, [esp + 0x34]
        call    FUN_004d24f0
        test    al, al
        jz      l_50931c
        mov     cx, word ptr [esp + 0x76]
        mov     ax, word ptr [esp + 0x74]
        mov     word ptr [esi + 0x22], cx
        lea     ecx, [esp + 0x34]
        mov     word ptr [esi + 0x20], ax
        call    FUN_004d2630
        test    al, al
        jnz     l_509469
        mov     edx, dword ptr [DAT_007db0b0]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_004d2840
        jmp     l_509469

    l_50931c:
        mov     ecx, dword ptr [DAT_007db0a0]
        lea     eax, [esp + 0x78]
        push    eax
        call    FUN_004cfbd0
        push    0x0
        lea     ecx, [esp + 0x10]
        call    FUN_0041ee70
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_00421ec0
        mov     edx, dword ptr [DAT_007b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        add     esp, 0xc
        test    eax, eax
        jz      l_509374
        lea     ecx, [esp + 0xbc]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [esp + 0xbc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     ebx, eax
        jmp     l_509376
    l_509374:
        xor     ebx, ebx
    l_509376:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      l_5093ae
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x8], eax
        jz      l_5093ae
        push    ecx
        call    FUN_004900f0
        mov     edi, eax
        mov     edx, dword ptr [edi]
        add     esp, 0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        test    edi, edi
        jz      l_509376
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        jmp     l_509376

    l_5093ae:
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, dword ptr [esp + 0x1c]
        cmp     eax, 0x2
        jbe     l_509417
        mov     edx, dword ptr [esp + 0xc]
        push    0x0
        lea     ecx, [esp + 0x10]
        call    dword ptr [edx + 0xc]
        lea     eax, [esp + 0x84]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x3c]
        mov     dword ptr [esp + 0x1c], 0xffffffec
        call    FUN_004d2680
        lea     ecx, [esp + 0x34]
        call    FUN_004d2630
        test    al, al
        jnz     l_509403
        mov     edx, dword ptr [DAT_007db0b0]
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_004d2840
    l_509403:
        mov     ax, word ptr [esp + 0x74]
        mov     cx, word ptr [esp + 0x76]
        mov     word ptr [esi + 0x20], ax
        mov     word ptr [esi + 0x22], cx
        jmp     l_50944c

    l_509417:
        mov     dx, word ptr [DAT_007db0ac]
        mov     ax, word ptr [DAT_007db0ae]
        lea     ecx, [esp + 0x34]
        mov     word ptr [esi + 0x20], dx
        mov     word ptr [esi + 0x22], ax
        call    FUN_004d2630
        test    al, al
        jnz     l_50944c
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     ecx, dword ptr [DAT_007db0b0]
        call    FUN_00412e70

    l_50944c:
        push    ebx
        call    FUN_004084e0
        mov     ecx, dword ptr [DAT_007db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0xc]
        call    FUN_0041ef60

    l_509469:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0

    l_509472:
        lea     ecx, [esp + 0x78]
        call    FUN_0040de20
        mov     ecx, dword ptr [DAT_007db0a0]
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xbc
        ret
    }
}
