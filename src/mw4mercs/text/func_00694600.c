/*
 * FUN_00694600 (54 B) — __cdecl, RET.
 * Lazily allocates a singleton (0x58 bytes via FUN_004084d0,
 * constructed by FUN_00694090) stored in g_0082db18, then bumps
 * the refcount at [obj+0x48].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0082db18;
extern void *__cdecl FUN_004084d0(int size);
extern void *__cdecl FUN_00694090(void);

__declspec(naked) void __cdecl FUN_00694600(void)
{
    __asm {
        mov     eax, dword ptr [g_0082db18]
        test    eax, eax
        jnz     L_inc
        push    0x58
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_zero
        mov     ecx, eax
        call    FUN_00694090
        mov     ecx, dword ptr [eax + 0x48]
        inc     ecx
        mov     dword ptr [g_0082db18], eax
        mov     dword ptr [eax + 0x48], ecx
        ret
    L_zero:
        xor     eax, eax
        mov     dword ptr [g_0082db18], eax
    L_inc:
        inc     dword ptr [eax + 0x48]
        ret
    }
}
