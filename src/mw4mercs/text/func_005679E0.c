/*
 * FUN_005679E0 (extent 0x5679E0-0x567A49, 105 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00805918;
extern int  g_00805908;
extern int  g_0080592c;
extern void __cdecl FUN_0064DB40(void);

__declspec(naked) void FUN_005679E0(void)
{
    __asm {
        mov    eax, dword ptr [g_00805918]
        movsx  ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call   FUN_0064DB40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx  edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call   FUN_0064DB40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx  ecx, byte ptr [eax]
        sub    edx, 4
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret
    }
}
