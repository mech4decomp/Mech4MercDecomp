/*
 * FUN_004bed40 (91 B) — MLR subsystem init. Calls FUN_006f4710(&0x77144c,0,
 * g_007da9e8) storing result to g_007daad8, allocates 0x18 bytes via
 * FUN_004084d0, and if non-null constructs an object via FUN_004151c0
 * (__thiscall, ecx=obj) with vtable 0x4bf2b0 at [obj+0x14], storing to
 * g_007daadc; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f4710(void);
extern void FUN_004084d0(void);
extern void FUN_004151c0(void);

extern int g_007da9e8;
extern int g_007daad8;
extern int g_007dab18;
extern int g_007daadc;

__declspec(naked) void FUN_004bed40(void)
{
    __asm {
        mov     eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x77144c
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007daad8], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_bed8f
        mov     ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x77142c
        push    0x84
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4bf2b0
        mov     dword ptr [g_007daadc], esi
        pop     esi
        ret
L_bed8f:
        mov     dword ptr [g_007daadc], 0
        pop     esi
        ret
    }
}
