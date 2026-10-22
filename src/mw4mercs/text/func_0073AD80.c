/*
 * FUN_0073AD80 (81 B) — .text data block containing 4 small predicates:
 *   [0x73AD80] returns (g_8aae6c == 1)
 *   [0x73AD90] returns (g_8aae6c == 2)
 *   [0x73ADA0] returns (g_8aae6c == 3)
 *   [0x73ADB0] returns (g_8aae70 == 0) and zeroes g_8aae68 when so
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aae6c;
extern int g_8aae70;
extern int g_8aae68;

__declspec(naked) void FUN_0073AD80(void)
{
    __asm {
        mov     ecx, dword ptr [g_8aae6c]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aae6c]
        xor     eax, eax
        cmp     ecx, 2
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aae6c]
        xor     eax, eax
        cmp     ecx, 3
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aae70]
        xor     eax, eax
        test    ecx, ecx
        sete    al
        test    eax, eax
        mov     dword ptr [g_8aae70], eax
        je      loc_73add0
        mov     dword ptr [g_8aae68], 0
loc_73add0:
        ret
    }
}
