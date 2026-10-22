/*
 * FUN_005a0d10 (76 B) — Cleanup function that frees the objects created by
 * FUN_005a0bb0. Frees the main object at 0x007f2030, then the struct at
 * 0x007f202c.
 *
 * __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_005a0d10(void);

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004179f0(void);
extern void __cdecl FUN_00417980(void);

void __declspec(naked) __cdecl FUN_005a0d10(void)
{
    

extern int DAT_007f2030;
extern int DAT_007f202c;
__asm {
push    esi

        mov esi, dword ptr [DAT_007f2030]

        test    esi, esi
        jz      skip_free1

        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

skip_free1:
        mov ecx, dword ptr [DAT_007f202c]

        mov dword ptr [DAT_007f2030], 0x0

        call    FUN_004179f0

        mov esi, dword ptr [DAT_007f202c]

        test    esi, esi
        jz      skip_free2

        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

skip_free2:
        pop     esi
        ret
    }


}
