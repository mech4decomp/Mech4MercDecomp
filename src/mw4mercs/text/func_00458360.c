/*
 * FUN_00458360 (477 B) — MLR object constructor/resize helper (__thiscall,
 * RET 0xC). Sets vtable, computes capacity = [this+0x4c]/3, allocates/frees
 * a 16-byte-element array, and calls a virtual method on arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076ec24;
extern void __cdecl FUN_0047fb90(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00458b50(void);

__declspec(naked) void FUN_00458360(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp+0x8]
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
        push    ebp
        mov     ebp, dword ptr [esp+0x14]
        push    esi
        push    edi
        push    ebx
        push    ebp
        mov     esi, ecx
        push    eax
        call    FUN_0047fb90
        xor     ecx, ecx
        mov     dword ptr [esi+0x5c], ecx
        mov     eax, 0xaaaaaaab
        mov     dword ptr [esi+0x60], ecx
        mov     dword ptr [esi], offset g_0076ec24
        mul     dword ptr [esi+0x4c]
        mov     edi, edx
        shr     edi, 1
        cmp     ebx, 0xf
        mov     dword ptr [esi+0x58], edi
        jge     L_458466
        mov     eax, ecx
        cmp     edi, eax
        jz      L_458455
        cmp     edi, ecx
        jbe     L_45843F
        mov     ecx, edi
        shl     ecx, 4
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4583D0
        lea     edx, [edi-1]
        mov     dword ptr [esp+0x1c], edx
        mov     ebp, eax
        jmp     L_4583D2
L_4583D0:
        xor     ebp, ebp
L_4583D2:
        mov     ebx, dword ptr [esi+0x5c]
        test    ebx, ebx
        mov     dword ptr [esp+0x1c], ebp
        jz      L_458428
        mov     edx, dword ptr [esi+0x60]
        cmp     edi, edx
        jnc     L_4583E6
        mov     edx, edi
L_4583E6:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_45841F
        mov     ecx, edx
        shl     ecx, 4
        lea     eax, [ecx+ebx]
        lea     ecx, [ecx+ebp+8]
        inc     edx
L_4583FA:
        mov     ebp, dword ptr [eax]
        mov     dword ptr [ecx-8], ebp
        mov     ebp, dword ptr [eax+4]
        mov     dword ptr [ecx-4], ebp
        mov     ebp, dword ptr [eax+8]
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [eax+0xc]
        mov     dword ptr [ecx+4], ebp
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_4583FA
        mov     ebp, dword ptr [esp+0x1c]
L_45841F:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_458428:
        mov     ecx, esi
        mov     dword ptr [esi+0x5c], ebp
        mov     dword ptr [esi+0x60], edi
        call    FUN_00458b50
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_45843F:
        mov     ecx, dword ptr [esi+0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x5c], 0
        mov     dword ptr [esi+0x60], edi
L_458455:
        mov     ecx, esi
        call    FUN_00458b50
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_458466:
        mov     edx, dword ptr [ebp]
        push    4
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [esp+0x18]
        mov     ebx, dword ptr [esi+0x60]
        cmp     eax, ebx
        mov     dword ptr [esp+0x20], eax
        jz      L_45851F
        test    eax, eax
        jbe     L_458501
        mov     edi, eax
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4584A7
        dec     edi
        mov     dword ptr [esp+0x10], edi
        mov     ebp, eax
        jmp     L_4584A9
L_4584A7:
        xor     ebp, ebp
L_4584A9:
        mov     edi, dword ptr [esi+0x5c]
        test    edi, edi
        jz      L_4584F8
        mov     edx, dword ptr [esp+0x20]
        cmp     edx, ebx
        jc      L_4584BA
        mov     edx, ebx
L_4584BA:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_4584EF
        mov     ecx, edx
        shl     ecx, 4
        lea     eax, [ecx+edi]
        lea     ecx, [ecx+ebp+8]
        inc     edx
L_4584CE:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx-8], ebx
        mov     ebx, dword ptr [eax+4]
        mov     dword ptr [ecx-4], ebx
        mov     ebx, dword ptr [eax+8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax+0xc]
        mov     dword ptr [ecx+4], ebx
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_4584CE
L_4584EF:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_4584F8:
        mov     dword ptr [esi+0x5c], ebp
        mov     ebp, dword ptr [esp+0x1c]
        jmp     L_458514
L_458501:
        mov     edx, dword ptr [esi+0x5c]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x5c], 0
L_458514:
        mov     eax, dword ptr [esp+0x20]
        mov     dword ptr [esi+0x60], eax
        mov     eax, dword ptr [esp+0x18]
L_45851F:
        test    eax, eax
        jbe     L_458533
        mov     edx, dword ptr [ebp]
        shl     eax, 4
        push    eax
        mov     eax, dword ptr [esi+0x5c]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x20]
L_458533:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
