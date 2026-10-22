/*
 * FUN_006F5F60 (71 B) — Constructor with sub-object allocation.
 *
 * __fastcall (ECX = this). Calls FUN_006F5110, sets vtable to 0x79FC38,
 * allocates 0x44 bytes via FUN_004084D0. If allocation succeeds, calls
 * FUN_006F6DB0 and FUN_006F7940 to initialize the sub-object. Otherwise
 * calls FUN_006F7940(0). Sets byte at this+0x40 to 0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5110(void);
extern int __cdecl FUN_004084d0(int);
extern int __cdecl FUN_006f6db0(void);
extern void __cdecl FUN_006f7940(int);

__declspec(naked) void __fastcall FUN_006f5f60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006f5110
        push    0x44
        mov     dword ptr [esi], 0x79FC38
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, eax
        call    FUN_006f6db0
        mov     ecx, dword ptr [esi + 0x3C]
        push    eax
        call    FUN_006f7940
        mov     byte ptr [esi + 0x40], 0
        mov     eax, esi
        pop     esi
        ret
    l_fail:
        mov     ecx, dword ptr [esi + 0x3C]
        xor     eax, eax
        push    eax
        call    FUN_006f7940
        mov     byte ptr [esi + 0x40], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
