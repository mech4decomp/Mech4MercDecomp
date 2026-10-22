/*
 * FUN_004F4450 (101 B) — Adept::Driver class registration. __cdecl.
 * Allocates 0xa4 bytes via FUN_004084d0; if non-null, calls FUN_00501a20
 * (class-registration) with a vtable/ctor/name table and stores the result
 * in global 0x7dc894; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dc8cc;
extern unsigned int g_7dc690;
extern unsigned int g_7dc894;
extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __cdecl FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_004f4450(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [g_7dc8cc]
        mov     edx, dword ptr [g_7dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x507790
        push    0x4f44f0
        push    0x0
        push    0x0
        push    edx
        push    0x77528c
        push    0x1ce
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_7dc894], eax
        ret
L1:
        mov     dword ptr [g_7dc894], 0
        ret
    }
}
