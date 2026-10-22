/*
 * FUN_007411C0 (90 B) — Wrapper around a vtable method (slot +0x28) with
 * error logging on failure.
 *
 * __stdcall, 6 stack params, RET 0x18.
 *
 * Calls vtable method [ECX+0x28] with 6 args; if result < 0, formats an
 * error string via FUN_006fabf0 and asserts (INT3) on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_007411C0(void)
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
        call    dword ptr [ecx + 0x28]
        mov     esi, eax
        test    esi, esi
        jge     loc_741211
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
        push    0x7a90a8
        call    FUN_006fabf0
        add     esp, 0x20
        test    eax, eax
        jz      loc_741211
        int     3
loc_741211:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
    }
}
