/*
 * FUN_004e1d10 (1567 B) — MLR/Adept renderer setup/init (__thiscall).
 * Allocates and initializes the renderer's tile/terrain grid, texture
 * resources, and per-cell data structures.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004e2be0(void);
extern void __cdecl FUN_004b6e80(void);
extern void __cdecl FUN_004d21d0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004e2d00(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006d2a90(void);
extern void __cdecl FUN_006fb750(void);
extern void __cdecl FUN_006d2b40(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_006d3690(void);
extern void __cdecl FUN_006d00f0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_004e8f20(void);
extern void __cdecl FUN_004e91b0(void);
extern void __cdecl FUN_004b6c10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004e24d0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_00428b50(void);

extern float g_0076d064;
extern float g_00773c9c;
extern int g_007dc68c;
extern int g_007dc728;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007b2238;
extern int g_007dab44;
extern int g_007dab40;
extern int g_00840008;
extern int g_0084004c;
extern int g_00773ca0;
extern int g_00840048;
extern int g_007b967c;
extern int g_007b9648;

__declspec(naked) void FUN_004e1d10(void)
{
    __asm {
        sub     esp, 0x4f8
        mov     eax, dword ptr [esp+0x508]
        mov     edx, dword ptr [esp+0x500]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp+0x510]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x518]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d9940
        xor     ebx, ebx
        lea     edi, [esi+0x194]
        mov     dword ptr [esi+0x188], ebx
        mov     dword ptr [esi+0x184], ebx
        mov     ecx, edi
        mov     dword ptr [esi+0x180], ebx
        mov     dword ptr [esi+0x190], ebx
        mov     dword ptr [esi+0x18c], ebx
        call    FUN_004d1f10
        mov     edx, dword ptr [esp+0x51c]
        lea     ecx, [esi+0x1dc]
        mov     word ptr [esi+0x1d8], 0xffff
        mov     word ptr [esi+0x1da], bx
        push    edx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx+4], ebx
        call    FUN_004e2be0
        mov     ebp, dword ptr [esi+0xd8]
        mov     cl, byte ptr [ebp+0x150]
        mov     al, byte ptr [ebp+0x151]
        mov     edx, dword ptr [ebp]
        mov     byte ptr [esi+0x16b], cl
        mov     byte ptr [esi+0x16a], al
        movzx   cx, cl
        movzx   ax, al
        mov     dword ptr [esi], 0x773d24
        imul    eax, ecx
        push    eax
        mov     ecx, ebp
        mov     word ptr [esi+0x168], ax
        call    dword ptr [edx+0x44]
        lea     ecx, [esp+0x28]
        push    ecx
        lea     edx, [esp+0x30]
        push    edx
        lea     ebx, [esi+0x16c]
        lea     eax, [esi+0x174]
        push    ebx
        push    eax
        mov     ecx, ebp
        call    FUN_004b6e80
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [esi+0x78]
        fdiv    dword ptr [esp+0x2c]
        lea     ecx, [esi+0x78]
        fstp    dword ptr [esi+0x178]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [esp+0x28]
        fstp    dword ptr [esi+0x170]
        call    dword ptr [eax+4]
        mov     dword ptr [esp+0x18], eax
        push    1
        add     eax, 0x20
        push    eax
        mov     ecx, edi
        call    FUN_004d21d0
        mov     ecx, dword ptr [g_007dc68c]
        push    ecx
        call    FUN_006f4950
        push    0x190
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_1eb3
        mov     edi, dword ptr [esp+0x18]
        mov     edi, dword ptr [edi+0x34]
        mov     dl, byte ptr [esi+0x16b]
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x16a]
        push    edi
        mov     edi, ecx
        and     edi, 0xff
        mov     dword ptr [esp+0x14], edi
        fild    dword ptr [esp+0x14]
        push    ecx
        mov     edi, edx
        and     edi, 0xff
        fmul    dword ptr [esp+0x30]
        mov     dword ptr [esp+0x18], edi
        mov     edi, dword ptr [ebx]
        shl     dl, 3
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esp+0x1c]
        shl     cl, 3
        fmul    dword ptr [esp+0x38]
        fstp    dword ptr [esp]
        push    edi
        mov     edi, dword ptr [esi+0x174]
        push    edi
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004e2d00
        mov     [g_007dc728], eax
        jmp     L_1ebd
L_1eb3:
        mov     dword ptr [g_007dc728], 0
L_1ebd:
        call    FUN_006f49a0
        mov     edx, dword ptr [esp+0x18]
        mov     ax, word ptr [edx+0x24]
        cmp     ax, word ptr [g_007db0ac]
        lea     edi, [edx+0x24]
        jnz     L_1ee7
        mov     cx, word ptr [edi+2]
        cmp     cx, word ptr [g_007db0ae]
        jz      L_2026
L_1ee7:
        mov     eax, dword ptr [g_007b2238]
        test    eax, eax
        jle     L_2026
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx+0x50]
        mov     eax, dword ptr [edx+0x10]
        test    eax, eax
        jnz     L_2026
        mov     eax, dword ptr [g_00840008]
        push    eax
        call    FUN_006f4950
        push    0x60
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_1f40
        mov     ecx, eax
        call    FUN_006d2a90
        mov     [g_0084004c], eax
        jmp     L_1f4a
L_1f40:
        mov     dword ptr [g_0084004c], 0
L_1f4a:
        push    0x400
        lea     ecx, [esp+0x10c]
        push    ecx
        call    FUN_006fb750
        mov     ecx, dword ptr [g_0084004c]
        push    0x773d04
        call    FUN_006d2b40
        mov     edx, dword ptr [esp+0x18]
        push    1
        add     edx, 0x2c
        push    edx
        lea     ecx, [esp+0x38]
        call    FUN_004d1f80
        lea     eax, [esp+0x30]
        push    eax
        lea     ecx, [esp+0xbc]
        call    FUN_0040dd50
        lea     ecx, [esp+0xb8]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        call    FUN_006d3690
        push    1
        push    edi
        lea     ecx, [esp+0x7c]
        call    FUN_004d1f80
        push    0x10e0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_1fee
        mov     ecx, dword ptr [g_00773ca0]
        lea     edx, [esp+0x74]
        push    edx
        push    ecx
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [esi+0x16b]
        xor     edx, edx
        mov     dl, byte ptr [esi+0x16a]
        shl     ecx, 3
        push    ecx
        shl     edx, 3
        push    edx
        mov     ecx, eax
        call    FUN_006d00f0
        jmp     L_1ff0
L_1fee:
        xor     eax, eax
L_1ff0:
        fld     dword ptr [esi+0x174]
        mov     [g_00840048], eax
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [ebx]
        fstp    dword ptr [eax+0x14]
        call    FUN_006f49a0
        lea     ecx, [esp+0x74]
        call    FUN_004d21c0
        lea     ecx, [esp+0xb8]
        call    FUN_0040de20
        lea     ecx, [esp+0x30]
        call    FUN_004d21c0
L_2026:
        xor     edi, edi
        mov     di, word ptr [esi+0x168]
        mov     eax, edi
        shl     eax, 5
        add     eax, edi
        lea     ecx, [edi+eax*4]
        lea     edx, [ecx*4+4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_2077
        add     eax, 4
        mov     dword ptr [eax-4], edi
        dec     edi
        test    edi, edi
        mov     dword ptr [esp+0x10], eax
        mov     ebx, eax
        jl      L_2073
        inc     edi
L_205f:
        mov     ecx, ebx
        call    FUN_004e8f20
        add     ebx, 0x214
        dec     edi
        jnz     L_205f
        mov     eax, dword ptr [esp+0x10]
L_2073:
        mov     edi, eax
        jmp     L_2079
L_2077:
        xor     edi, edi
L_2079:
        mov     al, byte ptr [esi+0x16b]
        test    al, al
        mov     dword ptr [esi+0x17c], edi
        mov     dword ptr [esp+0x10], 0
        mov     byte ptr [esp+0x14], 0
        jbe     L_2166
L_209a:
        mov     al, byte ptr [esi+0x16a]
        xor     bl, bl
        test    al, al
        mov     byte ptr [esp+0x20], bl
        jbe     L_214e
L_20ae:
        mov     eax, dword ptr [esp+0x14]
        and     eax, 0xff
        mov     dword ptr [esp+0x1c], eax
        fild    dword ptr [esp+0x1c]
        fstp    dword ptr [esp+0x24]
L_20c3:
        mov     edx, dword ptr [esp+0x20]
        mov     cl, byte ptr [esp+0x14]
        and     edx, 0xff
        mov     dword ptr [esp+0x1c], edx
        fild    dword ptr [esp+0x1c]
        mov     byte ptr [edi+0x150], cl
        mov     byte ptr [edi+0x151], bl
        mov     ecx, dword ptr [edi+0x18]
        fmul    dword ptr [g_00773c9c]
        or      ecx, 2
        push    ecx
        mov     dword ptr [edi+0x18], ecx
        fadd    dword ptr [esi+0x16c]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esp+0x2c]
        mov     ecx, edi
        fmul    dword ptr [g_00773c9c]
        fadd    dword ptr [esi+0x174]
        fstp    dword ptr [esp]
        call    FUN_004e91b0
        mov     eax, dword ptr [esp+0x20]
        mov     ecx, dword ptr [esp+0x14]
        push    edi
        push    eax
        push    ecx
        mov     ecx, ebp
        call    FUN_004b6c10
        mov     edx, dword ptr [esp+0x10]
        mov     al, byte ptr [esi+0x16a]
        inc     bl
        inc     edx
        add     edi, 0x214
        cmp     bl, al
        mov     byte ptr [esp+0x20], bl
        mov     dword ptr [esp+0x10], edx
        jc      L_20c3
L_214e:
        mov     al, byte ptr [esp+0x14]
        mov     cl, byte ptr [esi+0x16b]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp+0x14], al
        jc      L_209a
L_2166:
        mov     eax, dword ptr [esp+0x510]
        mov     ecx, dword ptr [g_007db0ac]
        cmp     word ptr [eax+0x60], cx
        mov     dx, word ptr [g_007db0ae]
        lea     ebx, [eax+0x60]
        mov     word ptr [esi+0x1d8], cx
        mov     word ptr [esi+0x1da], dx
        jnz     L_219b
        cmp     word ptr [ebx+2], dx
        jz      L_224e
L_219b:
        push    1
        push    ebx
        lea     ecx, [esp+0x38]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [esi+0x16]
        add     eax, ecx
        cmp     eax, dword ptr [esp+0x48]
        mov     dword ptr [esp+0x44], eax
        jbe     L_21c1
        mov     dword ptr [esp+0x48], eax
L_21c1:
        mov     edx, dword ptr [esp+0x40]
        mov     ecx, dword ptr [esp+0x4c]
        sub     edx, eax
        add     edx, ecx
        jz      L_2223
        mov     ebp, 0x18
        mov     edi, eax
L_21d4:
        mov     eax, dword ptr [esp+0x514]
        push    1
        push    eax
        lea     ecx, [esp+0x38]
        push    ecx
        call    FUN_004d9910
        mov     edx, dword ptr [eax+0x10]
        add     esp, 0xc
        or      edx, ebp
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax+0x10], edx
        call    FUN_004e24d0
        mov     eax, dword ptr [esp+0x44]
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [esp+0x48]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp+0x44], eax
        jbe     L_2215
        mov     dword ptr [esp+0x48], eax
L_2215:
        mov     edx, dword ptr [esp+0x40]
        mov     ecx, dword ptr [esp+0x4c]
        sub     edx, eax
        add     edx, ecx
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-2) because a
           call-reloc sits between this branch and its target L_21d4 */
        __emit 0x75
        __emit 0xB1
L_2223:
        mov     cx, word ptr [ebx+2]
        mov     ax, word ptr [ebx]
        mov     word ptr [esi+0x1da], cx
        lea     ecx, [esp+0x30]
        mov     word ptr [esi+0x1d8], ax
        call    FUN_004d21c0
        mov     ecx, dword ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
L_224e:
        mov     eax, dword ptr [esp+0x18]
        add     eax, 0x30
        cmp     word ptr [eax], cx
        jnz     L_2260
        cmp     word ptr [eax+2], dx
        jz      L_22c2
L_2260:
        push    1
        push    eax
        lea     ecx, [esp+0x7c]
        call    FUN_004d1f80
        lea     ecx, [esp+0x74]
        push    ecx
        call    FUN_00421e60
        add     esp, 4
        push    0x40
        lea     edx, [esp+0x34]
        mov     edi, eax
        mov     eax, dword ptr [esp+0x78]
        push    edx
        lea     ecx, [esp+0x7c]
        call    dword ptr [eax+0x20]
        cmp     edi, 0xd
        jle     L_22a4
        mov     edx, dword ptr [esp+0x74]
        push    4
        lea     ecx, [esp+0x28]
        push    ecx
        lea     ecx, [esp+0x7c]
        call    dword ptr [edx+0x20]
L_22a4:
        lea     eax, [esp+0x74]
        push    edi
        push    eax
        call    FUN_00487900
        add     esp, 8
        lea     ecx, [esp+0x74]
        mov     [g_007b967c], eax
        call    FUN_004d21c0
        jmp     L_22eb
L_22c2:
        mov     ecx, dword ptr [g_007b967c]
        test    ecx, ecx
        jz      L_22eb
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], 0
        jnz     L_22e1
        test    ecx, ecx
        jz      L_22e1
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_22e1:
        mov     dword ptr [g_007b967c], 0
L_22eb:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_2316
        push    0x40
        mov     ecx, eax
        call    FUN_00428b50
        pop     edi
        mov     [g_007b9648], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4f8
        ret     0x14
L_2316:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     dword ptr [g_007b9648], 0
        pop     ebx
        add     esp, 0x4f8
        ret     0x14
    }
}
