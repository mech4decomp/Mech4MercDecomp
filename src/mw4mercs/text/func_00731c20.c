/*
 * FUN_00731C20 (93 B) — __stdcall helper: calls GetCharABCWidthsA via IAT,
 * sums the ABC widths into param_1, and stores a float-derived mantissa
 * value into param_2.
 *
 * __stdcall, 3 stack params, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8a997c;                 /* 0x008a997c */
extern void *g_76b06c;               /* 0x0076b06c IAT (GetCharABCWidthsA) */
extern float g_8816d8;               /* 0x008816d8 */
extern float g_76dd60;               /* 0x0076dd60 */

__declspec(naked) void __stdcall FUN_00731C20(void)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [g_8a997c]
        __emit 0x8D /* lea eax,[esp]: MSVC6 drops the 00 disp byte for [esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    eax
        push    ecx
        call    dword ptr [g_76b06c]
        fld     dword ptr [g_8816d8]
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
        add     eax, edx
        __emit 0x8B /* mov edx,[esp]: MSVC6 drops the 00 disp byte for [esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [g_76dd60]
        add     eax, edx
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x18]
        and     edx, 0x7fffff
        sub     edx, 0x400000
        mov     dword ptr [eax], edx
        add     esp, 0xc
        ret     0xc
    }
}
