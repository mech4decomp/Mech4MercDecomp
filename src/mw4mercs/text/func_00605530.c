/*
 * FUN_00605530 (98 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Constructor: calls FUN_00415180 with a global, zeroes fields, sets
 * vtable pointers, initializes two sub-objects via FUN_0041FC80, and
 * stores the two params at this+0x10 / this+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);

__declspec(naked) void *__fastcall FUN_00605530(void *this, int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        lea     edi, [esi + 0x18]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], 0
        mov     dword ptr [esi + 0xc], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78b9a4
        lea     edi, [esi + 0x20]
        push    0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi], 0x78b9a4
        pop     edi
        mov     dword ptr [esi], 0x78b9c4
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     eax, esi
        pop     esi
        ret     8
    }
}
