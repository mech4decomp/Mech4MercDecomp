/*
 * FUN_1003eb9c (189 B) - __cdecl.  Object-registration dispatcher: walks a
 * slot table (base ebx+8, stride 12, index ebx+0xc), invoking per-slot
 * handlers (SEH-guarded via FUN_1003782C/FUN_1003786E/FUN_10037902).
 * Preceded by 8 bytes of ASCII data ("VC20XC00") at 0x1003eb94.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003782C(void);   /* rel32 call */
extern void __cdecl FUN_1003786E(void);   /* rel32 call */
extern void __stdcall FUN_10037902(void); /* rel32 call, RET 0x4 */

__declspec(naked) void FUN_1003eb9c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        push    esi
        push    edi
        push    ebp
        cld
        mov     ebx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 8]
        test    dword ptr [eax + 4], 6
        jne     L_ec3c
        mov     dword ptr [ebp - 8], eax
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp - 4], eax
        lea     eax, [ebp - 8]
        mov     dword ptr [ebx - 4], eax
        mov     esi, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [ebx + 8]
        cmp     esi, -1
        je      L_ec35
L_ebcf:
        lea     ecx, [esi + esi*2]
        cmp     dword ptr [edi + ecx*4 + 4], 0
        je      L_ec23
        push    esi
        push    ebp
        lea     ebp, [ebx + 0x10]
        call    dword ptr [edi + ecx*4 + 4]
        pop     ebp
        pop     esi
        mov     ebx, dword ptr [ebp + 0xc]
        or      eax, eax
        je      L_ec23
        js      L_ec2e
        mov     edi, dword ptr [ebx + 8]
        push    ebx
        call    FUN_1003782C
        add     esp, 4
        lea     ebp, [ebx + 0x10]
        push    esi
        push    ebx
        call    FUN_1003786E
        add     esp, 8
        lea     ecx, [esi + esi*2]
        push    1
        mov     eax, dword ptr [edi + ecx*4 + 8]
        call    FUN_10037902
        mov     eax, dword ptr [edi + ecx*4]
        mov     dword ptr [ebx + 0xc], eax
        call    dword ptr [edi + ecx*4 + 8]
L_ec23:
        mov     edi, dword ptr [ebx + 8]
        lea     ecx, [esi + esi*2]
        mov     esi, dword ptr [edi + ecx*4]
        __emit 0xEB   /* jmp L_ebcf - MSVC6 miscomputes backward rel8 (off-by-5) due to call relocs between branch and target */
        __emit 0xA1
L_ec2e:
        mov     eax, 0
        jmp     L_ec51
L_ec35:
        mov     eax, 1
        jmp     L_ec51
L_ec3c:
        push    ebp
        lea     ebp, [ebx + 0x10]
        push    -1
        push    ebx
        call    FUN_1003786E
        add     esp, 8
        pop     ebp
        mov     eax, 1
L_ec51:
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
