/*
 * FUN_10041473 (53 B) - __cdecl. Decrements a counter; if negative calls
 * FUN_1003a70a, else writes a byte and increments. Sets *param_3.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003a70a(void);   /* rel32 call */

__declspec(naked) void FUN_10041473(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        dec     dword ptr [ecx + 4]
        js      L_8c
        mov     edx, dword ptr [ecx]
        mov     al, byte ptr [ebp + 8]
        mov     byte ptr [edx], al
        inc     dword ptr [ecx]
        movzx   eax, al
        jmp     L_97
L_8c:
        push    ecx
        push    dword ptr [ebp + 8]
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
L_97:
        cmp     eax, -1
        mov     eax, dword ptr [ebp + 0x10]
        jnz     L_a4
        or      dword ptr [eax], 0xffffffff
        pop     ebp
        ret
L_a4:
        inc     dword ptr [eax]
        pop     ebp
        ret
    }
}
