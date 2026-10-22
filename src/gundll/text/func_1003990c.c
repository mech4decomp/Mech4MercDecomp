/*
 * FUN_1003990c (86 B) - __stdcall.
 * __try/__finally SEH frame (handler 0x1003eb9c, scope 0x1004b690).
 * If FUN_10038512()->[0x60] is nonzero, calls it. Returns 1 via the
 * finally epilogue (jmp 0x1003efb5).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038512(void);   /* rel32 call */
extern void __cdecl FUN_1003efb5(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_1003990c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004b690
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     esi, esi
        mov     dword ptr [ebp - 0x4], esi
        call    FUN_10038512
        cmp     dword ptr [eax + 0x60], esi
        jz      L_3995f
        mov     dword ptr [ebp - 0x4], 1
        call    FUN_10038512
        call    dword ptr [eax + 0x60]
        mov     dword ptr [ebp - 0x4], esi
        jmp     L_3995f
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        and     dword ptr [ebp - 0x4], 0
    L_3995f:
        or      dword ptr [ebp - 0x4], -1
        call    L_after
    L_after:
        jmp     FUN_1003efb5
    }
}
