/*
 * FUN_0070c270 (716 B) — __cdecl RET (0 args). Reads a set of global
 * config/state dwords and floats, computes a set of bit-field flags and
 * writes them to a block of output globals (0x0087c2xx / 0x00859dxx /
 * 0x0085a2xx). Uses FPU compares (FLD/FCOMP/FNSTSW) for float range checks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_859fc0;
extern float g_859fc4;
extern float g_859fc8;
extern float g_859fcc;
extern float g_7a1770;
extern float g_7a176c;

extern int g_87c2cc;
extern int g_87c2c8;
extern int g_87c2c4;
extern int g_87c2bc;
extern int g_87c2c0;
extern int g_87c2b8;
extern int g_87c2b0;
extern int g_87c2b4;
extern int g_87c2ac;
extern int g_87c2a8;
extern int g_87c2a4;
extern int g_87c2a0;
extern int g_859f28;
extern int g_859f80;
extern int g_859f88;
extern int g_859f6c;
extern int g_859f8c;
extern int g_859f90;
extern int g_859d74;
extern int g_859d50;
extern short g_859ffe;
extern int g_8b2520;
extern int g_85a258;
extern int g_85a25c;
extern int g_85a254;
extern int g_859d78;
extern int g_859d6c;
extern int g_859f78;
extern int g_859d70;
extern int g_859f7c;
extern int g_859d68;
extern int g_859d64;
extern int g_859d60;
extern int g_859d5c;
extern int g_859d58;
extern int g_859d54;
extern unsigned char g_858954;
extern int g_85894c;
extern int g_858950;
extern int g_8aca14;
extern int g_8aca18;
extern int g_8aca1c;
extern int g_8aca20;
extern int g_8aca24;
extern int g_8aca28;

__declspec(naked) void FUN_0070c270(void)
{
    __asm {
        fld     dword ptr [g_859fc0]
        push    ebx
        fcomp   dword ptr [g_7a1770]
        push    esi
        push    edi
        xor     edi, edi
        mov     ebx, 0x1
        __emit 0xDF /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8; ref F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jz      L_c2ca
        fld     dword ptr [g_859fc4]
        fcomp   dword ptr [g_7a1770]
        __emit 0xDF /* __emit: no-WAIT fnstsw ax */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_c2ca
        fld     dword ptr [g_859fc8]
        fcomp   dword ptr [g_7a176c]
        __emit 0xDF /* __emit: no-WAIT fnstsw ax */
        __emit 0xE0
        __emit 0x84 /* __emit: MSVC6 swaps test bl,ah (84 DC); ref needs 84 E3 = test bl,ah */
        __emit 0xE3
        jnz     L_c2ca
        fld     dword ptr [g_859fcc]
        mov     dword ptr [g_87c2cc], ebx
        fcomp   dword ptr [g_7a176c]
        __emit 0xDF /* __emit: no-WAIT fnstsw ax */
        __emit 0xE0
        __emit 0x84 /* __emit: MSVC6 swaps test bl,ah (84 DC); ref needs 84 E3 = test bl,ah */
        __emit 0xE3
        jz      L_c2d0
L_c2ca:
        mov     dword ptr [g_87c2cc], edi
L_c2d0:
        fld     dword ptr [g_859fc0]
        fcomp   dword ptr [g_859fc4]
        __emit 0xDF /* __emit: no-WAIT fnstsw ax */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_c2ef
        mov     eax, dword ptr [g_859fc4]
        mov     dword ptr [g_87c2c8], eax
        jmp     L_c2fb
L_c2ef:
        mov     ecx, dword ptr [g_859fc0]
        mov     dword ptr [g_87c2c8], ecx
L_c2fb:
        fld     dword ptr [g_859fc8]
        fcomp   dword ptr [g_859fcc]
        __emit 0xDF /* __emit: no-WAIT fnstsw ax */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_c31c
        mov     edx, dword ptr [g_859fc8]
        mov     dword ptr [g_87c2c4], edx
        jmp     L_c326
L_c31c:
        mov     eax, dword ptr [g_859fcc]
        mov     dword ptr [g_87c2c4], eax
L_c326:
        mov     ecx, dword ptr [g_859f28]
        mov     edx, dword ptr [g_859f80]
        and     edx, 0x280
        shr     ecx, 0xc
        and     ecx, ebx
        neg     edx
        sbb     edx, edx
        neg     edx
        mov     esi, dword ptr [g_859f88]
        mov     dword ptr [g_87c2bc], edx
        mov     dword ptr [g_87c2c0], ecx
        mov     ecx, dword ptr [g_859f6c]
        mov     eax, ecx
        and     eax, ebx
        mov     dword ptr [g_87c2b8], eax
        mov     eax, ecx
        shr     eax, 0xd
        and     eax, ebx
        mov     dword ptr [g_87c2b0], eax
        mov     eax, dword ptr [g_859f8c]
        mov     edx, ecx
        shr     edx, 0xb
        and     edx, ebx
        mov     dword ptr [g_87c2b4], edx
        mov     edx, eax
        and     edx, ebx
        mov     dword ptr [g_87c2ac], edx
        mov     edx, eax
        shr     edx, 0x3
        and     edx, ebx
        shr     eax, 0x7
        and     eax, ebx
        mov     dword ptr [g_87c2a8], edx
        mov     edx, dword ptr [g_859f90]
        mov     dword ptr [g_87c2a4], eax
        shr     edx, 0x2
        and     edx, ebx
        mov     eax, esi
        shr     eax, 0x2
        and     eax, ebx
        cmp     word ptr [g_859ffe], 0x2
        mov     dword ptr [g_859d74], edx
        sbb     edx, edx
        inc     edx
        mov     dword ptr [g_859d50], edx
        mov     edx, dword ptr [g_8b2520]
        test    dh, 0x10
        mov     dword ptr [g_87c2a0], eax
        jz      L_c4f4
        mov     dword ptr [g_87c2a0], edi
L_c3e6:
        shr     esi, 0x1
        and     esi, ebx
        mov     dword ptr [g_85a258], esi
        mov     dword ptr [g_85a25c], edi
L_c3f6:
        and     ecx, 0x180
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        mov     dword ptr [g_859d78], ecx
        mov     ecx, dword ptr [g_859f78]
        shr     ecx, 0x1
        and     ecx, ebx
        test    dl, 0x4
        mov     dword ptr [g_859d6c], ecx
        jz      L_c423
        mov     dword ptr [g_85a25c], edi
L_c423:
        mov     eax, dword ptr [g_859f7c]
        shr     eax, 0x5
        and     eax, ebx
        test    dl, 0x2
        mov     dword ptr [g_859d70], eax
        jz      L_c43d
        mov     dword ptr [g_859d70], edi
L_c43d:
        cmp     dword ptr [g_85a254], edi
        mov     dword ptr [g_859d68], edi
        mov     dword ptr [g_859d64], edi
        mov     dword ptr [g_859d60], edi
        mov     dword ptr [g_859d5c], edi
        mov     dword ptr [g_859d58], edi
        mov     dword ptr [g_859d54], edi
        jz      L_c518
        test    edx, 0x100000
        jnz     L_c518
        mov     al, byte ptr [g_858954]
        mov     ebx, dword ptr [g_85894c]
        neg     al
        sbb     eax, eax
        and     eax, ebx
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     eax, [eax + ecx*0x8]
        xor     edx, edx
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x3
        cmp     dword ptr [eax + g_8aca14], edi
        setz    dl
        xor     ecx, ecx
        mov     dword ptr [g_859d68], edx
        cmp     dword ptr [eax + g_8aca18], edi
        setz    cl
        xor     edx, edx
        mov     dword ptr [g_859d64], ecx
        cmp     dword ptr [eax + g_8aca1c], edi
        mov     ecx, dword ptr [eax + g_8aca20]
        setz    dl
        pop     edi
        pop     esi
        mov     dword ptr [g_859d5c], ecx
        pop     ebx
        mov     dword ptr [g_859d60], edx
        mov     edx, dword ptr [eax + g_8aca24]
        mov     eax, dword ptr [eax + g_8aca28]
        mov     dword ptr [g_859d58], edx
        mov     dword ptr [g_859d54], eax
        ret
L_c4f4:
        cmp     eax, edi
        jz      L_c3e6
        mov     eax, esi
        shr     eax, 0x3
        and     eax, ebx
        shr     esi, 0x5
        and     esi, ebx
        mov     dword ptr [g_85a258], eax
        mov     dword ptr [g_85a25c], esi
        jmp     L_c3f6
L_c518:
        mov     eax, dword ptr [g_858950]
        cmp     eax, ebx
        jz      L_c526
        cmp     eax, 0x2
        jnz     L_c538
L_c526:
        mov     dword ptr [g_859d68], ebx
        mov     dword ptr [g_859d64], ebx
        mov     dword ptr [g_859d60], ebx
L_c538:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
