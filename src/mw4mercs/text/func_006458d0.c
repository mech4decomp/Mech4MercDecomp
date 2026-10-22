/*
 * FUN_006458d0 (139 B) — __fastcall (ECX = param_1), returns param_1 in EAX.
 *
 * Constructor: calls FUN_00561430(DAT_007ddde0), initializes a set of
 * float/int fields on the object, then calls FUN_005614d0("hud\\hud4", ...)
 * with 8 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7ddde0;
extern void __cdecl FUN_00561430(void *p);
extern void __cdecl FUN_005614d0(void);

__declspec(naked) void *__fastcall FUN_006458d0(void *param)
{
    __asm {
        mov     eax, dword ptr [g_7ddde0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x434f0000
        push    0x42d40000
        push    0x43480000
        xor     ecx, ecx
        mov     eax, 0xbf800000
        push    0x42c40000
        mov     dword ptr [esi + 0x54], ecx
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x64], eax
        mov     eax, 0x3f666666
        push    ecx
        mov     dword ptr [esi], 0x79267c
        mov     dword ptr [esi + 0x58], ecx
        mov     dword ptr [esi + 0x14], 0x43e98000
        mov     dword ptr [esi + 0x18], 0x4406c000
        mov     dword ptr [esi + 0x1c], eax
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi + 0x50], 0xff
        mov     dword ptr [esi + 0x68], 0x6d
        mov     dword ptr [esi + 0x20], 0x40e00000
        mov     dword ptr [esi + 0x24], 0x42440000
        mov     dword ptr [esi + 0x28], eax
        call    FUN_005614d0
        mov     eax, esi
        pop     esi
        ret
    }
}
