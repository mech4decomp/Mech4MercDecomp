/*
 * FUN_006ac4f0 (357 B) — __cdecl, RET (no stack params; uses ESI/EDI).
 * Computes two clamped float values (via FPU compares against constants),
 * calls FUN_0067f7b0 / FUN_0041ee20 to build something, then updates a
 * global table indexed by a member.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d064;
extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0041ee20(void);

__declspec(naked) void __cdecl FUN_006ac4f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        sub     edi, eax
        mov     eax, dword ptr [esi + 0x8]
        shl     edi, 0x3
        cmp     eax, -0x14
        jz      L_6ac50d
        lea     edi, [edi + eax - 0x8]
L_6ac50d:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x408]
        fld     dword ptr [ecx + 0x50]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_6ac52f
        fld     dword ptr [g_76c5b0]
        jmp     L_6ac561
L_6ac52f:
        fld     dword ptr [ecx + 0x4c]
        fdiv    dword ptr [ecx + 0x50]
        fcom    dword ptr [g_76c5b0]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_6ac54c
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jmp     L_6ac561
L_6ac54c:
        fcom    dword ptr [g_76d064]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_6ac561
        fstp    st(0)
        fld     dword ptr [g_76d064]
L_6ac561:
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ecx + 0x58]
        fcomp   dword ptr [g_76c5b0]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_6ac57d
        fld     dword ptr [g_76c5b0]
        jmp     L_6ac5af
L_6ac57d:
        fld     dword ptr [ecx + 0x54]
        fdiv    dword ptr [ecx + 0x58]
        fcom    dword ptr [g_76c5b0]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_6ac59a
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jmp     L_6ac5af
L_6ac59a:
        fcom    dword ptr [g_76d064]
        /* __emit: FNSTSW AX no-WAIT form (MSVC6 inserts 9B WAIT prefix) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_6ac5af
        fstp    st(0)
        fld     dword ptr [g_76d064]
L_6ac5af:
        push    0x1
        fstp    dword ptr [esp + 0x10]
        push    0x0
        push    0x9
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f800000
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x9
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f800000
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, ecx
        shl     eax, 0x3
        cmp     esi, -0x14
        jz      L_6ac60e
        lea     eax, [eax + esi - 0x8]
L_6ac60e:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*0x4 + 0x848c]
        add     ecx, 0x8484
        sub     eax, edi
        add     esi, eax
        mov     dword ptr [ecx + edx*0x4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        add     edx, eax
        pop     edi
        mov     dword ptr [ecx + 0xc00], edx
        pop     esi
        ret
    }
}
