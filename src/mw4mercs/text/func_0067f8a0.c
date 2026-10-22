/*
 * FUN_0067f8a0 (117 B) — __thiscall constructor, RET 0x10 (4 stack params).
 *
 * Saves this (ECX) in ESI, calls FUN_00415180(DAT_007b8c10), initializes
 * sub-object at this+0x10 via FUN_0041fc80(0), then FUN_0041fcd0(param1),
 * and fills in the remaining fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(int);
extern void __cdecl FUN_0041fc80(int);
extern void __cdecl FUN_0041fcd0(int);

__declspec(naked) void __stdcall FUN_0067f8a0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        lea     edi, [esi + 0x10]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     dword ptr [edi], 0x773328
        mov     ecx, edi
        mov     dword ptr [esi], 0x798818
        call    FUN_0041fcd0
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x1c], eax
        pop     edi
        mov     dword ptr [esi + 0x18], edx
        mov     dword ptr [esi + 0x20], ecx
        mov     byte ptr [esi + 0x24], 0x1
        mov     dword ptr [esi + 0x28], 0x0
        mov     dword ptr [esi + 0x2c], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
