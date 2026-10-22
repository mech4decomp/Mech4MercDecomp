/*
 * FUN_00467bd0 (150 B) — MLR PMesh static-init: registers the
 * "MLR_I_L_DT_PMesh" class via FUN_006f4710, allocates the class object
 * (FUN_004151c0) and a 0x100-entry index buffer, stores globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b958c;
extern int   g_007d9958;
extern int   g_007d9968;
extern int   g_007d9950;
extern int   g_007d9954;

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00467bd0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76f010
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007d9958], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_467c1c
        mov     ecx, dword ptr [g_007d9968]
        push    ecx
        push    0x76efec
        push    0x5c
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x467df0
        mov     dword ptr [g_007d9950], esi
        jmp     L_467c26
L_467c1c:
        mov     dword ptr [g_007d9950], 0x0
L_467c26:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_467c5a
        push    0x400
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007d9954], esi
        pop     esi
        ret
L_467c5a:
        mov     dword ptr [g_007d9954], 0x0
        pop     esi
        ret
    }
}
