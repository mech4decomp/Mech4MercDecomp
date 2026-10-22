/*
 * FUN_004a8500 (101 B) — __fastcall MLR object constructor: initializes
 * sub-object, installs vtable 0x77040c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9380(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void FUN_004a8500(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x524
        call    FUN_004a9380
        lea     ecx, [esi+0x2b8]
        mov     dword ptr [esi+0x2b4], 0x6
        call    FUN_004ae3c0
        mov     eax, 0x2
        mov     dword ptr [esi+0x2c4], eax
        mov     dword ptr [esi+0x2dc], 0x9
        mov     dword ptr [esi+0x2e0], 0x0
        mov     dword ptr [esi+0x2e8], eax
        mov     dword ptr [esi], 0x77040c
        mov     dword ptr [esi+0x26c], 0xc8
        mov     dword ptr [esi+0x270], 0x74
        mov     eax, esi
        pop     esi
        ret
    }
}
