/*
 * FUN_0070d500 (321 B) — Set up a set of global transform/float values from
 * 8 integer params, then call FUN_0074c120 on the resulting structure.
 *
 * Converts each param to float (via fild qword) scaled by 0x007a1b08 and
 * stores into a block of globals at 0x0085b190, then calls FUN_0074c120.
 *
 * __cdecl, RET 0x20 (eight stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7a1b08;
extern float g_85b190;
extern float g_85b194;
extern float g_85b1a8;
extern float g_85b1ac;
extern float g_85b1b0;
extern float g_85b1b4;
extern float g_85b1c8;
extern float g_85b1d0;
extern float g_85b1f0;
extern int g_85b1cc;
extern int g_85b1ec;
extern int g_85b20c;
extern int g_85b1e8;
extern int g_85b1d4;
extern int g_85b1f4;
extern int g_85b208;
extern void __cdecl FUN_0074c120(void *p);

__declspec(naked) void __cdecl FUN_0070d500(
    unsigned int param_1, unsigned int param_2, int param_3, int param_4,
    unsigned int param_5, unsigned int param_6, unsigned int param_7, unsigned int param_8)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        /* __emit: MSVC6 drops 00 disp for [esp] (89 04 24); ref is 89 44 24 00 */
        __emit  0x89
        __emit  0x44
        __emit  0x24
        __emit  0x00
        xor     eax, eax
        mov     dword ptr [esp + 4], eax
        /* __emit: MSVC6 drops 00 disp for [esp] (DF 2C 24); ref is DF 6C 24 00 */
        __emit  0xDF
        __emit  0x6C
        __emit  0x24
        __emit  0x00
        /* __emit: MSVC6 drops 00 disp for [esp] (89 0C 24); ref is 89 4C 24 00 */
        __emit  0x89
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 4], eax
        mov     dword ptr [esp + 8], edx
        fmul    dword ptr [g_7a1b08]
        /* __emit: MSVC6 drops 00 disp for [esp] (DF 2C 24); ref is DF 6C 24 00 */
        __emit  0xDF
        __emit  0x6C
        __emit  0x24
        __emit  0x00
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0xc], eax
        push    esi
        fmul    dword ptr [g_7a1b08]
        mov     esi, dword ptr [esp + 0x24]
        push    offset g_85b190
        fst     dword ptr [esp + 8]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x14], eax
        fmul    dword ptr [g_7a1b08]
        fstp    dword ptr [esp + 0x30]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        fmul    dword ptr [g_7a1b08]
        fstp    dword ptr [esp + 0x2c]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], eax
        add     edx, esi
        fst     dword ptr [g_85b190]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x14], eax
        fst     dword ptr [esp + 0x38]
        mov     dword ptr [g_85b1cc], edx
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [g_85b194]
        fld     st(2)
        add     ecx, edx
        mov     edx, dword ptr [esp + 0x2c]
        fstp    dword ptr [g_85b1a8]
        fxch    st(1)
        mov     dword ptr [g_85b1ec], edx
        mov     edx, dword ptr [esp + 8]
        fstp    dword ptr [g_85b1ac]
        mov     dword ptr [g_85b20c], edx
        fstp    dword ptr [g_85b1b0]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x34]
        mov     dword ptr [g_85b1e8], ecx
        mov     eax, dword ptr [esp + 0x34]
        fstp    dword ptr [g_85b1b4]
        mov     dword ptr [g_85b1d4], eax
        mov     eax, dword ptr [esp + 0x38]
        fstp    dword ptr [g_85b1c8]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [g_85b1f4], eax
        mov     dword ptr [g_85b208], ecx
        fst     dword ptr [g_85b1d0]
        fstp    dword ptr [g_85b1f0]
        call    FUN_0074c120
        pop     esi
        add     esp, 0x10
        ret     0x20
    }
}
