/*
 * FUN_006ad1f0 (83 B). Calls FUN_0041eb40(&local, 1), then increments a
 * per-index counter in a table reached via an obfuscated global pointer
 * (DAT_007dab44 ^ DAT_007dab40), and increments a total counter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void *a, int b);
extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */

__declspec(naked) void FUN_006ad1f0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    0x1
        lea     eax, [esp + 0x4]
        push    eax
        mov     dword ptr [esp + 0x8], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esp + 0x18]
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
