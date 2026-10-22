/*
 * FUN_00741280 (93 B) — Wrapper around a vtable method (slot +0x90) with
 * error logging on failure.
 *
 * __stdcall, 6 stack params, RET 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_00741280(void)
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
        call    dword ptr [ecx + 0x90]
        mov     esi, eax
        test    esi, esi
        jge     loc_7412d4
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
        push    0x7a9120
        call    FUN_006fabf0
        add     esp, 0x20
        test    eax, eax
        jz      loc_7412d4
        int     3
loc_7412d4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x18
    }
}
