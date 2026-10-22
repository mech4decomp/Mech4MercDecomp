/*
 * FUN_0063b900 (79 B) — __thiscall constructor.
 *
 * Calls FUN_00415180(DAT_007b8c10), initializes vtable pointers and
 * fields, calls FUN_0041fc80(0), FUN_0063b9e0(), FUN_0063bdd0().
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *a);
extern void __cdecl FUN_0041fc80(int a);
extern void __cdecl FUN_0063b9e0(void);
extern void __cdecl FUN_0063bdd0(void);

extern unsigned int g_7b8c10;

__declspec(naked) void FUN_0063b900(void)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        lea     edi, [esi + 0x10]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x774a0c
        mov     ecx, esi
        mov     dword ptr [esi], 0x78f174
        mov     dword ptr [esi + 0x18], ebx
        mov     byte ptr [esi + 0x1c], bl
        call    FUN_0063b9e0
        mov     ecx, esi
        call    FUN_0063bdd0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
