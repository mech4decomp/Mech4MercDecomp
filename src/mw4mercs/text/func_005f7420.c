/*
 * FUN_005f7420 (94 B) — __fastcall (ECX = this) constructor.
 *
 * Calls FUN_00415180(DAT_007b8c10), sets vtable 0x76cd9c, initializes fields,
 * constructs two sub-objects (vtable 0x77ceac at +0x14, 0x775540 at +0x1C),
 * then sets final vtable 0x78a914.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00415180(void);
extern void *__cdecl FUN_0041fc80(void);

extern int DAT_007b8c10;

__declspec(naked) void __fastcall FUN_005f7420(void *this)
{
    __asm {
        mov     eax, dword ptr [DAT_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     dword ptr [esi], 0x76CD9C
        lea     edi, [esi + 0x14]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0xC], 0
        mov     word ptr [esi + 0x10], 0xFFFF
        mov     word ptr [esi + 0x12], 0
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77CEAC
        lea     edi, [esi + 0x1C]
        push    0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x775540
        pop     edi
        mov     dword ptr [esi], 0x78A914
        mov     eax, esi
        pop     esi
        ret
    }
}
