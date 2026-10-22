/*
 * FUN_006ac950 (100 B) — __cdecl, two stack params. Calls
 * FUN_0041eb40(&local,1), a virtual method at vtable+0x10c, then
 * increments a counter in an obfuscated global table indexed by the
 * second stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __stdcall FUN_0041eb40(void *a, int b);

__declspec(naked) void FUN_006ac950(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    0x1
        lea     eax, [esp + 0x4]
        push    eax
        mov     dword ptr [esp + 0x8], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0x8]
        __emit 0x8B /* mov eax,[esp]: MSVC6 emits compact 8B 04 24, ref needs 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x10c]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp + 0x1c]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 0x8], edx
        inc     dword ptr [eax + 0xc00]
        pop     ecx
        ret
    }
}
