/*
 * FUN_0049aa70 (50 B) — MLR PointLight destructor (__thiscall). Sets vtable
 * ptr, releases a resource via virtual call through DAT_007da968, then calls
 * base destructor FUN_00494140.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da968;
extern void __cdecl FUN_00494140(void);

__declspec(naked) void FUN_0049aa70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xa0]
        test    eax, eax
        mov     dword ptr [esi], 0x77020c
        jz      short loc_49aa99
        mov     ecx, dword ptr [g_007da968]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0xa0], 0x0
loc_49aa99:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
