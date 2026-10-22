/*
 * FUN_00627A00 (96 B) — State-machine dispatcher.
 *
 * __fastcall (ECX = this). Reads a mode flag at this+0x164 and a state
 * value at this+0x3C, then dispatches to one of three helper functions
 * (FUN_006275A0 / FUN_006276F0 / FUN_006278B0) based on the state,
 * storing the state back into this+0x40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006275a0(void);
extern void __cdecl FUN_006276f0(void);
extern void __cdecl FUN_006278b0(void);

__declspec(naked) void __fastcall FUN_00627a00(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x164]
        test    eax, eax
        mov     eax, dword ptr [esi + 0x3c]
        jnz     l_branch
        sub     eax, 0
        jz      l_case0
        dec     eax
        jz      l_case1
        dec     eax
        jnz     l_done
        call    FUN_006275a0
        mov     eax, dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x40], eax
        pop     esi
        ret
    l_branch:
        sub     eax, 0
        jz      l_case0
        dec     eax
        jz      l_case1
        dec     eax
        jnz     l_done
        mov     ecx, esi
        call    FUN_006275a0
        mov     eax, dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x40], eax
        pop     esi
        ret
    l_case1:
        mov     ecx, esi
        call    FUN_006276f0
        mov     ecx, dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x40], ecx
        pop     esi
        ret
    l_case0:
        mov     ecx, esi
        call    FUN_006278b0
        mov     edx, dword ptr [esi + 0x3c]
        mov     dword ptr [esi + 0x40], edx
    l_done:
        pop     esi
        ret
    }
}
