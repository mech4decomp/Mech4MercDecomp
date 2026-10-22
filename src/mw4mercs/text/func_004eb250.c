/*
 * FUN_004eb250 (48 B) — __cdecl factory: allocates a 0x24-byte object
 * via FUN_004084d0 and constructs it with FUN_004eb1f0 using the global
 * DAT_007dc7bc as the base. Returns 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_004084d0(int);
extern void FUN_004eb1f0(void);
extern int g_007dc7bc;

__declspec(naked) void FUN_004eb250(void)
{
    __asm {
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_ret0
        mov     edx, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [edx+0x4c]
        push    esi
        push    edx
        mov     edx, dword ptr [g_007dc7bc]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004eb1f0
        pop     esi
        ret
L_ret0:
        xor     eax, eax
        ret
    }
}
