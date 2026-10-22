/*
 * FUN_00697B20 (61 B) — __thiscall (ECX = this, one stack param, RET 0x4).
 *
 * If this->[0x88] is -1 or param is null, returns 0. Otherwise indexes
 * a global table by this->[0x88], calls the IAT function at 0x76B2E0
 * (strncmp-style, 4 bytes) and returns a boolean-ish result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_table_7b5cf0[];
extern int (__cdecl *g_iat_76b2e0)(void);

__declspec(naked) int __stdcall FUN_00697b20(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x88]
        cmp     eax, -0x1
        jnz     l_cont1
        xor     al, al
        ret     0x4
    l_cont1:
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jnz     l_cont2
        xor     al, al
        ret     0x4
    l_cont2:
        mov     eax, dword ptr [eax*0x4 + g_table_7b5cf0]
        mov     ecx, dword ptr [ecx + 0x18]
        push    0x4
        push    eax
        push    ecx
        call    dword ptr [g_iat_76b2e0]
        add     esp, 0xc
        neg     eax
        sbb     al, al
        inc     al
        ret     0x4
    }
}
