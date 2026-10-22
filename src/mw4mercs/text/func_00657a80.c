/*
 * FUN_00657a80 (79 B) — __thiscall destructor: frees an array of
 * pointers at this+0xc (count = (this+4)/0x20) via FUN_004084e0,
 * then frees the array itself and nulls this+0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084e0(void);

__declspec(naked) void FUN_00657a80(void)
{
    __asm {
        push    ebx
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [edi+0x4]
        mov     ebx, dword ptr [edi+0xc]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 5
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    ebx, ebx
        jz      L_acc
        test    edx, edx
        jle     L_abc
        push    ebp
        push    esi
        mov     esi, ebx
        mov     ebp, edx
    L_aa9:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        add     esi, 4
        dec     ebp
        jnz     L_aa9
        pop     esi
        pop     ebp
    L_abc:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi+0xc], 0
    L_acc:
        pop     edi
        pop     ebx
        ret
    }
}
