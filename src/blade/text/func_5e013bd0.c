/*
 * FUN_5e013bd0 (225 B) — DirectDraw caps/format matrix computation (FPU).
 *
 * __cdecl, no params. Heavy FPU stack math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a5c8;
extern int g_5e77a5a8;
extern int g_5e77a584;
extern int g_5e77a5c4;
extern int g_5e77a5a4;
extern float g_5e03628c;
extern float g_5e035aa4;
extern float g_5e77a5ac;
extern float g_5e77a5cc;
extern float g_5e77a58c;
extern float g_5e77a530;
extern float g_5e77a534;

__declspec(naked) void __cdecl FUN_5e013bd0(void)
{
    __asm {
        sub     esp, 0x14
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        mov     edx, dword ptr [g_5e77a5a8]
        sub     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [g_5e77a584]
        fild    dword ptr [esp + 0x10]
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [esp + 0x10], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_5e77a5a4]
        mov     dword ptr [esp + 0x10], ecx
        sub     edx, eax
        fmul    dword ptr [g_5e03628c]
        fild    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        fmul    dword ptr [g_5e03628c]
        fstp    dword ptr [esp + 0x4]
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [g_5e03628c]
        fst     dword ptr [esp + 0xc]
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x4]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [g_5e77a5ac]
        fsub    dword ptr [g_5e77a5cc]
        /* __emit: MSVC6 drops the 00 disp byte for fstp [esp] (D9 1C 24 vs ref D9 5C 24 00) */
        __emit  0xD9
        __emit  0x5C
        __emit  0x24
        __emit  0x00
        fld     dword ptr [g_5e77a58c]
        fsub    dword ptr [g_5e77a5cc]
        fstp    dword ptr [esp + 0x8]
        /* __emit: MSVC6 drops the 00 disp byte for fld [esp] (D9 04 24 vs ref D9 44 24 00) */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x8]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [g_5e77a530]
        fstp    st(0)
        fstp    st(0)
        /* __emit: MSVC6 drops the 00 disp byte for fld [esp] (D9 04 24 vs ref D9 44 24 00) */
        __emit  0xD9
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fmul    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0xc]
        fsubp   st(1), st(0)
        fld     dword ptr [esp + 0x10]
        fchs
        fmulp   st(1), st(0)
        fstp    dword ptr [g_5e77a534]
        add     esp, 0x14
        ret
    }
}
