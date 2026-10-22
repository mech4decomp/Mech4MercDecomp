/*
 * FUN_004960c0 (136 B) — MLR flare factory / library registration.
 *
 * Allocates a flare object, registers it, and registers two gosFX
 * library disable callbacks via FUN_0070f090.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da97c;
extern int g_007da960;
extern char g_007da95d;
extern char g_007da95c;

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004960c0(void)
{
    __asm {
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L60FE
        mov     eax, dword ptr [g_007da97c]
        push    eax
        push    0x7b2ac0
        push    0x530
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x496230
        mov     dword ptr [esi + 0x18], 0x495f90
        mov     dword ptr [g_007da960], esi
        jmp     L6108
L60FE:
        mov     dword ptr [g_007da960], 0x0
L6108:
        push    0x0
        push    0x0
        push    0x496160
        push    0x496150
        push    0x7b2ad0
        mov     byte ptr [g_007da95d], 0x0
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x496180
        push    0x496170
        push    0x7b2af4
        mov     byte ptr [g_007da95c], 0x0
        call    FUN_0070f090
        pop     esi
        ret
    }
}
