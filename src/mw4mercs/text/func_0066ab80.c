/*
 * FUN_0066ab80 (59 B) — __fastcall constructor: initializes an object,
 * sets up a sub-object at this+0x10, and installs two vtables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8c10;              /* DAT_007b8c10 */
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00416990(int, int);

__declspec(naked) void FUN_0066ab80(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        push    1
        lea     edi, [esi + 0x10]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov     dword ptr [edi], 0x796af8
        pop     edi
        mov     dword ptr [esi], 0x796af4
        mov     eax, esi
        pop     esi
        ret
    }
}
