/*
 * FUN_0040c390 (127 B) — engine/loader init: builds a stack frame of
 * float constants, then calls four helper constructors/initializers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0040c410(void);
extern void FUN_0040c430(void);
extern void FUN_00419ec0(void);
extern void FUN_00419d60(void);

__declspec(naked) void FUN_0040c390(void)
{
    __asm {
        sub     esp, 0x84
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp+0] */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x4], 0x3f800000
        mov     dword ptr [esp+0x8], 0x40000000
        mov     dword ptr [esp+0xc], 0x40400000
        mov     dword ptr [esp+0x10], 0x0
        mov     dword ptr [esp+0x14], 0x3f800000
        mov     dword ptr [esp+0x18], 0x0
        mov     dword ptr [esp+0x1c], 0x0
        call    FUN_0040c410
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esp+0x2c]
        call    FUN_0040c430
        lea     edx, [esp+0x1c]
        push    edx
        lea     ecx, [esp+0x3c]
        call    FUN_00419ec0
        lea     eax, [esp+0x38]
        push    eax
        lea     ecx, [esp+0x6c]
        call    FUN_00419d60
        mov     al, 0x1
        add     esp, 0x84
        ret
    }
}
