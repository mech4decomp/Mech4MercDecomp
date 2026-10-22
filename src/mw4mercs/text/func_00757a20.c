/*
 * FUN_00757a20 (110 B) - __stdcall wrapper (RET 0x20, 8 params).
 *
 * Calls a virtual method at [*param_1 + 0x2c] with 8 args. If the result
 * is negative, formats an error via FUN_006fabf0 (with FUN_0073e160
 * helper) and INT3s on failure. Returns the result.
 *
 * __stdcall, RET 0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) int __stdcall FUN_00757a20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [ebp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x24]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jge     label_757a85
        mov     eax, dword ptr [ebp + 0x20]
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     edx, dword ptr [ebp + 0x18]
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae544
        call    FUN_006fabf0
        add     esp, 0x2c
        test    eax, eax
        jz      label_757a85
        int     3
label_757a85:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x20
    }
}
