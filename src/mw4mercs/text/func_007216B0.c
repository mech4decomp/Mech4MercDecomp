/*
 * FUN_007216B0 (214 B) — in-.text data block function (block 0x7216B0).
 * Uses several IAT callbacks (0x76b208, 0x76b16c, 0x76b4f8, 0x76b0d4,
 * 0x76b0f4) and a function pointer (0x76b0ec).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__cdecl *g_0076b208)(void);   /* IAT @ 0x76b208 */
extern void (__cdecl *g_0076b16c)(void);   /* IAT @ 0x76b16c */
extern void (__cdecl *g_0076b4f8)(void);   /* IAT @ 0x76b4f8 */
extern void (__cdecl *g_0076b0d4)(void);   /* IAT @ 0x76b0d4 */
extern void (__cdecl *g_0076b0ec)(void);   /* fn ptr @ 0x76b0ec */
extern void (__cdecl *g_0076b0f4)(void);   /* IAT @ 0x76b0f4 */

extern char g_87dc04[];   /* string @ 0x87dc04 */

__declspec(naked) void FUN_007216B0(void)
{
    __asm {
        sub     esp, 0x164
        xor     ecx, ecx
        xor     eax, eax
        mov     dword ptr [esp + 4], ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x24], 0x44
        mov     ecx, 0x10
        lea     edi, [esp + 0x28]
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 8], 0xc
        rep stosd
        call    dword ptr [g_0076b208]
        push    0
        push    0
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        mov     edi, eax
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 1
        call    dword ptr [g_0076b16c]
        mov     esi, eax
        push    esi
        push    edi
        lea     eax, [esp + 0x70]
        push    offset g_87dc04
        push    eax
        call    dword ptr [g_0076b4f8]
        add     esp, 0x10
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        push    0
        push    0
        push    0
        push    1
        push    0
        push    0
        lea     eax, [esp + 0x88]
        push    eax
        push    0
        call    dword ptr [g_0076b0d4]
        test    eax, eax
        mov     edi, dword ptr [g_0076b0ec]
        je      L177A
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    edi
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    edi
        push    -1
        push    esi
        call    dword ptr [g_0076b0f4]
L177A:
        push    esi
        call    edi
        pop     edi
        pop     esi
        add     esp, 0x164
        ret
    }
}
