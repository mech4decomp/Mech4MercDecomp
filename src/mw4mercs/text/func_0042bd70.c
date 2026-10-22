/*
 * FUN_0042bd70 (254 B) — __thiscall MLR light/material ctor. Calls
 * FUN_00435ce0, sets up flags/fields (this+0x2c/0x30/0x34/0x3c, vtable
 * 0x76e13c), allocates a 0x30-byte buffer at this+0xc, and initializes
 * a sub-object at this+0xc+0x20 via FUN_00423c40, filling it with -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435ce0(void);
extern void __cdecl FUN_004084e0(void *);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00423c40(void);

__declspec(naked) void FUN_0042bd70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00435ce0
        mov     ecx, dword ptr [esi + 0x34]
        mov     ebx, dword ptr [esi + 0x3c]
        xor     edi, edi
        mov     dword ptr [esi + 0xb8], edi
        mov     eax, dword ptr [esi + 0x30]
        and     eax, 0xfffffc5f
        or      eax, 0x40
        mov     dword ptr [esi + 0xb4], edi
        mov     dword ptr [esi], 0x76e13c
        mov     edx, dword ptr [esi + 0x2c]
        mov     dword ptr [esi + 0x30], eax
        mov     eax, 0x10000000
        or      edx, eax
        or      ecx, eax
        mov     eax, dword ptr [esi + 0x60]
        or      ebx, 0x3e0
        cmp     eax, edi
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x34], ecx
        jz      L_bde7
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x5c], edi
        mov     dword ptr [esi + 0x60], edi
L_bde7:
        cmp     dword ptr [esi + 0xc], edi
        jnz     L_be24
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_be1f
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax + 0x10], edi
        mov     dword ptr [eax + 0x14], edi
        mov     dword ptr [eax + 0x18], edi
        mov     dword ptr [eax + 0x1c], edi
        mov     dword ptr [eax + 0x20], edi
        mov     dword ptr [eax + 0x24], edi
        mov     dword ptr [eax + 0x28], edi
        mov     dword ptr [eax + 0x2c], edi
        jmp     L_be21
L_be1f:
        xor     eax, eax
L_be21:
        mov     dword ptr [esi + 0xc], eax
L_be24:
        cmp     dword ptr [esi + 0xac], edi
        jnz     L_be66
        mov     edx, dword ptr [esi + 0x18]
        push    ebp
        mov     ebp, dword ptr [esi + 0xc]
        lea     ebx, [ebp + 0x20]
        push    edx
        mov     ecx, ebx
        call    FUN_00423c40
        mov     ecx, dword ptr [ebx + 0x4]
        cmp     ecx, edi
        jbe     L_be4c
        mov     edi, dword ptr [ebx]
        or      eax, 0xffffffff
        rep     stosd
L_be4c:
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebp + 0x24]
        pop     ebp
        mov     dword ptr [esi + 0xa8], eax
        pop     edi
        mov     dword ptr [esi + 0xac], ecx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
L_be66:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
