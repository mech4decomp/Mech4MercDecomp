/*
 * FUN_10033fd0 (137 B) - __fastcall. Calls FUN_10033ad0, queries a vtable
 * method, builds a flags word, dispatches through vtables, calls FUN_10033ae0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033ad0(void);   /* rel32 call */
extern void __cdecl FUN_10033ae0(void);   /* rel32 call */

__declspec(naked) void __fastcall func_10033fd0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_10033ad0
        lea     edi, [esi + 0x18]
        mov     ebx, eax
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x10]
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, dword ptr [esi + 0x20]
        cmp     eax, 0x2
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0xc], ecx
        mov     ecx, 0x1
        jnz     L_09
        mov     ecx, 0x81
        jmp     L_12
    L_09:
        test    eax, eax
        jnz     L_12
        mov     ecx, 0x41
    L_12:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jnz     L_1c
        or      ecx, 0x8
    L_1c:
        mov     eax, dword ptr [esi + 0x2c]
        mov     edx, dword ptr [esi + 0x1c]
        mov     ebx, dword ptr [edx]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x28]
        push    ecx
        push    edi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esi + 0x1c]
        push    eax
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    dword ptr [ebx]
        mov     edx, eax
        cmp     edx, 0x15800e
        jnz     L_49
        xor     edx, edx
    L_49:
        mov     ecx, esi
        call    FUN_10033ae0
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        add     esp, 0x8
        ret
    }
}
