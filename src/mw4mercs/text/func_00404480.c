/*
 * FUN_00404480 (95 B) — GetServerInfo-style dispatcher. __stdcall (RET 0xc).
 * Validates arg count, then queries the game-list object status.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f8cb0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void FUN_00404480(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp+0xc], 0x1
        jz      L1
        or      eax, 0xffffffff
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
        or      eax, 0xffffffff
        pop     ebp
        ret     0xc
L2:
        call    FUN_006f5ed0
        mov     eax, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    edx
        call    FUN_006f8cb0
        test    al, al
        jnz     L4
        call    FUN_006f5ee0
        or      eax, 0xffffffff
        pop     ebp
        ret     0xc
L4:
        call    FUN_006f5ee0
        xor     eax, eax
        pop     ebp
        ret     0xc
    }
}
