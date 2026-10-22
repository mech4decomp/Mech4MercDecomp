/*
 * FUN_0073AFD0 (37 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aae98;
extern int g_008aae94;
extern int g_008aae90;

__declspec(naked) void FUN_0073AFD0(void)
{
    __asm {
        mov    edx, dword ptr [g_008aae98]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete   al
        cmp    eax, ecx
        mov    dword ptr [g_008aae98], eax
        je     L_73aff4
        mov    dword ptr [g_008aae94], ecx
        mov    dword ptr [g_008aae90], ecx
L_73aff4:
        ret
    }
}
