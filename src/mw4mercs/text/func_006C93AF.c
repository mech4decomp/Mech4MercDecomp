/*
 * FUN_006C93AF (122 B) — __stdcall RET 0x18 (6 params). Nested loop that
 * calls FUN_006C9430 per row/column, computing scaled indices via
 * lea [reg*4] forms.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006C9430(void);

__declspec(naked) void FUN_006C93AF(void)
{
    __asm {
        nop
        push    ecx
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        lea     edi, [eax*4]
        mov     eax, dword ptr [esp + 0x2c]
        lea     edx, [esi*4]
        mov     ebx, edi
        sub     ebx, edx
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        push    edx
        mov     dword ptr [esp + 0x28], edi
        push    ebp
        mov     dword ptr [esp + 0x1c], ecx
        sub     edi, esi
        call    FUN_006C9430
        mov     eax, esi
        dec     esi
        test    eax, eax
        je      L6c9421
    L6c93f4:
        inc     esi
    L6c93f5:
        test    edi, edi
        jl      L6c9401
        add     ebp, dword ptr [esp + 0x28]
        add     edi, ebx
        jmp     L6c9405
    L6c9401:
        add     edi, dword ptr [esp + 0x20]
    L6c9405:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        push    eax
        push    ebp
        mov     dword ptr [esp + 0x28], eax
        call    FUN_006C9430
        dec     esi
        jne     L6c93f5
    L6c9421:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x18
    }
}
