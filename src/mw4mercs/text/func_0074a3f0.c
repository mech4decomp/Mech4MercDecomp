/*
 * FUN_0074A3F0 (91 B) — Wrapper around a vtable method (slot +0xb0) with
 * error logging on failure; selects "enable"/"disable" string by param_3.
 *
 * __stdcall, 3 stack params, RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_0074A3F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, ebx
        and     edx, 0xff
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0xb0]
        mov     esi, eax
        test    esi, esi
        jge     loc_74a442
        test    bl, bl
        mov     eax, 0x7aa7a0
        jnz     loc_74a426
        mov     eax, 0x7aa798
loc_74a426:
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa76c
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      loc_74a442
        int     3
loc_74a442:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
