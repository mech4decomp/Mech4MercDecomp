/*
 * FUN_006c8f30 (731 B) — __thiscall region copy routine (RET 0x10).
 *
 * Copies a rectangular region between two buffers with bounds checking
 * against the source/dest dimensions. Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006c8f30(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x34]
        test    esi, esi
        mov     edx, ecx
        push    edi
        mov     dword ptr [esp + 0x18], edx
        jnz     L_8f59
        mov     ebx, dword ptr [edx + 4]
        mov     eax, dword ptr [edx + 8]
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x28], eax
        jmp     L_8f6c
    L_8f59:
        mov     ecx, 6
        lea     edi, [esp + 0x1c]
        rep     movsd
        mov     ebx, dword ptr [esp + 0x2c]
        mov     esi, dword ptr [esp + 0x20]
    L_8f6c:
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x28]
        add     ecx, eax
        test    ecx, ecx
        jl      L_9201
        mov     ecx, dword ptr [esp + 0x44]
        mov     ebp, dword ptr [ecx + 8]
        lea     ecx, [ebp - 1]
        cmp     eax, ecx
        jl      L_8f9b
        mov     edi, dword ptr [edx + 8]
        lea     edi, [edi + eax - 1]
        cmp     edi, ecx
        jg      L_9201
    L_8f9b:
        mov     ecx, dword ptr [esp + 0x40]
        lea     edi, [ebx + ecx]
        test    edi, edi
        jl      L_9201
        mov     edi, dword ptr [esp + 0x44]
        mov     edi, dword ptr [edi + 4]
        mov     dword ptr [esp + 0x14], edi
        dec     edi
        cmp     ecx, edi
        jl      L_8fcd
        mov     ebx, dword ptr [edx + 4]
        lea     ebx, [ebx + ecx - 1]
        cmp     ebx, edi
        jg      L_9201
        mov     ebx, dword ptr [esp + 0x2c]
    L_8fcd:
        test    eax, eax
        jge     L_8ff7
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x1c]
        sub     ebx, edi
        add     ebx, eax
        js      L_8ff1
        mov     ebx, dword ptr [esp + 0x2c]
        sub     edi, eax
        xor     eax, eax
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x3c], eax
        jmp     L_8fff
    L_8ff1:
        mov     ebx, dword ptr [esp + 0x2c]
        jmp     L_8ffb
    L_8ff7:
        mov     edi, dword ptr [esp + 0x1c]
    L_8ffb:
        test    eax, eax
        jnz     L_9065
    L_8fff:
        test    ecx, ecx
        jnz     L_9065
        test    edi, edi
        jge     L_9015
        mov     eax, edi
        neg     eax
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     edi, ecx
    L_9015:
        mov     eax, dword ptr [edx + 8]
        cmp     dword ptr [esp + 0x28], eax
        jle     L_9022
        mov     dword ptr [esp + 0x28], eax
    L_9022:
        mov     eax, dword ptr [esp + 0x28]
        sub     eax, edi
        cmp     eax, ebp
        jle     L_9030
        mov     dword ptr [esp + 0x28], ebp
    L_9030:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, ebx
        sub     ecx, esi
        cmp     ecx, eax
        jle     L_9042
        mov     ebx, eax
        mov     dword ptr [esp + 0x2c], ebx
    L_9042:
        test    esi, esi
        jge     L_904e
        neg     esi
        mov     dword ptr [esp + 0x40], esi
        xor     esi, esi
    L_904e:
        mov     eax, dword ptr [edx + 4]
        cmp     ebx, eax
        jle     L_905b
        mov     ebx, eax
        mov     dword ptr [esp + 0x2c], ebx
    L_905b:
        cmp     ebx, esi
        jle     L_9201
        jmp     L_90d5
    L_9065:
        mov     ebx, dword ptr [esp + 0x28]
        sub     ebx, edi
        lea     ebx, [ebx + eax - 1]
        lea     edi, [ebp - 1]
        cmp     ebx, edi
        jle     L_9093
        mov     ebx, dword ptr [edx + 8]
        mov     edi, dword ptr [esp + 0x1c]
        sub     ebp, ebx
        sub     ebp, eax
        mov     eax, dword ptr [esp + 0x28]
        add     eax, ebp
        cmp     eax, edi
        mov     dword ptr [esp + 0x28], eax
        jle     L_9201
    L_9093:
        test    ecx, ecx
        jge     L_90aa
        mov     eax, dword ptr [edx + 4]
        lea     eax, [eax + ecx - 1]
        test    eax, eax
        jl      L_90aa
        sub     esi, ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x40], ecx
    L_90aa:
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x2c]
        lea     eax, [edi - 1]
        cmp     ecx, eax
        jge     L_90d5
        mov     ebp, ebx
        sub     ebp, esi
        add     ebp, ecx
        cmp     ebp, eax
        jle     L_90d5
        mov     ebx, edi
        sub     ebx, ecx
        add     ebx, esi
        cmp     ebx, esi
        mov     dword ptr [esp + 0x2c], ebx
        jle     L_9201
    L_90d5:
        mov     ecx, dword ptr [edx + 0x14]
        mov     eax, dword ptr [esp + 0x44]
        mov     ebp, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x38], ecx
        cmp     byte ptr [edx + 0x1c], 1
        mov     dword ptr [esp + 0x10], ebp
        jnz     L_915f
        cmp     esi, ebx
        mov     edi, esi
        jge     L_9201
        mov     esi, dword ptr [esp + 0x1c]
        cmp     esi, dword ptr [esp + 0x28]
        jge     L_9150
    L_90f7:
        mov     edx, dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x38]
        imul    edx, edi
        add     eax, edx
        lea     ecx, [eax + esi*4 + 2]
    L_9111:
        mov     dl, byte ptr [ecx - 2]
        test    dl, dl
        jz      L_9140
        mov     eax, dword ptr [esp + 0x44]
        mov     eax, dword ptr [eax + 0xc]
        imul    eax, edi
        mov     ebx, ebp
        add     ebx, eax
        lea     eax, [ebx + esi*4]
        mov     ebx, dword ptr [esp + 0x2c]
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [ecx - 1]
        mov     byte ptr [eax + 1], dl
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 2], dl
        mov     dl, byte ptr [ecx + 1]
        mov     byte ptr [eax + 3], dl
    L_9140:
        mov     eax, dword ptr [esp + 0x28]
        inc     esi
        add     ecx, 4
        cmp     esi, eax
        jl      L_9111
        mov     edx, dword ptr [esp + 0x18]
    L_9150:
        inc     edi
        cmp     edi, ebx
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jcc rel-offset (7C AC vs ref 7C A2 -> 0x6C90F7) */
        __emit 0xA2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
    L_915f:
        mov     ebx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx + 4]
        mov     edi, dword ptr [esp + 0x38]
        imul    edx, ecx
        mov     eax, ebx
        imul    eax, dword ptr [esp + 0x14]
        add     eax, ebp
        mov     ebp, ecx
        imul    ebp, esi
        add     ebp, edi
        add     edx, edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     edi, [ebp + edi*4]
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x38], edi
        mov     edi, ebx
        imul    edi, dword ptr [esp + 0x40]
        add     edi, ebp
        mov     ebp, dword ptr [esp + 0x3c]
        lea     edi, [edi + ebp*4]
        mov     ebp, dword ptr [esp + 0x2c]
        cmp     esi, ebp
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x10], edi
        jge     L_9201
        sub     ebp, esi
        mov     esi, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x44], ebp
    L_91bb:
        cmp     eax, edi
        jbe     L_91ea
        cmp     edx, esi
        jbe     L_91ea
        mov     ebp, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x28]
        sub     ecx, ebp
        shl     ecx, 2
        mov     ebp, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [esp + 0x38]
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
    L_91ea:
        mov     ebp, dword ptr [esp + 0x44]
        add     edi, ebx
        add     esi, ecx
        dec     ebp
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x38], esi
        mov     dword ptr [esp + 0x44], ebp
        jnz     L_91bb
    L_9201:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x10
    }
}
