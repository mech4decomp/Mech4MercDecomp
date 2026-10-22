/*
 * FUN_00649D70 (92 B) — Logging helper.
 *
 * __cdecl, one stack param (char*). Increments a global counter,
 * resets it (calling FUN_00649E30) when it exceeds 0x32, truncates
 * the string to 0x50 chars, and prints it via an IAT printf.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b5a24;
extern void __cdecl FUN_00649e30(void);
extern int g_0076b2f4;

__declspec(naked) void __cdecl FUN_00649d70(void)
{
    __asm {
        mov     eax, dword ptr [g_007b5a24]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [g_007b5a24], eax
        jle     l_8f
        call    FUN_00649e30
        mov     dword ptr [g_007b5a24], 1
    l_8f:
        mov     edx, dword ptr [esp + 4]
        push    ebx
        push    esi
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        xor     esi, esi
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x50
        mov     bl, 0x20
        jbe     l_b3
        mov     bl, byte ptr [edx + 0x50]
        lea     esi, [edx + 0x50]
        mov     byte ptr [esi], al
    l_b3:
        push    edx
        push    0x76c690
        call    dword ptr [g_0076b2f4]
        add     esp, 8
        test    esi, esi
        jz      l_c8
        mov     byte ptr [esi], bl
    l_c8:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
