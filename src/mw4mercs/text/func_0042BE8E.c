/*
 * FUN_0042BE8E (194 B) — constructor: initializes fields, allocates a buffer,
 * and sets up a sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435e00(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00423c40(void);

__declspec(naked) void FUN_0042BE8E(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp+4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00435e00
        xor     edi, edi
        mov     dword ptr [esi+0xb8], edi
        cmp     dword ptr [esi+0x60], edi
        mov     dword ptr [esi+0xb4], edi
        mov     dword ptr [esi], 0x76e13c
        je      L_bec9
        mov     ecx, dword ptr [esi+0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x5c], edi
        mov     dword ptr [esi+0x60], edi
    L_bec9:
        cmp     dword ptr [esi+0xc], edi
        jne     L_bf06
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        je      L_bf01
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+4], edi
        mov     dword ptr [eax+8], edi
        mov     dword ptr [eax+0xc], edi
        mov     dword ptr [eax+0x10], edi
        mov     dword ptr [eax+0x14], edi
        mov     dword ptr [eax+0x18], edi
        mov     dword ptr [eax+0x1c], edi
        mov     dword ptr [eax+0x20], edi
        mov     dword ptr [eax+0x24], edi
        mov     dword ptr [eax+0x28], edi
        mov     dword ptr [eax+0x2c], edi
        jmp     L_bf03
    L_bf01:
        xor     eax, eax
    L_bf03:
        mov     dword ptr [esi+0xc], eax
    L_bf06:
        cmp     dword ptr [esi+0xac], edi
        jne     L_bf49
        mov     edx, dword ptr [esi+0x18]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esi+0xc]
        lea     ebx, [ebp+0x20]
        push    edx
        mov     ecx, ebx
        call    FUN_00423c40
        mov     ecx, dword ptr [ebx+4]
        cmp     ecx, edi
        jbe     L_bf2f
        mov     edi, dword ptr [ebx]
        or      eax, 0xffffffff
        rep stosd
    L_bf2f:
        mov     ecx, dword ptr [ebp+0x24]
        mov     eax, dword ptr [ebx]
        pop     ebp
        pop     ebx
        mov     dword ptr [esi+0xa8], eax
        pop     edi
        mov     dword ptr [esi+0xac], ecx
        mov     eax, esi
        pop     esi
        ret     4
    L_bf49:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
