/*
 * FUN_1003b3ac (147 B) - __cdecl.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10041f80(void);   /* rel32 call */
extern void __cdecl FUN_10041f09(void);   /* rel32 call */
extern void __cdecl FUN_1003b305(void);   /* rel32 call */
extern void __cdecl FUN_1003b1ee(void);   /* rel32 call */

__declspec(naked) void FUN_1003b3ac(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        push    ebx
        push    esi
        lea     eax, [ebp - 0x28]
        push    edi
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        mov     eax, dword ptr [ebp + 8]
        push    ecx
        push    ecx
        fld     qword ptr [eax]
        fstp    qword ptr [esp]
        call    FUN_10041f80
        mov     eax, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp + 0x10]
        lea     esi, [eax - 1]
        xor     eax, eax
        cmp     dword ptr [ebp - 0x10], 0x2d
        setz    al
        add     eax, dword ptr [ebp + 0xc]
        mov     edi, eax
        lea     eax, [ebp - 0x10]
        push    eax
        push    ebx
        push    edi
        call    FUN_10041f09
        mov     eax, dword ptr [ebp - 0xc]
        add     esp, 0x1c
        dec     eax
        cmp     esi, eax
        setl    cl
        cmp     eax, -4
        jl      L_25
        cmp     eax, ebx
        jge     L_25
        test    cl, cl
        jz      L_11
L_07:
        mov     al, byte ptr [edi]
        inc     edi
        test    al, al
        jnz     L_07
        and     byte ptr [edi - 2], al
L_11:
        lea     eax, [ebp - 0x10]
        push    1
        push    eax
        push    ebx
        push    dword ptr [ebp + 0xc]
        call    FUN_1003b305
        add     esp, 0x10
        jmp     L_3a
L_25:
        lea     eax, [ebp - 0x10]
        push    1
        push    eax
        push    dword ptr [ebp + 0x14]
        push    ebx
        push    dword ptr [ebp + 0xc]
        call    FUN_1003b1ee
        add     esp, 0x14
L_3a:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
