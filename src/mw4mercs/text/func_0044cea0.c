/*
 * FUN_0044cea0 (150 B) — MLR_I_L_TMesh class factory/init. Allocates the
 * MLR_I_L_TMesh object (0x18 bytes), sets its vtable to 0x44d0b0, and
 * allocates a 0x400-byte buffer for a 0x100-entry structure. Stores results
 * in globals 0x7b98b4 / 0x7b98b8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b958c;
extern int g_007b98bc;
extern int g_007b98cc;
extern int g_007b98b4;
extern int g_007b98b8;

extern void __cdecl FUN_006f4710(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0044cea0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0x0
        push    0x76e964
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007b98bc], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_ceec
        mov     ecx, dword ptr [g_007b98cc]
        push    ecx
        push    0x76e944
        push    0x66
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], 0x44d0b0
        mov     dword ptr [g_007b98b4], esi
        jmp     L_cef6
L_ceec:
        mov     dword ptr [g_007b98b4], 0x0
L_cef6:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_cf2a
        push    0x400
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi+0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007b98b8], esi
        pop     esi
        ret
L_cf2a:
        mov     dword ptr [g_007b98b8], 0x0
        pop     esi
        ret
    }
}
