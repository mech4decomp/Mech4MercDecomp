/*
 * FUN_004ddc00 (285 B) — __thiscall Adept::ControlsManager destructor.
 * Sets vtable 0x7738d4, tears down the state-engine sub-objects
 * (virtual method 0 with arg 3), frees the mapping group, destroys the
 * array of sub-objects (vtable 0x7738f8 / 0x773910) via FUN_004dd7c0,
 * frees the event-controls buffer, and calls FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00505ce0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004dd7c0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004ddc00(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi+0x34]
        test    edi, edi
        mov     dword ptr [esi], 0x7738d4
        jz      L_after_state
        mov     ecx, dword ptr [esi+0x40]
        test    ecx, ecx
        jz      L_skip40
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
L_skip40:
        mov     ecx, dword ptr [esi+0x3c]
        test    ecx, ecx
        jz      L_skip3c
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
L_skip3c:
        mov     ecx, dword ptr [esi+0x38]
        test    ecx, ecx
        jz      L_skip38
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
L_skip38:
        test    edi, edi
        jz      L_after_state
        mov     ecx, edi
        call    FUN_00505ce0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_after_state:
        push    ebx
        lea     ecx, [esi+0x3b80]
        call    FUN_00417980
        lea     ecx, [esi+0x3b78]
        call    FUN_0041fc90
        lea     ecx, [esi+0x3b54]
        mov     dword ptr [ecx], 0x7738f8
        call    FUN_004dd7c0
        lea     edi, [esi+0x3b54]
        mov     ebx, 0x212
L_loop212:
        sub     edi, 0x1c
        mov     ecx, edi
        mov     dword ptr [edi], 0x7738f8
        call    FUN_004dd7c0
        dec     ebx
        jnz     L_loop212
        lea     edi, [esi+0x15c]
        mov     ebx, 0x5
L_loop5:
        sub     edi, 0x1c
        mov     ecx, edi
        mov     dword ptr [edi], 0x7738f8
        call    FUN_004dd7c0
        dec     ebx
        jnz     L_loop5
        lea     ecx, [esi+0xb4]
        mov     dword ptr [ecx], 0x7738f8
        call    FUN_004dd7c0
        lea     ecx, [esi+0x98]
        mov     dword ptr [ecx], 0x773910
        call    FUN_004dd7c0
        lea     ecx, [esi+0x7c]
        mov     dword ptr [ecx], 0x773910
        call    FUN_004dd7c0
        lea     ecx, [esi+0x60]
        mov     dword ptr [ecx], 0x773910
        call    FUN_004dd7c0
        lea     ecx, [esi+0x44]
        mov     dword ptr [ecx], 0x773910
        call    FUN_004dd7c0
        mov     eax, dword ptr [esi+0x20]
        test    eax, eax
        mov     dword ptr [esp+0xc], eax
        pop     ebx
        jz      L_skip20
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_skip20:
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
