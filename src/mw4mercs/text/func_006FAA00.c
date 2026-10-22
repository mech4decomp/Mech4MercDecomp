/*
 * FUN_006FAA00 (43 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_00849ec0;
extern int g_00849ec4;
extern void __cdecl FUN_006F4230(void);

__declspec(naked) void FUN_006FAA00(void)
{
    __asm {
        mov    eax, dword ptr [g_00849ec0]
        test   eax, eax
        je     L_6faa20
L_6faa09:
        mov    ecx, dword ptr [eax]
        push   eax
        mov    dword ptr [g_00849ec0], ecx
        call   FUN_006F4230
        mov    eax, dword ptr [g_00849ec0]
        test   eax, eax
        jne    L_6faa09
L_6faa20:
        mov    dword ptr [g_00849ec4], 0
        ret
    }
}
