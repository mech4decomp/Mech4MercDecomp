/*
 * FUN_0051EECC (528 B) — __stdcall (RET 0xc, 3 stack params).
 *
 * In-.text data block at 0x51EECC. This function: validates an index
 * (0..0xff), looks up an obfuscated table entry (base 0x7dab44/0x7dab40,
 * XOR key 0x85739531), calls FUN_004CDFA0, then dispatches on a per-entry
 * sub-type (0..3) via an in-.text jump table at 0x51F0DC, building a
 * string result into a buffer. The jump table DATA (0x51F0DC-0x51F0EB)
 * lies just past this slice and is transcribed separately.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* DAT_007dab44 */
extern int g_7dab40;   /* DAT_007dab40 */

extern void __cdecl FUN_004CDFA0(void);
extern void __cdecl FUN_006F4230(void);
extern void __cdecl FUN_006F3C80(void);

__declspec(naked) void __cdecl FUN_0051EECC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax]
        test    esi, esi
        jge     L51eee7
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        ret     0xc
L51eee7:
        cmp     esi, 0xff
        jl      L51eef7
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        ret     0xc
L51eef7:
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        test    eax, eax
        jne     L51ef1e
        pop     edi
        pop     esi
        pop     ebp
        ret     0xc
L51ef1e:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        mov     ebp, dword ptr [g_7dab40]
        mov     ecx, esi
        shl     ecx, 7
        xor     eax, ebp
        mov     eax, dword ptr [eax + 0xc]
        add     ecx, esi
        shl     ecx, 3
        xor     eax, 0x85739531
        sub     ecx, esi
        lea     esi, [eax + ecx*8]
        mov     eax, dword ptr [esi + 0x358c]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jne     L51ef59
        pop     edi
        pop     esi
        pop     ebp
        ret     0xc
L51ef59:
        mov     edi, dword ptr [edi + 4]
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L51ef68
        push    eax
        call    FUN_006F4230
L51ef68:
        push    ebx
        push    0
        push    0x80
        call    FUN_006F3C80
        mov     esi, dword ptr [esi + 0x3590]
        mov     ebx, eax
        lea     eax, [esi - 1]
        cmp     eax, 3
        mov     dword ptr [edi], ebx
        ja      L51f00f
        /* __emit: FF 24 85 [eax*4+imm32] jump-table dispatch; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xDC
        __emit 0xF0
        __emit 0x51
        __emit 0x00
L51ef92:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x13ec
        jmp     L51f02c
L51efb2:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x13ed
        jmp     L51f02c
L51efd1:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x13ee
        jmp     L51f02c
L51eff0:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x13ef
        jmp     L51f02c
L51f00f:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x13f0
L51f02c:
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     ebp, eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x13f1
        call    dword ptr [eax + 0x34]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        add     ebp, ebx
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        mov     edi, dword ptr [esp + 0x1c]
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        add     edx, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        pop     ebx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebp
        ret     0xc
        nop
    }
}
