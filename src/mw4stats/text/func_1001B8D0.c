/* FUN_1001b8d0 - __fastcall, 68 bytes
 * Destructor: sets vtable 0x10021bc0, then if [this+0xc] (thread handle)
 * non-null: FUN_1001bae0, WaitForSingleObject(5000), TerminateThread if
 * timeout (0x102), CloseHandle. */

extern void __cdecl FUN_1001bae0(void);
extern void *g_10021028;   /* IAT: WaitForSingleObject */
extern void *g_10021058;   /* IAT: TerminateThread */
extern void *g_1002102c;   /* IAT: CloseHandle */

__declspec(naked) void __cdecl FUN_1001b8d0(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi + 0xc]
        mov  dword ptr [esi], 0x10021bc0
        test eax, eax
        jz   L1
        push esi
        call FUN_1001bae0
        mov  eax, dword ptr [esi + 0xc]
        push 0x1388
        push eax
        call dword ptr [g_10021028]
        cmp  eax, 0x102
        jnz  L2
        mov  ecx, dword ptr [esi + 0xc]
        push -1
        push ecx
        call dword ptr [g_10021058]
L2:
        mov  edx, dword ptr [esi + 0xc]
        push edx
        call dword ptr [g_1002102c]
L1:
        pop  esi
        ret
    }
}
