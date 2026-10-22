/*
 * FUN_004f10d0 (44 B) — MLR/Adept component factory. Allocates 0x28
 * bytes; on success constructs via FUN_004f0f90 using the global
 * g_007dc840, else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dc840;
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_004f0f90(void);

__declspec(naked) void FUN_004f10d0(void)
{
    __asm {
        push    0x28
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_10f9
        mov     ecx, dword ptr [esp+0x8]
        mov     edx, dword ptr [esp+0x4]
        push    0x0
        push    ecx
        mov     ecx, dword ptr [g_007dc840]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_004f0f90
        ret
L_10f9:
        xor     eax, eax
        ret
    }
}
