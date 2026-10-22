/*
 * FUN_004d3f50 (100 B) -- MLR network/server subsystem update helper.
 *
 * Walks the XOR-obfuscated global pointer chain, and if the child object at
 * [obj+0x50]+0x10 is null, logs via FUN_006f4950 and (when the state is 5)
 * calls FUN_004d8f00 with a double time value from FUN_00707e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int a);
extern double __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_004d8f00(int a, int b);
extern void __cdecl FUN_006f49a0(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007dc130;   /* DAT_007dc130 */
extern int g_007dc574;   /* DAT_007dc574 */

__declspec(naked) void __stdcall FUN_004d3f50(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        sub     esp, 0x8
        xor     ecx, edx
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        xor     esi, 0x85739531
        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jnz     L3FAF
        mov     eax, dword ptr [g_007dc130]
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     dword ptr [ecx + 0x14], 0x5
        jnz     L3FAA
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [g_007dc574]
        push    edx
        push    eax
        call    FUN_004d8f00
L3FAA:
        call    FUN_006f49a0
L3FAF:
        pop     esi
        add     esp, 0x8
        ret
    }
}
