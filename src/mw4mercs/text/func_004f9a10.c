/*
 * FUN_004f9a10 (139 B) — Adept::Interface application-core init.
 * Allocates two objects (0xa4 and 0x48 bytes) via FUN_004084d0 and
 * stores their handles into globals 0x007dc8c0 / 0x007dd230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc8cc;
extern int g_007dc690;
extern int g_007dc8c0;
extern int g_007dd230;

extern void *FUN_004084d0(int size);
extern int FUN_00501a20(void);
extern int FUN_0050a480(void);

__declspec(naked) void FUN_004f9a10(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_alloc_fail1

        mov     ecx, dword ptr [g_007dc8cc]
        mov     edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x50ced0
        push    ecx
        push    0x501b70
        push    0x4f9af0
        push    0x0
        push    0x0
        push    edx
        push    0x775b28
        push    0x1cc
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc8c0], eax
        jmp     L_alloc2

L_alloc_fail1:
        mov     dword ptr [g_007dc8c0], 0

L_alloc2:
        push    0x48
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_alloc_fail2

        mov     ecx, eax
        call    FUN_0050a480
        mov     dword ptr [g_007dd230], eax
        ret

L_alloc_fail2:
        mov     dword ptr [g_007dd230], 0
        ret
    }
}
