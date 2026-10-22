/*
 * FUN_1001d620 (95 B) — __stdcall, RET 0x10.
 * Dispatches to FUN_1001d740 (param_2 != NULL) or FUN_1001d680 (param_2 == NULL).
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001d740(void);
extern int __cdecl FUN_1001d680(void);

__declspec(naked) void __stdcall FUN_1001d620(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 0x4], 0x0
        jz      is_null
        mov     edx, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x4]
        push    ecx
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        push    eax
        call    FUN_1001d740
        mov     esi, eax
        test    esi, esi
        jl      ret_esi
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x10
    is_null:
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax + 0x4]
        push    edx
        push    eax
        call    FUN_1001d680
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], eax
    ret_esi:
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x10
    }
}
