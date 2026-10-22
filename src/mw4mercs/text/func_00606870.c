/*
 * FUN_00606870 (138 B) — archive subsystem init: creates the four named
 * sub-archives ("Animation", "RawData", "Iterators", "General") via
 * FUN_006f4710, registers them, allocates a 0x18-byte object, and tail-calls
 * FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00849304;
extern int g_007f27b4;
extern int g_007f27b8;
extern int g_007f27bc;
extern int g_007f27c0;
extern int g_007f27b0;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00606970(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00606870(void)
{
    __asm {
        mov     eax, dword ptr [g_00849304]
        push    eax
        push    0x0
        push    0x78ba78
        call    FUN_006f4710
        push    eax
        push    0x0
        push    0x78ba70
        mov     dword ptr [g_007f27b4], eax
        call    FUN_006f4710
        mov     ecx, dword ptr [g_007f27b4]
        push    ecx
        push    0x0
        push    0x78ba64
        mov     dword ptr [g_007f27b8], eax
        call    FUN_006f4710
        mov     edx, dword ptr [g_007f27b4]
        push    edx
        push    0x0
        push    0x770d3c
        mov     dword ptr [g_007f27bc], eax
        call    FUN_006f4710
        push    eax
        mov     dword ptr [g_007f27c0], eax
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        mov     ecx, eax
        call    FUN_00606970
        mov     dword ptr [g_007f27b0], eax
        jmp     L2
L1:
        mov     dword ptr [g_007f27b0], 0x0
L2:
        jmp     FUN_006f49a0
    }
}
