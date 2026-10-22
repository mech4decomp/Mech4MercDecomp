/*
 * FUN_004043f0 (138 B) — GetServerInfo-style dispatcher. __stdcall (RET 0xc).
 * Validates arg count, then either reports an error via atoi("2") or
 * queries the game-list object status.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_0076b318;   /* IAT: atoi */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void FUN_004043f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp+0xc], 0x1
        jz      L1
        push    0x79fb5c
        call    dword ptr [g_0076b318]
        add     esp, 0x4
        pop     ebp
        ret     0xc
L1:
        call    FUN_006f89f0
        test    eax, eax
        jnz     L2
        push    0x76ba8c
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L3
        int     3
L3:
        push    0x79fb60
        call    dword ptr [g_0076b318]
        add     esp, 0x4
        pop     ebp
        ret     0xc
L2:
        push    esi
        call    FUN_006f5ed0
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    0x79fae8
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jz      L4
        push    eax
        jmp     L5
L4:
        push    0x79fb60
L5:
        call    dword ptr [g_0076b318]
        add     esp, 0x4
        mov     esi, eax
        call    FUN_006f5ee0
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xc
    }
}
