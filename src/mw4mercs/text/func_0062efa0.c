/*
 * FUN_0062EFA0 (1352 B) — __cdecl, RET 0 (5 args). GameData setter with a
 * large switch dispatch (jump table at 0x0062f4e8, outside the function's
 * byte range) validating/formatting per-key values. Case handlers are laid
 * out in a non-numeric order; the jump table maps cases to handlers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00507b30(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern int *g_76b424;   /* IAT 0x0076b424 (_snprintf) */

extern unsigned short _DAT_007db0ac;  /* 0x007db0ac */
extern unsigned short _DAT_007db0ae;  /* 0x007db0ae */
extern float  _DAT_0076c5b0;          /* 0x0076c5b0 */
extern int DAT_0062f4e8;              /* jump table base 0x0062f4e8 */

__declspec(naked) void __cdecl FUN_0062efa0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc
        mov     eax, dword ptr [ebp + 0x10]
        mov     cl, byte ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        test    cl, cl
        mov     ecx, dword ptr [ebp + 0x14]
        push    edi
        push    ecx
        push    eax
        push    ebx
        push    esi
        setnz   byte ptr [esp + 0x27]
        call    FUN_00507b30
        mov     byte ptr [esp + 0x26], al
        mov     eax, dword ptr [ebx + 0x10]
        add     eax, -0xd
        add     esp, 0x14
        cmp     eax, 0x10
        ja      l_62f4dd
        jmp     dword ptr [eax*4 + DAT_0062f4e8]
l_62efeb:   /* case 0xe */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     ax, word ptr [_DAT_007db0ae]
        mov     dx, word ptr [_DAT_007db0ac]
        mov     word ptr [esp + 0x16], ax
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x18], dx
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f02b:   /* case 0xd */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [ebx]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f06c:   /* case 0x10 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     ax, word ptr [_DAT_007db0ae]
        mov     dx, word ptr [_DAT_007db0ac]
        mov     word ptr [esp + 0x16], ax
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x18], dx
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f0ac:   /* case 0xf */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [ebx]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f0ed:   /* case 0x11 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f10f
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f10f:
        fld     dword ptr [esi + 0x6c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_62f4dd
        fld     dword ptr [esi + 0x6c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d400
        jmp     l_62f476
l_62f136:   /* case 0x12 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f158
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x43fa0000
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f158:
        fld     dword ptr [esi + 0x70]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_62f4dd
        fld     dword ptr [esi + 0x70]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d3c8
        push    edi
        push    eax
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x26], 0x0
        mov     al, byte ptr [esp + 0x26]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f19a:   /* case 0x13 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        push    0x100
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 0x4
        mov     edi, 0x77d12c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], edx
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     byte ptr [esp + 0x16], 0x1
        call    FUN_004084e0
        mov     al, byte ptr [esp + 0x16]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f204:   /* case 0x14 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     ax, word ptr [_DAT_007db0ac]
        mov     cx, word ptr [_DAT_007db0ae]
        mov     edx, dword ptr [ebx]
        mov     word ptr [esp + 0x14], ax
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x1a], cx
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f244:   /* case 0x15 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f266
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f266:
        fld     dword ptr [esi + 0x7c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_62f4dd
        fld     dword ptr [esi + 0x7c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d390
        jmp     l_62f476
l_62f28d:   /* case 0x16 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f2af
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f2af:
        fld     dword ptr [esi + 0x80]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_62f4dd
        fld     dword ptr [esi + 0x80]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d358
        push    edi
        push    eax
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x26], 0x0
        mov     al, byte ptr [esp + 0x26]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f2f7:   /* case 0x17 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f319
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f319:
        mov     esi, dword ptr [esi + 0x74]
        test    esi, esi
        jge     l_62f4dd
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    esi
        push    0x78d320
        push    edi
        push    edx
        jmp     l_62f4cf
l_62f336:   /* case 0x18 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f358
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x0
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f358:
        mov     esi, dword ptr [esi + 0x78]
        test    esi, esi
        jge     l_62f4dd
        push    esi
        push    0x78d2e8
        jmp     l_62f4c8
l_62f36e:   /* case 0x19 */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [ebx]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f3af:   /* case 0x1d */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     ax, word ptr [_DAT_007db0ae]
        mov     dx, word ptr [_DAT_007db0ac]
        mov     word ptr [esp + 0x16], ax
        lea     eax, [esp + 0x14]
        push    eax
        mov     word ptr [esp + 0x18], dx
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f3ef:   /* case 0x1b */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4dd
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [ebx]
        mov     word ptr [esp + 0x14], cx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     word ptr [esp + 0x1e], dx
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f430:   /* case 0x1a */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f452
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x14]
        push    eax
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x3f800000
        call    dword ptr [edx + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f452:
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_62f4dd
        fld     dword ptr [esi + 0x84]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x78d2b0
l_62f476:
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [g_76b424]
        mov     byte ptr [esp + 0x26], 0x0
        mov     al, byte ptr [esp + 0x26]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_62f496:   /* case 0x1c */
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     l_62f4b8
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], 0x1f4
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x12], 0x1
l_62f4b8:
        mov     esi, dword ptr [esi + 0x298]
        test    esi, esi
        jge     l_62f4dd
        push    esi
        push    0x78d280
l_62f4c8:
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    edi
        push    eax
l_62f4cf:
        call    dword ptr [g_76b424]
        add     esp, 0x10
        mov     byte ptr [esp + 0x12], 0x0
l_62f4dd:
        mov     al, byte ptr [esp + 0x12]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
