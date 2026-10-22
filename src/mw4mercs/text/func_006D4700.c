/*
 * FUN_006D4700 (extent 0x6D4700-0x6D476F, 111 B) - .text data block.
 * __thiscall-style (this in ecx), ret 4.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084E0(void);

__declspec(naked) void __stdcall FUN_006D4700(void)
{
    __asm {
        push   ebx
        mov    bl, byte ptr [esp + 8]
        test   bl, 2
        push   esi
        mov    esi, ecx
        je     L_4b
        mov    eax, dword ptr [esi - 4]
        push   edi
        lea    edi, [esi - 4]
        lea    esi, [esi + eax*8]
        dec    eax
        js     L_35
        push   ebp
        lea    ebp, [eax + 1]
    L_1e:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test   eax, eax
        je     L_31
        push   eax
        call   FUN_004084E0
        add    esp, 4
    L_31:
        dec    ebp
        jne    L_1e
        pop    ebp
    L_35:
        test   bl, 1
        je     L_43
        push   edi
        call   FUN_004084E0
        add    esp, 4
    L_43:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    L_4b:
        mov    eax, dword ptr [esi]
        test   eax, eax
        je     L_5a
        push   eax
        call   FUN_004084E0
        add    esp, 4
    L_5a:
        test   bl, 1
        je     L_68
        push   esi
        call   FUN_004084E0
        add    esp, 4
    L_68:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
    }
}
