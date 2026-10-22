/*
 * FUN_00755620 (88 B) — __stdcall, RET 0x14 (5 params).
 *
 * Dispatches a virtual call (vtable+0x28) with 5 args; if the result is
 * negative, formats an error string via FUN_006fabf0 and asserts (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00752460(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_00755620(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x28]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        call    FUN_00752460
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae374
        call    FUN_006fabf0
        add     esp, 0x1c
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
