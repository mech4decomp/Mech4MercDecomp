/*
 * In-.text data block at 0x524C4B (1754 B). Tail of a larger __stdcall
 * function (RET 8, 2 params; prologue/sub esp before this slice). Builds
 * a string from a global (0x76cb8c), allocates objects via FUN_004084D0,
 * walks a list via FUN_00416CC0, and processes a table of strings
 * (0x779e58 / 0x779e50) into an array, then cleans up.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00416BC0(void);
extern void __cdecl FUN_00416CC0(void);
extern void __cdecl FUN_004D05D0(void);
extern void __cdecl FUN_0040D9B0(void);
extern void __cdecl FUN_00416A90(void);
extern void __cdecl FUN_004084E0(void *ptr);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041D890(void);
extern void __cdecl FUN_0041DB30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004129C0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_0041DB70(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0040F060(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_005178D0(void);
extern void __cdecl FUN_006140C0(void);
extern void __cdecl FUN_00416A00(void);
extern void __cdecl FUN_0041DAC0(void);
extern void __cdecl FUN_00416C60(void);
extern void __cdecl FUN_004169C0(void);

extern void *g_76b2b0;   /* IAT fn ptr */
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern unsigned int g_7b8c10;

__declspec(naked) void __stdcall func_00524C4B(void)
{
    __asm {
        push    0x80
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x76cb8c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_7dab44]
        mov     esi, dword ptr [ecx]
        mov     edi, dword ptr [g_7dab40]
        push    0x14
        mov     dword ptr [ebp], 1
        xor     esi, edi
        call    FUN_004084D0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_524cc6
        mov     edx, dword ptr [esi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, edi
        call    FUN_00416BC0
        mov     dword ptr [edi], 0x779e88
        mov     ebp, edi
        jmp     L_524cc8
    L_524cc6:
        xor     ebp, ebp
    L_524cc8:
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], ebp
        call    FUN_00416CC0
        mov     edi, eax
        test    edi, edi
        je      L_524daa
        mov     ebx, dword ptr [esp + 0x68]
    L_524ce1:
        mov     al, byte ptr [esp + 0x70]
        test    al, al
        jne     L_524cf3
        cmp     dword ptr [edi + 0x20], 1
        je      L_524d99
    L_524cf3:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jne     L_524d05
        cmp     dword ptr [edi + 0x20], 2
        je      L_524d99
    L_524d05:
        push    0x14
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_524d4e
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        je      L_524d23
        inc     byte ptr [eax - 1]
    L_524d23:
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        mov     ecx, esi
        or      ebx, 1
        call    FUN_004D05D0
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x10], edx
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je      L_524d46
        inc     byte ptr [eax - 1]
    L_524d46:
        mov     dword ptr [esi], 0x76d650
        jmp     L_524d50
    L_524d4e:
        xor     esi, esi
    L_524d50:
        test    bl, 1
        je      L_524d61
        lea     ecx, [esp + 0x1c]
        and     ebx, 0xfffffffe
        call    FUN_0040D9B0
    L_524d61:
        mov     edi, dword ptr [edi + 0x18]
        test    edi, edi
        mov     dword ptr [esp + 0x14], edi
        je      L_524d6f
        inc     byte ptr [edi - 1]
    L_524d6f:
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        lea     ecx, [esp + 0x48]
        call    FUN_00416A90
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_524d99
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_524d99
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_524d99:
        mov     ecx, ebp
        call    FUN_00416CC0
        mov     edi, eax
        test    edi, edi
        jne     L_524ce1
    L_524daa:
        push    0x779e68
        lea     ecx, [esp + 0x38]
        call    FUN_00412570
        push    0x38
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      L_524dd6
        mov     ecx, dword ptr [esp + 0x34]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041D890
        jmp     L_524dd8
    L_524dd6:
        xor     eax, eax
    L_524dd8:
        mov     ecx, eax
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041DB30
        test    eax, eax
        je      L_524f74
    L_524deb:
        xor     edi, edi
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00412780
        lea     ecx, [esp + 0x14]
        call    FUN_004129C0
        mov     ecx, eax
        call    FUN_00412950
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 8]
        mov     ecx, esi
        call    FUN_00416CC0
        mov     ebp, eax
        cmp     ebp, edi
        je      L_524ea1
    L_524e23:
        mov     esi, dword ptr [ebp + 0x18]
        test    esi, esi
        je      L_524ee8
        inc     byte ptr [esi - 1]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
    L_524e3d:
        test    esi, esi
        je      L_524e44
        inc     byte ptr [esi - 1]
    L_524e44:
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        push    eax
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        je      L_524e8c
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_524e75
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_524e75:
        test    esi, esi
        je      L_524e8c
        mov     al, byte ptr [esi - 1]
        dec     esi
        dec     al
        mov     byte ptr [esi], al
        jne     L_524e8c
        push    esi
        call    FUN_004084E0
        add     esp, 4
    L_524e8c:
        test    bl, bl
        jne     L_524e9f
        mov     ecx, dword ptr [esp + 0x20]
        call    FUN_00416CC0
        mov     ebp, eax
        test    ebp, ebp
        jne     L_524e23
    L_524e9f:
        xor     edi, edi
    L_524ea1:
        mov     al, byte ptr [esp + 0x70]
        test    al, al
        jne     L_524eb3
        cmp     ebp, edi
        je      L_524eb3
        cmp     dword ptr [ebp + 0x20], 1
        je      L_524ec5
    L_524eb3:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jne     L_524eef
        cmp     ebp, edi
        je      L_524eef
        cmp     dword ptr [ebp + 0x20], 2
        jne     L_524eef
    L_524ec5:
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, esi
        call    FUN_0041DB70
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, edi
        je      L_524f65
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_524f65
        jmp     L_524f5c
    L_524ee8:
        xor     ecx, ecx
        jmp     L_524e3d
    L_524eef:
        push    0x14
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        cmp     esi, edi
        je      L_524f2e
        mov     ecx, dword ptr [g_7b8c10]
        push    ecx
        mov     ecx, esi
        call    FUN_00415180
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0040F060
        mov     dword ptr [esi], 0x76d650
        jmp     L_524f30
    L_524f2e:
        xor     esi, esi
    L_524f30:
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        lea     ecx, [esp + 0x48]
        call    FUN_00416A90
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, esi
        call    FUN_0041DB70
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, edi
        je      L_524f65
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_524f65
    L_524f5c:
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_524f65:
        mov     ecx, esi
        call    FUN_0041DB30
        cmp     eax, edi
        jne     L_524deb
    L_524f74:
        mov     ecx, dword ptr [esp + 0x20]
        test    ecx, ecx
        je      L_524f82
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    L_524f82:
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_00416BC0
        lea     ecx, [esp + 0x54]
        mov     dword ptr [esp + 0x54], 0x76d610
        xor     ebx, ebx
        call    FUN_00416CC0
        test    eax, eax
        je      L_525003
        mov     ecx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [ecx + 0x409a0]
        mov     esi, edi
        cmp     ebx, ebp
        je      L_525007
    L_524fb7:
        mov     eax, dword ptr [eax + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x70], eax
        je      L_524fc9
        inc     byte ptr [eax - 1]
    L_524fc9:
        lea     edx, [esp + 0x70]
        push    edx
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        je      L_524ff0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_524ff0
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_524ff0:
        lea     ecx, [esp + 0x54]
        inc     ebx
        add     esi, 4
        call    FUN_00416CC0
        test    eax, eax
        __emit 0x75
        __emit 0xB6
        jmp     L_525007
    L_525003:
        mov     edi, dword ptr [esp + 0x18]
    L_525007:
        mov     eax, dword ptr [edi]
        mov     ebp, dword ptr [g_76b2b0]
        push    0xf
        push    0x779e58
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x2c], ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        je      L_525044
        mov     esi, edi
    L_525028:
        mov     ecx, dword ptr [esi + 4]
        push    0xf
        add     esi, 4
        push    0x779e58
        push    ecx
        inc     ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     L_525028
        mov     dword ptr [esp + 0x20], ebx
    L_525044:
        mov     edx, dword ptr [edi + ebx*4]
        lea     esi, [edi + ebx*4]
        push    0xf
        push    0x779e58
        push    edx
        mov     dword ptr [esp + 0x34], esi
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     L_525077
    L_52505f:
        mov     eax, dword ptr [esi + 4]
        push    0xf
        add     esi, 4
        push    0x779e58
        push    eax
        inc     ebx
        call    ebp
        add     esp, 0xc
        test    eax, eax
        je      L_52505f
    L_525077:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx + ebx*4]
        lea     eax, [ecx + ebx*4]
        push    7
        push    0x779e50
        push    edx
        mov     edi, ebx
        mov     dword ptr [esp + 0x38], eax
        call    ebp
        add     esp, 0xc
        test    eax, eax
        jne     L_5250b4
    L_52509c:
        mov     esi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esi + 4]
        push    7
        add     esi, 4
        push    0x779e50
        push    eax
        inc     edi
        call    ebp
        add     esp, 0xc
        test    eax, eax
        __emit 0x74
        __emit 0xE8
    L_5250b4:
        mov     eax, dword ptr [esp + 0x20]
        mov     esi, ebx
        sub     esi, eax
        lea     ecx, [esi*4 + 4]
        sub     edi, ebx
        push    ecx
        mov     dword ptr [esp + 0x74], edi
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      L_5250ed
        mov     dword ptr [eax], esi
        lea     ebp, [eax + 4]
        lea     eax, [esi - 1]
        test    eax, eax
        jl      L_5250ef
        lea     ecx, [eax + 1]
        xor     eax, eax
        mov     edi, ebp
        rep stosd
        jmp     L_5250ef
    L_5250ed:
        xor     ebp, ebp
    L_5250ef:
        test    esi, esi
        mov     dword ptr [esp + 0x30], ebp
        jle     L_52511a
        mov     edi, dword ptr [esp + 0x28]
        mov     ebx, ebp
        mov     dword ptr [esp + 0x14], esi
    L_525101:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        add     edi, 4
        add     ebx, 4
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jne     L_525101
    L_52511a:
        mov     eax, dword ptr [esp + 0x70]
        test    eax, eax
        jle     L_525141
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x2c]
        mov     ebp, eax
    L_52512c:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        add     edi, 4
        add     ebx, 4
        dec     ebp
        jne     L_52512c
        mov     ebp, dword ptr [esp + 0x30]
    L_525141:
        test    esi, esi
        jle     L_525169
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        add     edx, eax
        mov     edi, ebp
        lea     ebx, [ecx + edx*4]
    L_525158:
        push    edi
        mov     ecx, ebx
        call    FUN_00412740
        add     edi, 4
        add     ebx, 4
        dec     esi
        jne     L_525158
    L_525169:
        test    ebp, ebp
        je      L_525193
        mov     eax, dword ptr [ebp - 4]
        lea     ebx, [ebp - 4]
        lea     esi, [ebp + eax*4]
        dec     eax
        js      L_52518a
        lea     edi, [eax + 1]
    L_52517d:
        sub     esi, 4
        mov     ecx, esi
        call    FUN_0040D9B0
        dec     edi
        jne     L_52517d
    L_52518a:
        push    ebx
        call    FUN_004084E0
        add     esp, 4
    L_525193:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [edx + 0x409a0]
        test    eax, eax
        mov     dword ptr [esp + 0x20], 0
        jle     L_52529b
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x70], eax
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, ecx
        lea     ebp, [ecx + 4]
        mov     dword ptr [esp + 0x30], eax
    L_5251c6:
        mov     ecx, dword ptr [esp + 0x70]
        mov     ebx, dword ptr [ecx]
        test    ebx, ebx
        je      L_5251d3
        inc     byte ptr [ebx - 1]
    L_5251d3:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        je      L_5251e7
        push    eax
        call    FUN_006F4230
        mov     dword ptr [ebp], 0
    L_5251e7:
        push    0
        push    0x80
        call    FUN_006F3C80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    ebx, ebx
        rep movsb
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], ebx
        je      L_525223
        inc     byte ptr [ebx - 1]
    L_525223:
        call    FUN_005178D0
        mov     ecx, dword ptr [eax + 0x84]
        call    FUN_006140C0
        test    eax, eax
        je      L_525244
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx + ebp], 1
        jmp     L_52524f
    L_525244:
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [edx + ebp], 0
    L_52524f:
        mov     esi, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x70]
        inc     esi
        add     edx, 4
        add     ebp, 4
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x70], edx
        je      L_52527d
        mov     al, byte ptr [ebx - 1]
        dec     ebx
        dec     al
        mov     byte ptr [ebx], al
        jne     L_52527d
        push    ebx
        call    FUN_004084E0
        add     esp, 4
    L_52527d:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        cmp     ecx, dword ptr [eax + 0x409a0]
        jl      L_5251c6
        mov     esi, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x1c]
        jmp     L_5252a3
    L_52529b:
        mov     ebp, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x18]
    L_5252a3:
        lea     ecx, [esp + 0x40]
        call    FUN_00416A00
        test    esi, esi
        je      L_5252d5
        mov     eax, dword ptr [esi - 4]
        lea     ebx, [esi - 4]
        lea     esi, [esi + eax*4]
        dec     eax
        js      L_5252cc
        lea     edi, [eax + 1]
    L_5252bf:
        sub     esi, 4
        mov     ecx, esi
        call    FUN_0040D9B0
        dec     edi
        jne     L_5252bf
    L_5252cc:
        push    ebx
        call    FUN_004084E0
        add     esp, 4
    L_5252d5:
        test    ebp, ebp
        je      L_5252e9
        mov     ecx, ebp
        call    FUN_0041DAC0
        push    ebp
        call    FUN_004084E0
        add     esp, 4
    L_5252e9:
        lea     ecx, [esp + 0x54]
        call    FUN_00416C60
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        je      L_52530d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_52530d
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_52530d:
        lea     ecx, [esp + 0x40]
        call    FUN_004169C0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x5c
        ret     8
    }
}
