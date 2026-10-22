/*
 * FUN_004869e0 (410 B) - MLR buffer realloc/resize helper (__fastcall).
 * Grows three parallel buffers (vertex, normal, color) to 0x20 entries,
 * copying old contents and freeing the old allocations.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004811a0(void);

__declspec(naked) void FUN_004869e0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, 0x20
        push    edi
        jz      L_486a58
        push    0x200
        call    FUN_004084d0
        mov     edi, dword ptr [ebp]
        add     esp, 0x4
        test    edi, edi
        mov     ebx, eax
        jz      L_486a4e
        cmp     esi, 0x20
        mov     edx, 0x20
        ja      L_486a10
        mov     edx, esi
L_486a10:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_486a45
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx + edi*0x1]
        lea     ecx, [ecx + ebx*0x1 + 0x8]
        inc     edx
L_486a24:
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx - 0x8], esi
        mov     esi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx - 0x4], esi
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x4], esi
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_486a24
L_486a45:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_486a4e:
        mov     dword ptr [ebp], ebx
        mov     dword ptr [ebp + 0x4], 0x20
L_486a58:
        mov     ebx, dword ptr [ebp + 0xc]
        cmp     ebx, 0x20
        jz      L_486af4
        push    0x200
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_486a97
        lea     ecx, [eax + 0x4]
        mov     esi, 0x20
        mov     edx, 0xbf800000
L_486a82:
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [ecx], edx
        mov     dword ptr [ecx - 0x4], edx
        mov     dword ptr [ecx + 0x8], edx
        add     ecx, 0x10
        dec     esi
        jnz     L_486a82
        mov     edi, eax
        jmp     L_486a99
L_486a97:
        xor     edi, edi
L_486a99:
        mov     esi, dword ptr [ebp + 0x8]
        test    esi, esi
        jz      L_486aea
        cmp     ebx, 0x20
        mov     edx, 0x20
        ja      L_486aac
        mov     edx, ebx
L_486aac:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_486ae1
        mov     ecx, edx
        shl     ecx, 0x4
        lea     eax, [ecx + esi*0x1]
        lea     ecx, [ecx + edi*0x1 + 0x8]
        inc     edx
L_486ac0:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx - 0x8], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx - 0x4], ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x4], ebx
        dec     edx
        sub     eax, 0x10
        sub     ecx, 0x10
        test    edx, edx
        ja      L_486ac0
L_486ae1:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_486aea:
        mov     dword ptr [ebp + 0x8], edi
        mov     dword ptr [ebp + 0xc], 0x20
L_486af4:
        mov     ebx, dword ptr [ebp + 0x14]
        cmp     ebx, 0x20
        jz      L_486b6b
        push    0x100
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_486b20
        push    0x423b70
        push    0x20
        push    0x8
        push    esi
        call    FUN_00406c90
        jmp     L_486b22
L_486b20:
        xor     esi, esi
L_486b22:
        mov     edi, dword ptr [ebp + 0x10]
        test    edi, edi
        jz      L_486b61
        cmp     ebx, 0x20
        mov     edx, 0x20
        ja      L_486b35
        mov     edx, ebx
L_486b35:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_486b58
        mov     ecx, edi
        lea     eax, [esi + edx*0x8]
        sub     ecx, esi
        inc     edx
L_486b44:
        mov     ebx, dword ptr [ecx + eax*0x1]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax*0x1 + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_486b44
L_486b58:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_486b61:
        mov     dword ptr [ebp + 0x10], esi
        mov     dword ptr [ebp + 0x14], 0x20
L_486b6b:
        push    0x20
        lea     ecx, [ebp + 0x18]
        call    FUN_004811a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
