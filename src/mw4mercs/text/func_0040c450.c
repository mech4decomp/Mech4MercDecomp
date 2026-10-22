/*
 * FUN_0040c450 (140 B) — engine/loader init: builds a float/vector frame
 * from globals and constant floats, then calls three helper initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d054;
extern float g_0076d058;
extern float g_0076d050;
extern int   g_007b8cf8;
extern int   g_007b8d00;
extern int   g_007b8cfc;

extern void FUN_0041abb0(void);
extern void FUN_00419f90(void);
extern void FUN_0041aa10(void);

__declspec(naked) void FUN_0040c450(void)
{
    __asm {
        sub     esp, 0x54
        fld     dword ptr [g_0076d054]
        mov     eax, dword ptr [g_007b8cf8]
        mov     edx, dword ptr [g_007b8d00]
        /* __emit: MSVC6 drops the 00 disp byte for fst dword ptr [esp+0] */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fld     dword ptr [g_0076d058]
        mov     ecx, dword ptr [g_007b8cfc]
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [g_0076d050]
        mov     dword ptr [esp+0x18], eax
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [esp+0x1c], ecx
        mov     dword ptr [esp+0x20], edx
        push    0x3f000000
        fstp    dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0xc]
        lea     edx, [esp+0x4]
        fstp    dword ptr [esp+0x10]
        mov     dword ptr [esp+0x14], eax
        push    edx
        lea     eax, [esp+0x20]
        mov     dword ptr [esp+0x1c], ecx
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_0041abb0
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    ecx
        lea     ecx, [esp+0x28]
        call    FUN_00419f90
        lea     edx, [esp+0x24]
        push    edx
        lea     ecx, [esp+0x10]
        call    FUN_0041aa10
        mov     al, 0x1
        add     esp, 0x54
        ret
    }
}
