/*
 * FUN_006A2E50 (102 B) — __fastcall constructor.
 *
 * Sets up several sub-objects and vtables, calling a series of
 * constructors. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2800(int a, int b);
extern void __cdecl FUN_006a28d0(void);
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a2400(int a, int b);

__declspec(naked) void FUN_006a2e50(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006a24c0
        push    0x41200000
        push    0x3fc00000
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2800
        lea     ecx, [esi + 0x1c]
        call    FUN_006a28d0
        lea     edi, [esi + 0x28]
        mov     ecx, edi
        mov     dword ptr [esi], 0x795334
        call    FUN_006a22a0
        push    0x3f800000
        mov     dword ptr [edi], 0x795380
        push    0x1
        lea     ecx, [esi + 0x34]
        mov     dword ptr [esi], 0x795370
        mov     dword ptr [esi + 0x30], 0x0
        call    FUN_006a2400
        pop     edi
        mov     dword ptr [esi], 0x799da0
        mov     eax, esi
        pop     esi
        ret
    }
}
