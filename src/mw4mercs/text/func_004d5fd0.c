/*
 * FUN_004d5fd0 (55 B) — __cdecl factory. Allocates a 0x14-byte
 * Adept::EntityManager via FUN_004084d0 and constructs it with
 * FUN_004151c0(0x1d9, "Adept::EntityManager", DAT_007b8c10), storing the
 * result in the global 0x007dc144 (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004151c0(void);
extern int g_007b8c10;
extern int g_007dc144;

__declspec(naked) void FUN_004d5fd0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_5ffc
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x772c84
        push    0x1d9
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc144], eax
        ret
L_5ffc:
        mov     dword ptr [g_007dc144], 0
        ret
    }
}
