/*
 * FUN_00740f00 (90 B) — __stdcall, RET 0x18 (6 params).
 *
 * Dispatches a virtual call (vtable+0x14) with 6 args; if the result is
 * negative, formats an error string via FUN_006fabf0 and asserts (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_00740f00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x1c]
        push    edi
        push    ebx
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a8eec
        call    FUN_006fabf0
        add     esp, 0x20
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
    }
}
