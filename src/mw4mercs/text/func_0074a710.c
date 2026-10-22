/*
 * FUN_0074a710 (89 B) — __stdcall, RET 0x18 (6 params).
 *
 * Dispatches a virtual call (vtable+0xac) with 6 args; if the result is
 * negative and not the sentinel 0x887601c2, formats an error string via
 * FUN_006fabf0 and asserts (INT3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_0074a710(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x1c]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x18]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edi
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0xac]
        mov     esi, eax
        test    esi, esi
        jge     done
        cmp     esi, 0x887601c2
        jz      done
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa8f0
        call    FUN_006fabf0
        add     esp, 0x14
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
