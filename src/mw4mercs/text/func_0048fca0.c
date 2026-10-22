/*
 * FUN_0048fca0 (94 B) — MLR image-instance constructor (__thiscall, RET 0x4).
 * Initializes vtable, float fields, and copies two 0x30-byte blocks from a
 * template at 0x7b9460.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern int g_007b9460;
extern int g_0076ff30;

__declspec(naked) void FUN_0048fca0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     eax, 0xbf800000
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x10], eax
        xor     eax, eax
        mov     dword ptr [ebx + 0x7c], eax
        mov     dword ptr [ebx], offset g_0076ff30
        mov     dword ptr [ebx + 0x8], 0x3f800000
        lea     edi, [ebx + 0x18]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        rep movsd
        lea     edi, [ebx + 0x48]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        rep movsd
        pop     edi
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx + 0x10], eax
        mov     dword ptr [ebx + 0x14], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
