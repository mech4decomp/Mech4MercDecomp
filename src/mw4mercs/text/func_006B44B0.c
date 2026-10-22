/*
 * FUN_006B44B0 (47 B true extent; 240 B slice incl. 4 adjacent fns) —
 * in-.text data block function (block 0x6B3D55). Allocates a 0xc-byte
 * object via FUN_004084c0 and sets its vtable to 0x79a004.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084c0(void);

extern int  g_007b8810;   /* DAT_007b8810 */
extern char g_79a004[];   /* vtable @ 0x79a004 */

__declspec(naked) void FUN_006B44B0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov     esi, ecx
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        je      L44DB
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], offset g_79a004
        pop     esi
        ret
L44DB:
        xor     eax, eax
        pop     esi
        ret
    }
}
