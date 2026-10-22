/*
 * FUN_0075b090 (59 B) — Virtual GetState-style wrapper.
 *
 * Calls vtable method at offset 0x18 on param_1 with param_2.
 * If the result is negative, formats an error message via
 * FUN_006fabf0 and asserts (INT3) on failure.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);
extern const char g_str_7af3b4[];   /* 0x007AF3B4 */

__declspec(naked) int __stdcall FUN_0075b090(void *param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0x18]
        mov     esi, eax
        test    esi, esi
        jge     label
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7af3b4
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      label
        int     3
label:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     8
    }
}
