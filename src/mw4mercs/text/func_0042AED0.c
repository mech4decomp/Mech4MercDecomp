/*
 * FUN_0042AED0 (extent 0x42AED0-0x42AF45, 117 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da848;
extern int    g_0076e100;
extern float  g_0076e0ac;
extern int    g_0076e0f8;
extern void   __cdecl FUN_004821A0(void);
extern void   __cdecl FUN_004912B0(void);
extern void   __cdecl FUN_00411C40(void);
extern void   __cdecl FUN_00411DC0(void);

__declspec(naked) void __stdcall FUN_0042AED0(void)
{
    __asm {
        sub    esp, 0x18
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push   edi
        call   FUN_004821A0
        mov    eax, dword ptr [esi + 0xa8]
        test   eax, eax
        je     L_21
        add    eax, 0xc
        push   eax
        lea    ecx, [esp + 0xc]
        call   FUN_004912B0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg     L_07
        xor    eax, eax
        jmp    L_11
    L_07:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
    L_11:
        mov    edx, dword ptr [eax + 0x10]
        push   edx
        push   offset g_0076e100
        mov    ecx, edi
        call   FUN_00411C40
    L_21:
        fld    dword ptr [esi + 0xac]
        push   ecx
        fmul   dword ptr [g_0076e0ac]
        mov    ecx, edi
        fstp   dword ptr [esp]
        push   offset g_0076e0f8
        call   FUN_00411DC0
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
    }
}
