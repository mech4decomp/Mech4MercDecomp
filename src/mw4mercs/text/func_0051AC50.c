/*
 * FUN_0051AC50 (62 B) — __stdcall (RET 0xc, 3 stack params).
 *
 * In-.text data block at 0x51AA7D (533 B) contains FOUR functions; this is
 * the first (0x51AC50-0x51AC8D). Reads an obfuscated table entry (base
 * 0x7dab44/0x7dab40, XOR key 0x85739531) at +0x44, and if the +0x24
 * sub-pointer is non-null returns the dword at [sub+0x1c], else 0.
 * NOTE: 0x51AC90, 0x51ACD0, 0x51AD10 are three more functions in the same
 * block (transcribed separately).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

__declspec(naked) void __cdecl FUN_0051AC50(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L51ac8b
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        test    esi, esi
        pop     esi
        je      L51ac8b
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx + 0x1c]
L51ac8b:
        ret     0xc
    }
}
