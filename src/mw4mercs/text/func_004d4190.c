/*
 * FUN_004d4190 (124 B) -- MLR network/server subsystem helper. __fastcall
 * (ECX = this), RET 0x4.
 *
 * Copies a 0xc-dword template from DAT_007b9460 into [this+0x1c], invokes
 * two virtual methods (+0x40, +0x24), conditionally calls FUN_006d13c0, then
 * FUN_004d8fb0 / FUN_00717d80 and a final virtual call on [this+0x4c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int a);
extern void __cdecl FUN_006d13c0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004d8fb0(void);
extern void __cdecl FUN_00717d80(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_00840048;   /* DAT_00840048 */
extern int g_00840008;   /* DAT_00840008 */
extern int g_007dc574;   /* DAT_007dc574 */
extern int g_7b9460[];   /* DAT_007b9460 (0xc dword template) */

__declspec(naked) void __fastcall FUN_004d4190(int *param_1)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        mov     ebx, ecx
        push    esi
        push    edi
        lea     edi, [ebx + 0x1c]
        mov     ecx, 0xc
        mov     esi, offset g_7b9460
        rep movsd
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x40]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [g_00840048]
        test    eax, eax
        jz      L41EA
        mov     ecx, dword ptr [g_00840008]
        push    ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [g_00840048]
        call    FUN_006d13c0
        call    FUN_006f49a0
L41EA:
        mov     ecx, dword ptr [g_007dc574]
        call    FUN_004d8fb0
        call    FUN_00717d80
        mov     ecx, dword ptr [ebx + 0x4c]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x2
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
