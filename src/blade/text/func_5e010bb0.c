/*
 * FUN_5e010bb0 (120 B) — decrement refcount; release sub-objects and free.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e010010(void);
extern void __cdecl FUN_5e02b453(void);

__declspec(naked) void __stdcall FUN_5e010bb0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x14]
        dec     eax
        mov     dword ptr [esi + 0x14], eax
        jnz     loc_10c24
        mov     ecx, dword ptr [esi + 0x1c]
        test    ecx, ecx
        jz      loc_10bcb
        push    esi
        call    FUN_5e010010
loc_10bcb:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      loc_10bdf
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x18], 0x0
loc_10bdf:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      loc_10bf3
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x24], 0x0
loc_10bf3:
        test    esi, esi
        jz      loc_10c22
        push    esi
        mov     dword ptr [esi], 0x5e035d4c
        mov     dword ptr [esi + 0x4], 0x5e035cb0
        mov     dword ptr [esi + 0x8], 0x5e035bfc
        mov     dword ptr [esi + 0xc], 0x5e035b38
        mov     dword ptr [esi + 0x10], 0x5e035b20
        call    FUN_5e02b453
        add     esp, 0x4
loc_10c22:
        xor     eax, eax
loc_10c24:
        pop     esi
        ret     0x4
    }
}
