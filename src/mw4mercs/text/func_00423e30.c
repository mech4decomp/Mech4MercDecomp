/*
 * FUN_00423e30 (397 B) — MLR (MidLevelRenderer) static init. Allocates
 * and initializes a set of global render objects (bumpy-water material,
 * several 8-byte pool objects, a 0x1000-byte buffer pool) and computes
 * a normalized direction vector stored into three globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004151c0(int a, const char *s, void *b);
extern void __cdecl FUN_00423bd0(int n);
extern void __cdecl FUN_00406c90(void *a, int b, int c, void *d);

extern int g_007b98cc;
extern int g_007b9644;
extern int g_007b9640;
extern int g_007b963c;
extern int g_007b9638;
extern int g_007b9634;
extern double g_0076de20;
extern float g_0076d064;
extern float g_0076d598;
extern float g_007b9628;
extern float g_007b962c;
extern float g_007b9630;

__declspec(naked) void FUN_00423e30(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     esi, ebx
        jz      L_6b
        mov     eax, dword ptr [g_007b98cc]
        push    eax
        push    0x76de28
        push    0x77
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x424230
        mov     dword ptr [g_007b9644], esi
        jmp     L_71
L_6b:
        mov     dword ptr [g_007b9644], ebx
L_71:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_9a
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
        call    FUN_00423bd0
        mov     dword ptr [g_007b9640], esi
        jmp     L_a0
L_9a:
        mov     dword ptr [g_007b9640], ebx
L_a0:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_c9
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
        call    FUN_00423bd0
        mov     dword ptr [g_007b963c], esi
        jmp     L_cf
L_c9:
        mov     dword ptr [g_007b963c], ebx
L_cf:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_f8
        push    0x200
        mov     ecx, esi
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi+4], ebx
        call    FUN_00423bd0
        mov     dword ptr [g_007b9638], esi
        jmp     L_fe
L_f8:
        mov     dword ptr [g_007b9638], ebx
L_fe:
        push    0x8
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebx
        jz      L_52
        push    0x1000
        mov     dword ptr [edi], ebx
        mov     dword ptr [edi+4], 0x200
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        jz      L_46
        push    0x423b70
        push    0x200
        push    0x8
        push    esi
        call    FUN_00406c90
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007b9634], edi
        jmp     L_58
L_46:
        xor     esi, esi
        mov     dword ptr [edi], esi
        mov     dword ptr [g_007b9634], edi
        jmp     L_58
L_52:
        mov     dword ptr [g_007b9634], ebx
L_58:
        fld     qword ptr [g_0076de20]
        pop     edi
        fsqrt
        pop     esi
        pop     ebx
        fdivr   dword ptr [g_0076d064]
        /* __emit: FST dword ptr [esp] zero-disp (D9 54 24 00); MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fmul    dword ptr [g_0076d598]
        fst     dword ptr [esp+4]
        fld     dword ptr [esp+4]
        fmul    dword ptr [esp+4]
        /* __emit: FLD dword ptr [esp] zero-disp (D9 44 24 00) */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        /* __emit: FMUL dword ptr [esp] zero-disp (D8 4C 24 00) */
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        /* __emit: FMUL dword ptr [esp] zero-disp (D8 4C 24 00) */
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        fstp    dword ptr [g_007b9628]
        fld     st(0)
        fmul    dword ptr [esp+4]
        fstp    dword ptr [g_007b962c]
        fmul    st(0), st(1)
        fstp    dword ptr [g_007b9630]
        fstp    st(0)
        add     esp, 0xc
        ret
    }
}
