/*
 * FUN_0073AF50 (37 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aae90;
extern int g_008aae94;
extern int g_008aae98;

__declspec(naked) void FUN_0073AF50(void)
{
    __asm {
        mov    edx, dword ptr [g_008aae90]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete   al
        cmp    eax, ecx
        mov    dword ptr [g_008aae90], eax
        je     L_73af74
        mov    dword ptr [g_008aae94], ecx
        mov    dword ptr [g_008aae98], ecx
L_73af74:
        ret
    }
}
