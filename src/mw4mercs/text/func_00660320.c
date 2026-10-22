/*
 * FUN_00660320 (75 B) — Constructor: init sub-objects + vtables.
 *
 * __fastcall (ECX = this). Calls FUN_00661da0, initializes sub-object
 * at this+0x24 (vtable 0x7952d0, then 0x7952c0), calls FUN_006a24c0,
 * FUN_006a2400, FUN_006a2800, and sets *this to vtable 0x79529c.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_006a24c0(void);
extern void __cdecl FUN_006a2400(int a, int b);
extern void __cdecl FUN_006a2800(int a, int b);

__declspec(naked) void *__fastcall FUN_00660320(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_00661da0
        lea     esi, [edi + 0x24]
        mov     ecx, esi
        call    FUN_006a24c0
        push    0x3f800000
        push    1
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2400
        push    0x41200000
        push    0x3fc00000
        lea     ecx, [esi + 0x1c]
        call    FUN_006a2800
        mov     dword ptr [esi], 0x7952c0
        mov     dword ptr [edi], 0x79529c
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
