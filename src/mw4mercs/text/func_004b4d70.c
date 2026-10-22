/*
 * FUN_004b4d70 (1831 B) — __thiscall. MLR LOD manager setup/update. Reads
 * a LOD count from the stream (param_1), allocates/resizes the LOD slot
 * arrays at [this+0x144] (dword array, count at +0x148) and [this+0x150]
 * (16-byte array, count at +0x154), populates them via stream virtual
 * calls, and sets up per-LOD objects via FUN_004c6920. Sets vtable
 * 0x77071c and a table-derived value at [this+0x13c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa04;
extern int g_007b3480[];
extern float g_0076c5b0;
extern float g_007daac8;
extern void __cdecl FUN_004bede0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c6920(void);

__declspec(naked) void FUN_004b4d70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        xor     ebp, ebp
        push    ebp
        push    eax
        push    ebx
        mov     edi, ecx
        mov     ecx, dword ptr [g_007daa04]
        push    esi
        push    ecx
        mov     ecx, edi
        call    FUN_004bede0
        mov     edx, dword ptr [edi + 0x18]
        shr     edx, 0xa
        and     edx, 0x1
        cmp     ebx, 0xd
        mov     eax, dword ptr [edx*4 + g_007b3480]
        mov     dword ptr [edi + 0x150], ebp
        mov     dword ptr [edi + 0x154], ebp
        mov     dword ptr [edi], 0x77071c
        mov     dword ptr [edi + 0x13c], eax
        jge     L_5055
        cmp     ebx, 0xb
        jl      L_4de1
        mov     edx, dword ptr [esi]
        push    0x2
        lea     ebx, [edi + 0x14c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        jmp     L_4dfd
    L_4de1:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     dx, word ptr [esp + 0x24]
        lea     ebx, [edi + 0x14c]
        mov     word ptr [ebx], dx
    L_4dfd:
        mov     bx, word ptr [ebx]
        mov     eax, dword ptr [edi + 0x148]
        mov     dword ptr [esp + 0x1c], ebx
        and     ebx, 0xffff
        cmp     ebx, eax
        jz      L_4e87
        cmp     ebx, ebp
        jbe     L_4e6c
        lea     eax, [ebx*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x144]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        mov     dword ptr [esp + 0x24], ebp
        jz      L_4e7b
        mov     ecx, dword ptr [edi + 0x148]
        cmp     ebx, ecx
        jnc     L_4e44
        mov     ecx, ebx
    L_4e44:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_4e63
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
    L_4e52:
        mov     ebp, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_4e52
        mov     ebp, dword ptr [esp + 0x24]
    L_4e63:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        jmp     L_4e73
    L_4e6c:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
    L_4e73:
        call    FUN_004084e0
        add     esp, 0x4
    L_4e7b:
        mov     dword ptr [edi + 0x144], ebp
        mov     dword ptr [edi + 0x148], ebx
    L_4e87:
        xor     ebp, ebp
        cmp     word ptr [esp + 0x1c], bp
        jbe     L_4f1b
    L_4e94:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edi + 0x144]
        push    0x0
        mov     edx, ebp
        push    ecx
        and     edx, 0xffff
        push    esi
        lea     ebx, [eax + edx*4]
        call    FUN_004c6920
        mov     dword ptr [ebx], eax
        mov     ebx, eax
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, ecx
        and     edx, 0xc0
        add     esp, 0xc
        cmp     dl, 0xc0
        mov     dword ptr [ebx + 0x10], edi
        jz      L_4f0d
        fld     dword ptr [ebx + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_4ef3
        mov     eax, ecx
        shr     eax, 0x3
        test    al, 0x1
        jnz     L_4ef3
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_4efc
    L_4ef3:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
    L_4efc:
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
    L_4f0d:
        inc     ebp
        cmp     bp, word ptr [edi + 0x14c]
        jc      L_4e94
    L_4f1b:
        mov     ebp, dword ptr [edi + 0x148]
        mov     eax, dword ptr [edi + 0x154]
        mov     ebx, ebp
        and     ebx, 0xffff
        cmp     ebx, eax
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x20], ebx
        jz      L_4ff0
        test    ebx, ebx
        jbe     L_4fd1
        mov     ecx, ebx
        shl     ecx, 0x4
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x150]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_4fc5
        mov     ecx, dword ptr [edi + 0x154]
        cmp     ebx, ecx
        jnc     L_4f71
        mov     ecx, ebx
    L_4f71:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_4fb6
        mov     eax, ecx
        shl     eax, 0x4
        sub     edx, ebp
        add     eax, ebp
        mov     dword ptr [esp + 0x24], edx
        inc     ecx
        jmp     L_4f8c
    L_4f88:
        mov     edx, dword ptr [esp + 0x24]
    L_4f8c:
        add     edx, eax
        mov     ebp, dword ptr [edx]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        dec     ecx
        mov     dword ptr [ebx + 0x8], ebp
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [ebx + 0xc], edx
        ja      L_4f88
        mov     ebx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x1c]
    L_4fb6:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_4fc5:
        mov     dword ptr [edi + 0x150], ebp
        mov     ebp, dword ptr [esp + 0x10]
        jmp     L_4fea
    L_4fd1:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x150], 0x0
    L_4fea:
        mov     dword ptr [edi + 0x154], ebx
    L_4ff0:
        test    bp, bp
        jbe     L_548b
        mov     ebp, dword ptr [edi + 0x150]
        mov     ecx, dword ptr [esp + 0x20]
        lea     ebx, [ebp + 0x8]
        mov     dword ptr [esp + 0x20], ecx
    L_500a:
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebx - 0x4]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebx + 0x4]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        add     ebp, 0x10
        add     ebx, 0x10
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jnz     L_500a
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    L_5055:
        mov     edx, dword ptr [esi]
        push    0x2
        lea     ebx, [edi + 0x14c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [edi + 0x148]
        xor     ebp, ebp
        mov     bp, word ptr [ebx]
        mov     ebx, ebp
        and     ebx, 0xffff
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], ebx
        jz      L_5116
        test    ebx, ebx
        jbe     L_50f7
        lea     eax, [ebx*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x144]
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [esp + 0x24], eax
        jz      L_50eb
        mov     ecx, dword ptr [edi + 0x148]
        cmp     ebx, ecx
        jnc     L_50b2
        mov     ecx, ebx
    L_50b2:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_50dc
        sub     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x24]
        lea     eax, [eax + ecx*4]
        mov     dword ptr [esp + 0x1c], edx
        inc     ecx
        jmp     L_50cf
    L_50cb:
        mov     edx, dword ptr [esp + 0x1c]
    L_50cf:
        mov     edx, dword ptr [edx + eax*1]
        mov     dword ptr [eax], edx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_50cb
    L_50dc:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_50eb:
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [edi + 0x144], eax
        jmp     L_5110
    L_50f7:
        mov     ecx, dword ptr [edi + 0x144]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x144], 0x0
    L_5110:
        mov     dword ptr [edi + 0x148], ebx
    L_5116:
        cmp     ebx, dword ptr [edi + 0x154]
        jz      L_51dd
        test    ebx, ebx
        jbe     L_51be
        mov     edx, ebx
        shl     edx, 0x4
        push    edx
        call    FUN_004084d0
        mov     ecx, dword ptr [edi + 0x150]
        add     esp, 0x4
        test    ecx, ecx
        mov     dword ptr [esp + 0x1c], eax
        jz      L_51b2
        mov     edx, dword ptr [edi + 0x154]
        cmp     ebx, edx
        jnc     L_5152
        mov     edx, ebx
    L_5152:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_51a3
        mov     ebx, dword ptr [esp + 0x1c]
        mov     eax, edx
        shl     eax, 0x4
        sub     ecx, ebx
        add     eax, ebx
        inc     edx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x24], edx
        jmp     L_5175
    L_5171:
        mov     ecx, dword ptr [esp + 0x10]
    L_5175:
        add     ecx, eax
        mov     ebx, dword ptr [ecx]
        mov     edx, eax
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebx
        mov     ebx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0x8], ebx
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x24]
        dec     ecx
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [esp + 0x24], ecx
        ja      L_5171
        mov     ebx, dword ptr [esp + 0x14]
    L_51a3:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_51b2:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x150], edx
        jmp     L_51d7
    L_51be:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x150], 0x0
    L_51d7:
        mov     dword ptr [edi + 0x154], ebx
    L_51dd:
        xor     eax, eax
        cmp     bp, ax
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_5332
    L_51f0:
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [edi + 0x150]
        mov     edx, dword ptr [esi]
        and     eax, 0xffff
        mov     dword ptr [esp + 0x10], eax
        shl     eax, 0x4
        lea     ebx, [eax + ecx*1]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebx + 0x4]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebx + 0x8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        add     ebx, 0xc
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        and     ebp, 0xffff
        dec     ebp
        and     edx, 0xffff
        cmp     edx, ebp
        jge     L_527d
        fld     dword ptr [g_007daac8]
        fcomp   dword ptr [ebx]
        fnstsw  ax
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_527d
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        jmp     L_5319
    L_527d:
        cmp     word ptr [esp + 0x24], 0x0
        jnz     L_52a0
        cmp     word ptr [esp + 0x1c], 0x0
        jbe     L_52a0
        mov     eax, dword ptr [edi + 0x150]
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
    L_52a0:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [edi + 0x144]
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    ecx
        push    esi
        lea     ebx, [edx + eax*4]
        call    FUN_004c6920
        mov     dword ptr [ebx], eax
        mov     ebx, eax
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, ecx
        and     edx, 0xc0
        add     esp, 0xc
        cmp     dl, 0xc0
        mov     dword ptr [ebx + 0x10], edi
        jz      L_5315
        fld     dword ptr [ebx + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        __emit 0xF6 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L_52fb
        mov     eax, ecx
        shr     eax, 0x3
        test    al, 0x1
        jnz     L_52fb
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_5304
    L_52fb:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
    L_5304:
        mov     edx, dword ptr [ebx]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
    L_5315:
        inc     dword ptr [esp + 0x24]
    L_5319:
        mov     eax, dword ptr [esp + 0x1c]
        mov     bp, word ptr [edi + 0x14c]
        inc     eax
        cmp     ax, bp
        mov     dword ptr [esp + 0x1c], eax
        jc      L_51f0
    L_5332:
        mov     esi, dword ptr [esp + 0x24]
        cmp     si, word ptr [edi + 0x14c]
        jnc     L_548b
        mov     ebp, dword ptr [edi + 0x148]
        and     esi, 0xffff
        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], esi
        jz      L_53d5
        test    esi, esi
        jbe     L_53b6
        lea     ecx, [esi*4]
        push    ecx
        call    FUN_004084d0
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x144]
        add     esp, 0x4
        test    eax, eax
        jz      L_53ae
        cmp     esi, ebp
        mov     ecx, esi
        jc      L_537f
        mov     ecx, ebp
    L_537f:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_539f
        mov     edx, dword ptr [edi + 0x144]
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
    L_5392:
        mov     ebp, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_5392
    L_539f:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_53ae:
        mov     dword ptr [edi + 0x144], ebx
        jmp     L_53cf
    L_53b6:
        mov     eax, dword ptr [edi + 0x144]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x144], 0x0
    L_53cf:
        mov     dword ptr [edi + 0x148], esi
    L_53d5:
        mov     ebx, dword ptr [edi + 0x154]
        cmp     esi, ebx
        jz      L_547f
        test    esi, esi
        jbe     L_5460
        mov     ecx, esi
        shl     ecx, 0x4
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x150]
        add     esp, 0x4
        test    edx, edx
        mov     ebp, eax
        mov     dword ptr [esp + 0x20], ebp
        jz      L_5458
        cmp     esi, ebx
        mov     ecx, esi
        jc      L_540d
        mov     ecx, ebx
    L_540d:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_5449
        mov     eax, ecx
        shl     eax, 0x4
        add     eax, ebp
        sub     edx, ebp
        inc     ecx
        lea     esi, [edx + eax*1]
    L_541e:
        mov     ebp, dword ptr [esi]
        mov     ebx, eax
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [esi + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [esi + 0x8]
        mov     esi, dword ptr [esi + 0xc]
        dec     ecx
        mov     dword ptr [ebx + 0x8], ebp
        sub     eax, 0x10
        test    ecx, ecx
        mov     dword ptr [ebx + 0xc], esi
        __emit 0x77 /* __emit: MSVC6 miscomputes backward ja rel8 (0xE0 vs ref 0xDD) */
        __emit 0xDD
        mov     esi, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [esp + 0x20]
    L_5449:
        mov     eax, dword ptr [edi + 0x150]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_5458:
        mov     dword ptr [edi + 0x150], ebp
        jmp     L_5479
    L_5460:
        mov     ecx, dword ptr [edi + 0x150]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x150], 0x0
    L_5479:
        mov     dword ptr [edi + 0x154], esi
    L_547f:
        mov     dx, word ptr [esp + 0x24]
        mov     word ptr [edi + 0x14c], dx
    L_548b:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
