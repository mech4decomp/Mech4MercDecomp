/*
 * FUN_004045c0 (84 B) — GetZMStatus-style dispatcher. __stdcall (RET 0xc).
 * Validates arg count, then dispatches on a status sub-command (1/2/3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004ceff0(void);
extern void __cdecl FUN_004cefe0(void);
extern void __cdecl FUN_004cefd0(void);

__declspec(naked) void FUN_004045c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp+0xc]
        cmp     eax, 0x1
        jz      L1
        push    eax
        push    0x76babc
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L2
        int     3
L2:
        xor     eax, eax
        pop     ebp
        ret     0xc
L1:
        mov     eax, dword ptr [ebp+0x10]
        mov     eax, dword ptr [eax]
        dec     eax
        jz      L5
        dec     eax
        jz      L4
        dec     eax
        jz      L3
        or      eax, 0xffffffff
        pop     ebp
        ret     0xc
L3:
        call    FUN_004ceff0
        pop     ebp
        ret     0xc
L4:
        call    FUN_004cefe0
        pop     ebp
        ret     0xc
L5:
        call    FUN_004cefd0
        pop     ebp
        ret     0xc
    }
}
