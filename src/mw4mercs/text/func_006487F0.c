/*
 * FUN_006487F0 (extent 0x6487F0-0x648865, 117 B) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern int  g_008058d0;
extern int  g_00792900;
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_006487F0(void)
{
    __asm {
        push   esi
        mov    esi, dword ptr [g_008058d0]
        mov    eax, dword ptr [esi + 4]
        push   edi
        xor    edi, edi
        cmp    eax, edi
        je     L_0a
        push   eax
        call   FUN_006F4230
        mov    dword ptr [esi + 4], edi
    L_0a:
        mov    eax, dword ptr [esi + 0x10]
        cmp    eax, edi
        je     L_1d
        push   eax
        call   FUN_004084E0
        add    esp, 4
        mov    dword ptr [esi + 0x10], edi
    L_1d:
        mov    esi, dword ptr [g_008058d0]
        cmp    esi, edi
        je     L_5c
        mov    eax, dword ptr [esi + 4]
        cmp    eax, edi
        mov    dword ptr [esi], offset g_00792900
        je     L_3d
        push   eax
        call   FUN_006F4230
        mov    dword ptr [esi + 4], edi
    L_3d:
        mov    eax, dword ptr [esi + 0x10]
        cmp    eax, edi
        je     L_50
        push   eax
        call   FUN_004084E0
        add    esp, 4
        mov    dword ptr [esi + 0x10], edi
    L_50:
        push   esi
        mov    dword ptr [esi + 4], edi
        call   FUN_004084E0
        add    esp, 4
    L_5c:
        mov    dword ptr [g_008058d0], edi
        pop    edi
        pop    esi
        ret
    }
}
