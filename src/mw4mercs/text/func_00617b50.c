/*
 * FUN_00617b50 (439 B) — __thiscall animation/motion validation routine.
 * Walks a list of entries via FUN_00416cc0, validates state, returns 1 on
 * success or an error code (0xce5..0xceb) on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00617b50(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [ecx+0x34]
        mov     edx, dword ptr [eax+0x48]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [edx+0x40]
        add     ecx, 0x40
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_00416bc0
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x10], 0x77a38c
        xor     ebx, ebx
        xor     esi, esi
        call    FUN_00416cc0
        cmp     eax, ebx
        jz      L_ba9
    L_b85:
        cmp     esi, edi
        jle     L_b9b
        cmp     byte ptr [eax+0x14], bl
        mov     dword ptr [eax+0x18], ebx
        mov     byte ptr [eax+0x1c], bl
        mov     dword ptr [eax+0x10], ebx
        jz      L_b9b
        mov     byte ptr [eax+0x1c], 0x1
    L_b9b:
        lea     ecx, [esp+0x10]
        inc     esi
        call    FUN_00416cc0
        cmp     eax, ebx
        jnz     L_b85
    L_ba9:
        lea     ecx, [esp+0x10]
        mov     byte ptr [esp+0xf], bl
        xor     esi, esi
        call    FUN_00416c80
        lea     ecx, [esp+0x10]
        call    FUN_00416cc0
        cmp     eax, ebx
        jz      L_c5f
    L_bc9:
        cmp     byte ptr [eax+0x14], bl
        jz      L_be4
        mov     eax, dword ptr [eax+0x10]
        cmp     eax, ebx
        jz      L_c74
        cmp     dword ptr [eax+0x20], ebx
        jnz     L_cb3
        jmp     L_c4e
    L_be4:
        mov     ecx, dword ptr [eax+0x18]
        cmp     ecx, ebx
        jnz     L_bf4
        cmp     dword ptr [eax+0x10], ebx
        jnz     L_c89
    L_bf4:
        mov     eax, dword ptr [eax+0x10]
        cmp     eax, ebx
        jnz     L_c03
        cmp     ecx, ebx
        jnz     L_c9e
    L_c03:
        cmp     ecx, ebx
        jz      L_c22
        cmp     eax, ebx
        jz      L_c14
        cmp     dword ptr [eax+0x20], ebx
        jnz     L_cb3
    L_c14:
        cmp     ecx, ebx
        jz      L_c22
        cmp     dword ptr [ecx+0x20], 0x1
        jz      L_cc8
    L_c22:
        cmp     esi, 0x3
        jnz     L_c3d
        cmp     ecx, ebx
        jz      L_c4d
        mov     byte ptr [esp+0xf], 0x1
        jz      L_c4d
        cmp     dword ptr [ecx+0x70], ebx
        jle     L_cdd
        jmp     L_c4d
    L_c3d:
        jle     L_c4d
        cmp     byte ptr [esp+0xf], bl
        jnz     L_c4d
        cmp     ecx, ebx
        jnz     L_cf2
    L_c4d:
        inc     esi
    L_c4e:
        lea     ecx, [esp+0x10]
        call    FUN_00416cc0
        cmp     eax, ebx
        jnz     L_bc9
    L_c5f:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x18
        ret
    L_c74:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xce5
        pop     ebx
        add     esp, 0x18
        ret
    L_c89:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xce7
        pop     ebx
        add     esp, 0x18
        ret
    L_c9e:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xce6
        pop     ebx
        add     esp, 0x18
        ret
    L_cb3:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xce8
        pop     ebx
        add     esp, 0x18
        ret
    L_cc8:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xce9
        pop     ebx
        add     esp, 0x18
        ret
    L_cdd:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xcea
        pop     ebx
        add     esp, 0x18
        ret
    L_cf2:
        lea     ecx, [esp+0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        mov     eax, 0xceb
        pop     ebx
        add     esp, 0x18
        ret
    }
}
