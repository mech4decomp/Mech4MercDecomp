/*
 * FUN_10003cf0 (292 B, __cdecl) — allocate a run of `param_3` bytes inside a
 * string-table block, splitting/filling free runs. Returns the byte offset of
 * the allocated run (or 0 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_10003cf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 4]
        push    edi
        mov     edi, dword ptr [ecx]
        lea     ebx, [ecx + 0xf8]
        cmp     esi, edx
        mov     dword ptr [ebp - 4], edi
        mov     eax, edi
        mov     dword ptr [ebp + 8], ebx
        jc      L_3d35
        lea     eax, [edi + edx]
        mov     byte ptr [edi], dl
        cmp     eax, ebx
        jnc     L_3d24
        add     dword ptr [ecx], edx
        sub     dword ptr [ecx + 4], edx
        jmp     L_3d2d
L_3d24:
        and     dword ptr [ecx + 4], 0
        lea     eax, [ecx + 8]
        mov     dword ptr [ecx], eax
L_3d2d:
        lea     eax, [edi + 8]
        jmp     L_3e03
L_3d35:
        add     esi, edi
        cmp     byte ptr [esi], 0
        jz      L_3d3e
        mov     eax, esi
L_3d3e:
        lea     esi, [eax + edx]
        cmp     esi, ebx
        jnc     L_3d88
L_3d45:
        mov     bl, byte ptr [eax]
        test    bl, bl
        jnz     L_3d7b
        push    1
        lea     ebx, [eax + 1]
        pop     esi
L_3d51:
        cmp     byte ptr [ebx], 0
        jnz     L_3d5a
        inc     ebx
        inc     esi
        jmp     L_3d51
L_3d5a:
        cmp     esi, edx
        jnc     L_3dac
        cmp     eax, dword ptr [ebp - 4]
        jnz     L_3d68
        mov     dword ptr [ecx + 4], esi
        jmp     L_3d74
L_3d68:
        sub     dword ptr [ebp + 0xc], esi
        cmp     dword ptr [ebp + 0xc], edx
        jc      L_3e0d
L_3d74:
        mov     edi, dword ptr [ebp - 4]
        mov     eax, ebx
        jmp     L_3d80
L_3d7b:
        movzx   esi, bl
        add     eax, esi
L_3d80:
        lea     esi, [eax + edx]
        cmp     esi, dword ptr [ebp + 8]
        jc      L_3d45
L_3d88:
        lea     esi, [ecx + 8]
        cmp     esi, edi
        jnc     L_3e0d
L_3d8b:
        lea     eax, [esi + edx]
        cmp     eax, dword ptr [ebp + 8]
        jnc     L_3e0d
        mov     al, byte ptr [esi]
        test    al, al
        jnz     L_3ddd
        push    1
        lea     ebx, [esi + 1]
        pop     eax
L_3da3:
        cmp     byte ptr [ebx], 0
        jnz     L_3dcd
        inc     ebx
        inc     eax
        jmp     L_3da3
L_3dac:
        lea     ebx, [eax + edx]
        cmp     ebx, dword ptr [ebp + 8]
        jnc     L_3dbd
        sub     esi, edx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], esi
        jmp     L_3dc6
L_3dbd:
        and     dword ptr [ecx + 4], 0
        lea     esi, [ecx + 8]
        mov     dword ptr [ecx], esi
L_3dc6:
        mov     byte ptr [eax], dl
        add     eax, 8
        jmp     L_3e03
L_3dcd:
        cmp     eax, edx
        jnc     L_3de4
        sub     dword ptr [ebp + 0xc], eax
        cmp     dword ptr [ebp + 0xc], edx
        jc      L_3e0d
        mov     esi, ebx
        __emit 0xEB  /* __emit: backward jmp L_3d8b; MSVC6 miscomputes rel8 (EB B2 vs ref EB AE) */
        __emit 0xAE
L_3ddd:
        movzx   eax, al
        add     esi, eax
        __emit 0xEB  /* __emit: backward jmp L_3d8b; MSVC6 miscomputes rel8 (EB AB vs ref EB A7) */
        __emit 0xA7
L_3de4:
        lea     ebx, [esi + edx]
        cmp     ebx, dword ptr [ebp + 8]
        jnc     L_3df5
        sub     eax, edx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], eax
        jmp     L_3dfe
L_3df5:
        and     dword ptr [ecx + 4], 0
        lea     eax, [ecx + 8]
        mov     dword ptr [ecx], eax
L_3dfe:
        mov     byte ptr [esi], dl
        lea     eax, [esi + 8]
L_3e03:
        imul    ecx, ecx, 0xf
        shl     eax, 4
        sub     eax, ecx
        jmp     L_3e0f
L_3e0d:
        xor     eax, eax
L_3e0f:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
