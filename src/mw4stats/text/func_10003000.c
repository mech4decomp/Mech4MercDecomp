/*
 * MW4Stats.dll - FUN_10003000 (0x10003000, 104 B, __fastcall)
 * Destructor: SEH prologue; frees BSTR fields +0x10/+0x14 via SysFreeString
 * (IAT 0x10021158), calls FUN_10003070, destroys sub-object at +0x20.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10003070(void);
extern void __cdecl FUN_10001190(void);
extern void *g_10021158; /* IAT: SysFreeString */

__declspec(naked) void FUN_10003000(void)
{
    __asm {
        push -0x1
        push 0x1001f3ab
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp+0x8], esi
        mov eax, dword ptr [esi+0x10]
        test eax, eax
        mov edi, dword ptr [g_10021158]
        mov dword ptr [esp+0x14], 0x0
        jz short L1
        push eax
        call edi
L1:
        mov eax, dword ptr [esi+0x14]
        test eax, eax
        jz short L2
        push eax
        call edi
L2:
        mov ecx, esi
        call FUN_10003070
        lea ecx, [esi+0x20]
        mov dword ptr [esp+0x14], 0xffffffff
        call FUN_10001190
        mov ecx, dword ptr [esp+0xc]
        pop edi
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
