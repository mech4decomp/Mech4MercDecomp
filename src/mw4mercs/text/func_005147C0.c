/*
 * FUN_005147C0 (52 B) — __stdcall(3). Walks a pointer chain
 * (global -> [eax] -> xor global -> [..+0x14] -> xor const ->
 * [..+0x1814]) and zeroes 0x12 bytes spaced 0xc0c apart, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

__declspec(naked) int FUN_005147C0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     ecx, 0x12
L_5147e1:
        mov     byte ptr [eax], 0
        add     eax, 0xc0c
        dec     ecx
        jne     L_5147e1
        mov     eax, 1
        ret     0xc
    }
}
