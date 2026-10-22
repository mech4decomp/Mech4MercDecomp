/*
 * FUN_004d4140 (71 B) -- MLR network/server subsystem helper. RET 0x4.
 *
 * Walks the XOR-obfuscated global pointer chain and invokes two virtual
 * methods (+0x48 with arg 1, +0x44), then calls FUN_0048fba0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048fba0(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007da848;   /* DAT_007da848 */

__declspec(naked) void __stdcall FUN_004d4140(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x44]
        mov     ecx, dword ptr [g_007da848]
        call    FUN_0048fba0
        ret     0x4
    }
}
