/*
 * FUN_0040c4f0 (217 B) — engine/loader init: builds float/vector frames
 * from constants and a global, calls several helper initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d05c;

extern void FUN_0040c410(void);
extern void FUN_0040c5f0(void);
extern void FUN_0040c610(void);
extern void FUN_00419f90(void);
extern void FUN_0041c680(void);
extern void FUN_0040c5d0(void);

__declspec(naked) void FUN_0040c4f0(void)
{
    __asm {
        sub     esp, 0x6c
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x4], 0x3f19999a
        mov     dword ptr [esp+0x8], 0x0
        mov     dword ptr [esp+0xc], 0x3f4ccccd
        mov     dword ptr [esp+0x1c], 0x3f4ccccd
        mov     dword ptr [esp+0x20], 0xbf19999a
        mov     dword ptr [esp+0x24], 0x0
        call    FUN_0040c410
        /* __emit: MSVC6 drops the 00 disp byte for lea ecx,[esp+0] */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_0040c5f0
        lea     edx, [esp+0x18]
        push    edx
        lea     ecx, [esp+0x4]
        call    FUN_0040c610
        fstp    st(0)
        fld     dword ptr [g_0076d05c]
        lea     eax, [esp+0x24]
        fstp    dword ptr [esp+0x24]
        push    eax
        lea     ecx, [esp+0x40]
        mov     dword ptr [esp+0x2c], 0x0
        mov     dword ptr [esp+0x30], 0x0
        call    FUN_00419f90
        lea     ecx, [esp+0x3c]
        push    ecx
        lea     edx, [esp+0x4]
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_0041c680
        /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp+0] */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [esp+0x8]
        mov     dword ptr [esp+0xc], eax
        lea     eax, [esp+0xc]
        mov     dword ptr [esp+0x10], ecx
        push    eax
        lea     ecx, [esp+0x34]
        mov     dword ptr [esp+0x18], edx
        call    FUN_0040c5d0
        lea     ecx, [esp+0x3c]
        push    ecx
        lea     edx, [esp+0x34]
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_0041c680
        mov     al, 0x1
        add     esp, 0x6c
        ret
    }
}
