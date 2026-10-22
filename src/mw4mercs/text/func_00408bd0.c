/*
 * FUN_00408bd0 (90 B) — __fastcall object constructor. Sets up a small
 * object at ESI (this) with three nested sub-objects, each initialized via
 * FUN_00415bb0, and installs vtable pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_00415bb0(int);

__declspec(naked) void FUN_00408bd0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebp, ebp
        lea     edi, [esi + 0x10]
        push    ebp
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebp
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00415bb0
        mov     byte ptr [edi + 0x8], 0x1
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [edi], 0x76cd70
        lea     edi, [esi + 0x20]
        push    ebp
        mov     ecx, edi
        call    FUN_00415bb0
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [edi], 0x76cd70
        mov     byte ptr [edi + 0x8], 0x1
        pop     edi
        mov     dword ptr [esi], 0x76cd6c
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }
}
