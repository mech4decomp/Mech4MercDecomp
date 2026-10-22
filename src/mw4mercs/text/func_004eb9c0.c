/*
 * FUN_004eb9c0 (55 B) — allocates a 0x14-byte object; on success constructs
 * an "Adept::SpatializedChannel" (0x22b) via FUN_004151c0 and stores the
 * result in g_007dc7cc; on failure stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_004151c0(int, char *, int);

extern int g_007dc7d8;
extern int g_007dc7cc;

__declspec(naked) void FUN_004eb9c0(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov     ecx, dword ptr [g_007dc7d8]
        push    ecx
        push    0x7746cc
        push    0x22b
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007dc7cc], eax
        ret
L_fail:
        mov     dword ptr [g_007dc7cc], 0
        ret
    }
}
