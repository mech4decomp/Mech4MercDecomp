/*
 * FUN_1003da8b (758 B) -- __cdecl.
 * Buddy-block allocator: splits/coalesces free blocks in a size-class
 * free-list, maintaining a bitmap of in-use size classes. Returns 1 on
 * success, 0 on failure.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003da8b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, edi
        lea     esi, [eax + 0x17]
        sub     edx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ecx + 0x10]
        and     esi, 0xfffffff0
        shr     edx, 0xf
        mov     ecx, edx
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [edi - 0x4]
        dec     ecx
        cmp     esi, ecx
        mov     dword ptr [ebp + 0x10], ecx
        mov     ebx, dword ptr [ecx + edi - 0x4]
        lea     edi, [ecx + edi - 0x4]
        mov     dword ptr [ebp - 0x4], ebx
        jle     L_dc39
        test    bl, 0x1
        jnz     L_dc32
        add     ebx, ecx
        cmp     esi, ebx
        jg      L_dc32
        mov     ecx, dword ptr [ebp - 0x4]
        sar     ecx, 0x4
        dec     ecx
        cmp     ecx, 0x3f
        mov     dword ptr [ebp - 0x8], ecx
        jbe     L_db02
        push    0x3f
        pop     ecx
        mov     dword ptr [ebp - 0x8], ecx
    L_db02:
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, dword ptr [edi + 0x8]
        jnz     L_db52
        cmp     ecx, 0x20
        jnc     L_db2e
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 0x8]
        lea     ecx, [ecx + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edx*4 + 0x44], ebx
        dec     byte ptr [ecx]
        jnz     L_db52
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], ebx
        jmp     L_db52
    L_db2e:
        add     ecx, -0x20
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 0x8]
        lea     ecx, [ecx + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edx*4 + 0xc4], ebx
        dec     byte ptr [ecx]
        jnz     L_db52
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 0x4], ebx
    L_db52:
        mov     ecx, dword ptr [edi + 0x8]
        mov     ebx, dword ptr [edi + 0x4]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ecx, dword ptr [edi + 0x4]
        mov     edi, dword ptr [edi + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        mov     ecx, dword ptr [ebp + 0x10]
        sub     ecx, esi
        add     dword ptr [ebp - 0x4], ecx
        cmp     dword ptr [ebp - 0x4], 0
        jle     L_dc20
        mov     edi, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp + 0xc]
        sar     edi, 0x4
        dec     edi
        lea     ecx, [ecx + esi - 0x4]
        cmp     edi, 0x3f
        jbe     L_db8c
        push    0x3f
        pop     edi
    L_db8c:
        mov     ebx, dword ptr [ebp - 0xc]
        lea     ebx, [ebx + edi*8]
        mov     dword ptr [ebp + 0x10], ebx
        mov     ebx, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ebx, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx + 0x8], ebx
        mov     dword ptr [ebx + 0x4], ecx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [ebx + 0x8], ecx
        mov     ebx, dword ptr [ecx + 0x4]
        cmp     ebx, dword ptr [ecx + 0x8]
        jnz     L_dc0e
        mov     cl, byte ptr [edi + eax + 0x4]
        cmp     edi, 0x20
        mov     byte ptr [ebp + 0x13], cl
        inc     cl
        mov     byte ptr [edi + eax + 0x4], cl
        jnc     L_dbe5
        cmp     byte ptr [ebp + 0x13], 0
        jnz     L_dbd8
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx], ebx
    L_dbd8:
        lea     eax, [eax + edx*4 + 0x44]
        mov     edx, 0x80000000
        mov     ecx, edi
        jmp     L_dc0a
    L_dbe5:
        cmp     byte ptr [ebp + 0x13], 0
        jnz     L_dbfb
        lea     ecx, [edi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx + 0x4], ebx
    L_dbfb:
        lea     eax, [eax + edx*4 + 0xc4]
        lea     ecx, [edi - 0x20]
        mov     edx, 0x80000000
    L_dc0a:
        shr     edx, cl
        or      dword ptr [eax], edx
    L_dc0e:
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x4]
        lea     eax, [edx + esi - 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [ecx + eax - 0x4], ecx
        jmp     L_dc23
    L_dc20:
        mov     edx, dword ptr [ebp + 0xc]
    L_dc23:
        lea     eax, [esi + 0x1]
        mov     dword ptr [edx - 0x4], eax
        mov     dword ptr [edx + esi - 0x8], eax
        jmp     L_dd79
    L_dc32:
        xor     eax, eax
        jmp     L_dd7c
    L_dc39:
        jge     L_dd79
        mov     ebx, dword ptr [ebp + 0xc]
        sub     dword ptr [ebp + 0x10], esi
        lea     ecx, [esi + 0x1]
        mov     dword ptr [ebx - 0x4], ecx
        lea     ebx, [ebx + esi - 0x4]
        mov     esi, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0xc], ebx
        sar     esi, 0x4
        dec     esi
        mov     dword ptr [ebx - 0x4], ecx
        cmp     esi, 0x3f
        jbe     L_dc64
        push    0x3f
        pop     esi
    L_dc64:
        test    byte ptr [ebp - 0x4], 0x1
        jnz     L_dcf3
        mov     esi, dword ptr [ebp - 0x4]
        sar     esi, 0x4
        dec     esi
        cmp     esi, 0x3f
        jbe     L_dc7d
        push    0x3f
        pop     esi
    L_dc7d:
        mov     ecx, dword ptr [edi + 0x4]
        cmp     ecx, dword ptr [edi + 0x8]
        jnz     L_dccc
        cmp     esi, 0x20
        jnc     L_dca8
        mov     ebx, 0x80000000
        mov     ecx, esi
        shr     ebx, cl
        lea     esi, [esi + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edx*4 + 0x44], ebx
        dec     byte ptr [esi]
        jnz     L_dcc9
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx], ebx
        jmp     L_dcc9
    L_dca8:
        lea     ecx, [esi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        lea     ecx, [esi + eax + 0x4]
        not     ebx
        and     dword ptr [eax + edx*4 + 0xc4], ebx
        dec     byte ptr [ecx]
        jnz     L_dcc9
        mov     ecx, dword ptr [ebp + 0x8]
        and     dword ptr [ecx + 0x4], ebx
    L_dcc9:
        mov     ebx, dword ptr [ebp + 0xc]
    L_dccc:
        mov     ecx, dword ptr [edi + 0x8]
        mov     esi, dword ptr [edi + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        mov     ecx, dword ptr [edi + 0x4]
        mov     esi, dword ptr [edi + 0x8]
        mov     dword ptr [ecx + 0x8], esi
        mov     esi, dword ptr [ebp + 0x10]
        add     esi, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x10], esi
        sar     esi, 0x4
        dec     esi
        cmp     esi, 0x3f
        jbe     L_dcf3
        push    0x3f
        pop     esi
    L_dcf3:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ecx + esi*8 + 0x4]
        lea     ecx, [ecx + esi*8]
        mov     dword ptr [ebx + 0x4], edi
        mov     dword ptr [ebx + 0x8], ecx
        mov     dword ptr [ecx + 0x4], ebx
        mov     ecx, dword ptr [ebx + 0x4]
        mov     dword ptr [ecx + 0x8], ebx
        mov     ecx, dword ptr [ebx + 0x4]
        cmp     ecx, dword ptr [ebx + 0x8]
        jnz     L_dd70
        mov     cl, byte ptr [esi + eax + 0x4]
        cmp     esi, 0x20
        mov     byte ptr [ebp + 0xf], cl
        inc     cl
        mov     byte ptr [esi + eax + 0x4], cl
        jnc     L_dd47
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_dd3a
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx], edi
    L_dd3a:
        lea     eax, [eax + edx*4 + 0x44]
        mov     edx, 0x80000000
        mov     ecx, esi
        jmp     L_dd6c
    L_dd47:
        cmp     byte ptr [ebp + 0xf], 0
        jnz     L_dd5d
        lea     ecx, [esi - 0x20]
        mov     edi, 0x80000000
        shr     edi, cl
        mov     ecx, dword ptr [ebp + 0x8]
        or      dword ptr [ecx + 0x4], edi
    L_dd5d:
        lea     eax, [eax + edx*4 + 0xc4]
        lea     ecx, [esi - 0x20]
        mov     edx, 0x80000000
    L_dd6c:
        shr     edx, cl
        or      dword ptr [eax], edx
    L_dd70:
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebx], eax
        mov     dword ptr [eax + ebx - 0x4], eax
    L_dd79:
        push    0x1
        pop     eax
    L_dd7c:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
