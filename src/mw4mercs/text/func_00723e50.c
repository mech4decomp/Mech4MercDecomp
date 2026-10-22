/*
 * FUN_00723e50 (104 B) — Global pointer cleanup helper.
 *
 * Frees the global pointers 0x0087e690/0x0087e698/0x0087e69c via
 * FUN_00740db0 (and FUN_0074a2c0 when 0x0087e698 equals 0x0087e694),
 * then zeroes all four globals. Returns void.
 *
 * __cdecl (RET), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0074a2c0(void *p);
extern void __stdcall FUN_00740db0(void *p);
extern int g_0087e690;
extern int g_0087e698;
extern int g_0087e694;
extern int g_0087e69c;

__declspec(naked) void __cdecl FUN_00723e50(void)
{
    __asm {
        mov     ecx, dword ptr [g_0087e690]
        push    esi
        xor     esi, esi
        cmp     ecx, esi
        jz      label_723eb6
        mov     eax, dword ptr [g_0087e698]
        cmp     eax, esi
        jz      label_723e8b
        cmp     eax, dword ptr [g_0087e694]
        jnz     label_723e79
        push    eax
        call    FUN_0074a2c0
        mov     eax, dword ptr [g_0087e698]
label_723e79:
        push    eax
        call    FUN_00740db0
        mov     ecx, dword ptr [g_0087e690]
        mov     dword ptr [g_0087e698], esi
label_723e8b:
        cmp     ecx, esi
        jz      label_723e9b
        push    ecx
        call    FUN_00740db0
        mov     dword ptr [g_0087e690], esi
label_723e9b:
        mov     eax, dword ptr [g_0087e69c]
        cmp     eax, esi
        jz      label_723eb0
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_0087e69c], esi
label_723eb0:
        mov     dword ptr [g_0087e694], esi
label_723eb6:
        pop     esi
        ret
    }
}
