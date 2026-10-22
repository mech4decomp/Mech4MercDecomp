/*
 * FUN_00605410 (80 B) — __thiscall constructor.
 *
 * Calls FUN_00415180(DAT_007b8c10), initializes vtable pointers and
 * fields, calls FUN_0041fc80(0), stores arg at this+0x10. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *a);
extern void __cdecl FUN_0041fc80(int a);

extern unsigned int g_7b8c10;

__declspec(naked) void FUN_00605410(void)
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
        lea     edi, [esi + 0x14]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edi], 0x78b9a4
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0x24], ebx
        pop     edi
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi], 0x78b9a0
        mov     dword ptr [esi + 0x10], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
