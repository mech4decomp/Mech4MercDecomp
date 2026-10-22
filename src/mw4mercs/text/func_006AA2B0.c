/*
 * FUN_006AA2B0 (184 B) — allocates several 0x2c-byte objects, initializing
 * each from a source field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00698b90(void);

__declspec(naked) void FUN_006AA2B0(void)
{
    __asm {
        push    esi
        push    0x2c
        mov     esi, ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a2ce
        mov     ecx, dword ptr [esi+0x48]
        push    ecx
        mov     ecx, eax
        call    FUN_00698b90
        jmp     L_a2d0
    L_a2ce:
        xor     eax, eax
    L_a2d0:
        mov     dword ptr [esi+0x5c], eax
        mov     al, byte ptr [esp+8]
        test    al, al
        jne     L_a364
        push    0x2c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a2fa
        mov     edx, dword ptr [esi+0x44]
        push    edx
        mov     ecx, eax
        call    FUN_00698b90
        jmp     L_a2fc
    L_a2fa:
        xor     eax, eax
    L_a2fc:
        push    0x2c
        mov     dword ptr [esi+0x58], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a31a
        mov     ecx, dword ptr [esi+0x4c]
        push    ecx
        mov     ecx, eax
        call    FUN_00698b90
        jmp     L_a31c
    L_a31a:
        xor     eax, eax
    L_a31c:
        push    0x2c
        mov     dword ptr [esi+0x60], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a33a
        mov     edx, dword ptr [esi+0x50]
        push    edx
        mov     ecx, eax
        call    FUN_00698b90
        jmp     L_a33c
    L_a33a:
        xor     eax, eax
    L_a33c:
        push    0x2c
        mov     dword ptr [esi+0x64], eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a35f
        mov     ecx, dword ptr [esi+0x54]
        push    ecx
        mov     ecx, eax
        call    FUN_00698b90
        mov     dword ptr [esi+0x68], eax
        pop     esi
        ret     4
    L_a35f:
        xor     eax, eax
        mov     dword ptr [esi+0x68], eax
    L_a364:
        pop     esi
        ret     4
    }
}
