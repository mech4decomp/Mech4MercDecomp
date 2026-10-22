/*
 * FUN_0074a5e0 (60 B) — Virtual EnumTextureFormats-style wrapper.
 *
 * Calls vtable method at offset 0x10 on param_1 with param_2, param_3.
 * If the result is negative, formats an error message via
 * FUN_006fabf0 and asserts (INT3) on failure.
 *
 * __stdcall, RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);
extern const char g_str_7aa83c[];   /* 0x007AA83C */

__declspec(naked) int __stdcall FUN_0074a5e0(void *param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        mov     edx, dword ptr [ebp + 0xC]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jge     label
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7aa83c
        call    FUN_006fabf0
        add     esp, 0xC
        test    eax, eax
        jz      label
        int     3
label:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0xC
    }
}
