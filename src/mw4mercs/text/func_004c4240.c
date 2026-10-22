/*
 * FUN_004c4240 (111 B) — MLR GroupElement factory. Calls FUN_006f4710
 * to create a group, allocates a 0x18-byte element via FUN_004084d0,
 * initializes it via FUN_004151c0, and stores the result into globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da9e8;
extern int g_007dab00;
extern int g_007dab18;
extern int g_007dab04;
extern int g_007daafc;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004c4240(void)
{
    __asm {
        mov     eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0x0
        push    0x7716e4
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007dab00], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_004c4299
        mov     ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x7716c4
        push    0x81
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x4c44c0
        mov     dword ptr [g_007dab04], esi
        mov     dword ptr [g_007daafc], 0x0
        pop     esi
        ret
    L_004c4299:
        mov     dword ptr [g_007dab04], 0x0
        mov     dword ptr [g_007daafc], 0x0
        pop     esi
        ret
    }
}
