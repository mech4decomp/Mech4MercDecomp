/* FUN_10004150 - __thiscall, 126 bytes
 * EnterCriticalSection(this); walk linked list at +0x24 (next at +0x9c),
 * compare names via wcscmp (IAT 0x100210e0); return value at +0x98. */

extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */
extern void *g_100210e0; /* IAT: wcscmp */
extern int __cdecl FUN_10002fc0(void);
extern void *__cdecl FUN_10002fa0(void);

__declspec(naked) void FUN_10004150(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov  edi, ecx
        push edi
        mov  dword ptr [esp + 0x14], 0x0
        call dword ptr [g_10021048]
        mov  esi, dword ptr [edi + 0x24]
        test esi, esi
        jz   L_bb
        mov  ebx, dword ptr [esp + 0x18]
        mov  ebp, dword ptr [g_100210e0]
L_77:
        mov  ecx, esi
        call FUN_10002fc0
        test eax, eax
        jbe  L_94
        mov  ecx, esi
        call FUN_10002fa0
        push eax
        push ebx
        call ebp
        add  esp, 0x8
        test eax, eax
        jz   L_b1
L_94:
        mov  esi, dword ptr [esi + 0x9c]
        test esi, esi
        jnz  L_77
        push edi
        call dword ptr [g_10021044]
        mov  eax, dword ptr [esp + 0x10]
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        pop  ecx
        ret  0x4
L_b1:
        mov  eax, dword ptr [esi + 0x98]
        mov  dword ptr [esp + 0x10], eax
L_bb:
        push edi
        call dword ptr [g_10021044]
        mov  eax, dword ptr [esp + 0x10]
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        pop  ecx
        ret  0x4
    }
}
