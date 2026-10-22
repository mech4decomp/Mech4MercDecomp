/*
 * FUN_10040d32 (1825 B) - __cdecl. printf-style format-string parser.
 * Jump table at 0x10041453 (just past function end at 0x10041452) - only the
 * dispatch instruction is needed, not the table data.
 *
 * CFLAGS: /O1
 */

extern char g_1004beb8[];
extern char g_1004bed8[];
extern unsigned int g_10051984;
extern unsigned int g_100549a4;
extern unsigned int g_100549a0;
extern int g_10041453[];
extern void *g_10051db8;
extern void *g_10051dc4;
extern void *g_10051dbc;

extern void FUN_10041511(void);
extern void FUN_1004152e(void);
extern void FUN_1004151e(void);
extern void FUN_1004209b(void);
extern void FUN_1003c5f0(void);
extern void FUN_10041473(void);
extern void FUN_100414a8(void);
extern void FUN_100414d9(void);
extern void FUN_100416e0(void);
extern void FUN_10041670(void);

__declspec(naked) void FUN_10040d32(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x248
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        xor     esi, esi
        mov     bl, byte ptr [edi]
        inc     edi
        test    bl, bl
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp + 0xc], edi
        jz      L_1004144b
    L_10040d57:
        mov     ecx, dword ptr [ebp - 0x10]
        xor     edx, edx
        jmp     L_10040d66
    L_10040d5e:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [ebp - 0x30]
        xor     edx, edx
    L_10040d66:
        cmp     dword ptr [ebp - 0x14], edx
        jl      L_1004144b
        cmp     bl, 0x20
        jl      L_10040d87
        cmp     bl, 0x78
        jg      L_10040d87
        movsx   eax, bl
        mov     al, byte ptr [eax + g_1004beb8]
        and     eax, 0xf
        jmp     L_10040d89
    L_10040d87:
        xor     eax, eax
    L_10040d89:
        movsx   eax, byte ptr [esi + eax*0x8 + g_1004bed8]
        sar     eax, 0x4
        cmp     eax, 0x7
        mov     dword ptr [ebp - 0x30], eax
        ja      L_1004143a
        jmp     dword ptr [eax*0x4 + g_10041453]
    L_10040da7:
        or      dword ptr [ebp - 0x10], 0xffffffff
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0x24], edx
        jmp     L_1004143a
    L_10040dc2:
        movsx   eax, bl
        sub     eax, 0x20
        jz      L_10040e05
        sub     eax, 0x3
        jz      L_10040dfc
        sub     eax, 0x8
        jz      L_10040df3
        dec     eax
        dec     eax
        jz      L_10040dea
        sub     eax, 0x3
        jnz     L_1004143a
        or      dword ptr [ebp - 0x4], 0x8
        jmp     L_1004143a
    L_10040dea:
        or      dword ptr [ebp - 0x4], 0x4
        jmp     L_1004143a
    L_10040df3:
        or      dword ptr [ebp - 0x4], 0x1
        jmp     L_1004143a
    L_10040dfc:
        or      byte ptr [ebp - 0x4], 0x80
        jmp     L_1004143a
    L_10040e05:
        or      dword ptr [ebp - 0x4], 0x2
        jmp     L_1004143a
    L_10040e0e:
        cmp     bl, 0x2a
        jnz     L_10040e36
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041511
        test    eax, eax
        pop     ecx
        mov     dword ptr [ebp - 0x20], eax
        jge     L_1004143a
        or      dword ptr [ebp - 0x4], 0x4
        neg     eax
    L_10040e2e:
        mov     dword ptr [ebp - 0x20], eax
        jmp     L_1004143a
    L_10040e36:
        mov     eax, dword ptr [ebp - 0x20]
        movsx   ecx, bl
        lea     eax, [eax + eax*0x4]
        lea     eax, [ecx + eax*0x2 + -0x30]
        jmp     L_10040e2e
    L_10040e45:
        mov     dword ptr [ebp - 0x10], edx
        jmp     L_1004143a
    L_10040e4d:
        cmp     bl, 0x2a
        jnz     L_10040e70
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041511
        test    eax, eax
        pop     ecx
        mov     dword ptr [ebp - 0x10], eax
        jge     L_1004143a
        or      dword ptr [ebp - 0x10], 0xffffffff
        jmp     L_1004143a
    L_10040e70:
        lea     eax, [ecx + ecx*0x4]
        movsx   ecx, bl
        lea     eax, [ecx + eax*0x2 + -0x30]
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_1004143a
    L_10040e82:
        cmp     bl, 0x49
        jz      L_10040eb5
        cmp     bl, 0x68
        jz      L_10040eac
        cmp     bl, 0x6c
        jz      L_10040ea3
        cmp     bl, 0x77
        jnz     L_1004143a
        or      byte ptr [ebp - 0x3], 0x8
        jmp     L_1004143a
    L_10040ea3:
        or      dword ptr [ebp - 0x4], 0x10
        jmp     L_1004143a
    L_10040eac:
        or      dword ptr [ebp - 0x4], 0x20
        jmp     L_1004143a
    L_10040eb5:
        cmp     byte ptr [edi], 0x36
        jnz     L_10040ece
        cmp     byte ptr [edi + 0x1], 0x34
        jnz     L_10040ece
        inc     edi
        inc     edi
        or      byte ptr [ebp - 0x3], 0x80
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_1004143a
    L_10040ece:
        mov     dword ptr [ebp - 0x30], edx
        mov     ecx, dword ptr [g_10051984]
        mov     dword ptr [ebp - 0x24], edx
        movzx   eax, bl
        test    byte ptr [ecx + eax*0x2 + 0x1], 0x80
        jz      L_10040efd
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        movsx   eax, bl
        push    eax
        call    FUN_10041473
        mov     bl, byte ptr [edi]
        add     esp, 0xc
        inc     edi
        mov     dword ptr [ebp + 0xc], edi
    L_10040efd:
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        movsx   eax, bl
        push    eax
        call    FUN_10041473
        add     esp, 0xc
        jmp     L_1004143a
    L_10040f15:
        movsx   eax, bl
        cmp     eax, 0x67
        jg      L_1004113d
        cmp     eax, 0x65
        jge     L_10040fc0
        cmp     eax, 0x58
        jg      L_1004101e
        jz      L_100411b1
        sub     eax, 0x43
        jz      L_10040fe1
        dec     eax
        dec     eax
        jz      L_10040fb6
        dec     eax
        dec     eax
        jz      L_10040fb6
        sub     eax, 0xc
        jnz     L_1004133c
        test    word ptr [ebp - 0x4], 0x830
        jnz     L_10040f5f
        or      byte ptr [ebp - 0x3], 0x8
    L_10040f5f:
        mov     esi, dword ptr [ebp - 0x10]
        cmp     esi, -0x1
        jnz     L_10040f6c
        mov     esi, 0x7fffffff
    L_10040f6c:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041511
        test    word ptr [ebp - 0x4], 0x810
        pop     ecx
        mov     ecx, eax
        mov     dword ptr [ebp - 0x8], ecx
        jz      L_10041185
        test    ecx, ecx
        jnz     L_10040f94
        mov     ecx, dword ptr [g_100549a4]
        mov     dword ptr [ebp - 0x8], ecx
    L_10040f94:
        mov     dword ptr [ebp - 0x24], 0x1
        mov     eax, ecx
    L_10040f9d:
        mov     edx, esi
        dec     esi
        test    edx, edx
        jz      L_1004117c
        cmp     word ptr [eax], 0x0
        jz      L_1004117c
        inc     eax
        inc     eax
        jmp     L_10040f9d
    L_10040fb6:
        mov     dword ptr [ebp - 0x34], 0x1
        add     bl, 0x20
    L_10040fc0:
        or      dword ptr [ebp - 0x4], 0x40
        lea     edi, [ebp + 0xfffffdb8]
        cmp     ecx, edx
        mov     dword ptr [ebp - 0x8], edi
        jge     L_100410a4
        mov     dword ptr [ebp - 0x10], 0x6
        jmp     L_100410b2
    L_10040fe1:
        test    word ptr [ebp - 0x4], 0x830
        jnz     L_10040fed
        or      byte ptr [ebp - 0x3], 0x8
    L_10040fed:
        test    word ptr [ebp - 0x4], 0x810
        lea     eax, [ebp + 0x10]
        push    eax
        jz      L_10041034
        call    FUN_1004152e
        push    eax
        lea     eax, [ebp + 0xfffffdb8]
        push    eax
        call    FUN_1004209b
        add     esp, 0xc
        mov     dword ptr [ebp - 0xc], eax
        test    eax, eax
        jge     L_10041047
        mov     dword ptr [ebp - 0x28], 0x1
        jmp     L_10041047
    L_1004101e:
        sub     eax, 0x5a
        jz      L_10041055
        sub     eax, 0x9
        jz      L_10040fed
        dec     eax
        jz      L_10041217
        jmp     L_1004133c
    L_10041034:
        call    FUN_10041511
        pop     ecx
        mov     byte ptr [ebp + 0xfffffdb8], al
        mov     dword ptr [ebp - 0xc], 0x1
    L_10041047:
        lea     eax, [ebp + 0xfffffdb8]
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_1004133c
    L_10041055:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041511
        test    eax, eax
        pop     ecx
        jz      L_10041096
        mov     ecx, dword ptr [eax + 0x4]
        test    ecx, ecx
        jz      L_10041096
        test    byte ptr [ebp - 0x3], 0x8
        jz      L_10041087
        movsx   eax, word ptr [eax]
        shr     eax, 0x1
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x24], 0x1
        jmp     L_1004133c
    L_10041087:
        and     dword ptr [ebp - 0x24], 0x0
        mov     dword ptr [ebp - 0x8], ecx
        movsx   eax, word ptr [eax]
        jmp     L_10041339
    L_10041096:
        mov     eax, dword ptr [g_100549a0]
        mov     dword ptr [ebp - 0x8], eax
        push    eax
        jmp     L_10041132
    L_100410a4:
        jnz     L_100410b2
        cmp     bl, 0x67
        jnz     L_100410b2
        mov     dword ptr [ebp - 0x10], 0x1
    L_100410b2:
        mov     eax, dword ptr [ebp + 0x10]
        push    dword ptr [ebp - 0x34]
        add     eax, 0x8
        mov     dword ptr [ebp + 0x10], eax
        push    dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax - 0x8]
        mov     dword ptr [ebp - 0x48], ecx
        mov     eax, dword ptr [eax - 0x4]
        mov     dword ptr [ebp - 0x44], eax
        movsx   eax, bl
        push    eax
        lea     eax, [ebp + 0xfffffdb8]
        push    eax
        lea     eax, [ebp - 0x48]
        push    eax
        call    dword ptr [g_10051db8]
        mov     esi, dword ptr [ebp - 0x4]
        add     esp, 0x14
        and     esi, 0x80
        jz      L_10041104
        cmp     dword ptr [ebp - 0x10], 0x0
        jnz     L_10041104
        lea     eax, [ebp + 0xfffffdb8]
        push    eax
        call    dword ptr [g_10051dc4]
        pop     ecx
    L_10041104:
        cmp     bl, 0x67
        jnz     L_1004111b
        test    esi, esi
        jnz     L_1004111b
        lea     eax, [ebp + 0xfffffdb8]
        push    eax
        call    dword ptr [g_10051dbc]
        pop     ecx
    L_1004111b:
        cmp     byte ptr [ebp + 0xfffffdb8], 0x2d
        jnz     L_10041131
        or      byte ptr [ebp - 0x3], 0x1
        lea     edi, [ebp + 0xfffffdb9]
        mov     dword ptr [ebp - 0x8], edi
    L_10041131:
        push    edi
    L_10041132:
        call    FUN_1003c5f0
        pop     ecx
        jmp     L_10041339
    L_1004113d:
        sub     eax, 0x69
        jz      L_10041217
        sub     eax, 0x5
        jz      L_100411ed
        dec     eax
        jz      L_100411da
        dec     eax
        jz      L_100411aa
        sub     eax, 0x3
        jz      L_10040f5f
        dec     eax
        dec     eax
        jz      L_1004121b
        sub     eax, 0x3
        jnz     L_1004133c
        mov     dword ptr [ebp - 0x2c], 0x27
        jmp     L_100411b8
    L_1004117c:
        sub     eax, ecx
        sar     eax, 0x1
        jmp     L_10041339
    L_10041185:
        test    ecx, ecx
        jnz     L_10041192
        mov     ecx, dword ptr [g_100549a0]
        mov     dword ptr [ebp - 0x8], ecx
    L_10041192:
        mov     eax, ecx
    L_10041194:
        mov     edx, esi
        dec     esi
        test    edx, edx
        jz      L_100411a3
        cmp     byte ptr [eax], 0x0
        jz      L_100411a3
        inc     eax
        jmp     L_10041194
    L_100411a3:
        sub     eax, ecx
        jmp     L_10041339
    L_100411aa:
        mov     dword ptr [ebp - 0x10], 0x8
    L_100411b1:
        mov     dword ptr [ebp - 0x2c], 0x7
    L_100411b8:
        test    byte ptr [ebp - 0x4], 0x80
        mov     dword ptr [ebp - 0xc], 0x10
        jz      L_10041222
        mov     al, byte ptr [ebp - 0x2c]
        mov     byte ptr [ebp - 0x16], 0x30
        add     al, 0x51
        mov     dword ptr [ebp - 0x1c], 0x2
        mov     byte ptr [ebp - 0x15], al
        jmp     L_10041222
    L_100411da:
        test    byte ptr [ebp - 0x4], 0x80
        mov     dword ptr [ebp - 0xc], 0x8
        jz      L_10041222
        or      byte ptr [ebp - 0x3], 0x2
        jmp     L_10041222
    L_100411ed:
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_10041511
        test    byte ptr [ebp - 0x4], 0x20
        pop     ecx
        jz      L_10041206
        mov     cx, word ptr [ebp - 0x14]
        mov     word ptr [eax], cx
        jmp     L_1004120b
    L_10041206:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     dword ptr [eax], ecx
    L_1004120b:
        mov     dword ptr [ebp - 0x28], 0x1
        jmp     L_1004143a
    L_10041217:
        or      dword ptr [ebp - 0x4], 0x40
    L_1004121b:
        mov     dword ptr [ebp - 0xc], 0xa
    L_10041222:
        test    byte ptr [ebp - 0x3], 0x80
        jz      L_10041234
        lea     eax, [ebp + 0x10]
        push    eax
        call    FUN_1004151e
        pop     ecx
        jmp     L_10041275
    L_10041234:
        test    byte ptr [ebp - 0x4], 0x20
        jz      L_1004125b
        test    byte ptr [ebp - 0x4], 0x40
        lea     eax, [ebp + 0x10]
        push    eax
        jz      L_10041250
        call    FUN_10041511
        pop     ecx
        movsx   eax, ax
    L_1004124d:
        cdq
        jmp     L_10041275
    L_10041250:
        call    FUN_10041511
        pop     ecx
        movzx   eax, ax
        jmp     L_1004124d
    L_1004125b:
        test    byte ptr [ebp - 0x4], 0x40
        lea     eax, [ebp + 0x10]
        push    eax
        jz      L_1004126d
        call    FUN_10041511
        pop     ecx
        jmp     L_1004124d
    L_1004126d:
        call    FUN_10041511
        pop     ecx
        xor     edx, edx
    L_10041275:
        test    byte ptr [ebp - 0x4], 0x40
        jz      L_10041296
        test    edx, edx
        jg      L_10041296
        jl      L_10041285
        test    eax, eax
        jnc     L_10041296
    L_10041285:
        neg     eax
        adc     edx, 0x0
        mov     esi, eax
        neg     edx
        or      byte ptr [ebp - 0x3], 0x1
        mov     edi, edx
        jmp     L_1004129a
    L_10041296:
        mov     esi, eax
        mov     edi, edx
    L_1004129a:
        test    byte ptr [ebp - 0x3], 0x80
        jnz     L_100412a3
        and     edi, 0x0
    L_100412a3:
        cmp     dword ptr [ebp - 0x10], 0x0
        jge     L_100412b2
        mov     dword ptr [ebp - 0x10], 0x1
        jmp     L_100412b6
    L_100412b2:
        and     dword ptr [ebp - 0x4], 0xfffffff7
    L_100412b6:
        mov     eax, esi
        or      eax, edi
        jnz     L_100412c0
        and     dword ptr [ebp - 0x1c], 0x0
    L_100412c0:
        lea     eax, [ebp - 0x49]
        mov     dword ptr [ebp - 0x8], eax
    L_100412c6:
        mov     eax, dword ptr [ebp - 0x10]
        dec     dword ptr [ebp - 0x10]
        test    eax, eax
        jg      L_100412d6
        mov     eax, esi
        or      eax, edi
        jz      L_10041311
    L_100412d6:
        mov     eax, dword ptr [ebp - 0xc]
        cdq
        push    edx
        push    eax
        push    edi
        push    esi
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], edx
        call    FUN_100416e0
        push    dword ptr [ebp - 0x3c]
        mov     ebx, eax
        add     ebx, 0x30
        push    dword ptr [ebp - 0x40]
        push    edi
        push    esi
        call    FUN_10041670
        cmp     ebx, 0x39
        mov     esi, eax
        mov     edi, edx
        jle     L_10041307
        add     ebx, dword ptr [ebp - 0x2c]
    L_10041307:
        mov     eax, dword ptr [ebp - 0x8]
        dec     dword ptr [ebp - 0x8]
        mov     byte ptr [eax], bl
        jmp     L_100412c6
    L_10041311:
        lea     eax, [ebp - 0x49]
        sub     eax, dword ptr [ebp - 0x8]
        inc     dword ptr [ebp - 0x8]
        test    byte ptr [ebp - 0x3], 0x2
        mov     dword ptr [ebp - 0xc], eax
        jz      L_1004133c
        mov     ecx, dword ptr [ebp - 0x8]
        cmp     byte ptr [ecx], 0x30
        jnz     L_1004132f
        test    eax, eax
        jnz     L_1004133c
    L_1004132f:
        dec     dword ptr [ebp - 0x8]
        inc     eax
        mov     ecx, dword ptr [ebp - 0x8]
        mov     byte ptr [ecx], 0x30
    L_10041339:
        mov     dword ptr [ebp - 0xc], eax
    L_1004133c:
        cmp     dword ptr [ebp - 0x28], 0x0
        jnz     L_1004143a
        mov     ebx, dword ptr [ebp - 0x4]
        test    bl, 0x40
        jz      L_10041374
        test    bh, 0x1
        jz      L_10041359
        mov     byte ptr [ebp - 0x16], 0x2d
        jmp     L_1004136d
    L_10041359:
        test    bl, 0x1
        jz      L_10041364
        mov     byte ptr [ebp - 0x16], 0x2b
        jmp     L_1004136d
    L_10041364:
        test    bl, 0x2
        jz      L_10041374
        mov     byte ptr [ebp - 0x16], 0x20
    L_1004136d:
        mov     dword ptr [ebp - 0x1c], 0x1
    L_10041374:
        mov     esi, dword ptr [ebp - 0x20]
        sub     esi, dword ptr [ebp - 0x1c]
        sub     esi, dword ptr [ebp - 0xc]
        test    bl, 0xc
        jnz     L_10041394
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x20
        call    FUN_100414a8
        add     esp, 0x10
    L_10041394:
        lea     eax, [ebp - 0x14]
        push    eax
        lea     eax, [ebp - 0x16]
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0x1c]
        push    eax
        call    FUN_100414d9
        add     esp, 0x10
        test    bl, 0x8
        jz      L_100413c6
        test    bl, 0x4
        jnz     L_100413c6
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x30
        call    FUN_100414a8
        add     esp, 0x10
    L_100413c6:
        cmp     dword ptr [ebp - 0x24], 0x0
        jz      L_1004140d
        cmp     dword ptr [ebp - 0xc], 0x0
        jle     L_1004140d
        mov     eax, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp - 0x8]
        lea     edi, [eax - 0x1]
    L_100413db:
        mov     ax, word ptr [ebx]
        inc     ebx
        push    eax
        lea     eax, [ebp - 0x38]
        push    eax
        inc     ebx
        call    FUN_1004209b
        pop     ecx
        test    eax, eax
        pop     ecx
        jle     L_10041422
        lea     ecx, [ebp - 0x14]
        push    ecx
        push    dword ptr [ebp + 0x8]
        push    eax
        lea     eax, [ebp - 0x38]
        push    eax
        call    FUN_100414d9
        add     esp, 0x10
        mov     eax, edi
        dec     edi
        test    eax, eax
        jnz     L_100413db
        jmp     L_10041422
    L_1004140d:
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp - 0xc]
        push    dword ptr [ebp - 0x8]
        call    FUN_100414d9
        add     esp, 0x10
    L_10041422:
        test    byte ptr [ebp - 0x4], 0x4
        jz      L_1004143a
        lea     eax, [ebp - 0x14]
        push    eax
        push    dword ptr [ebp + 0x8]
        push    esi
        push    0x20
        call    FUN_100414a8
        add     esp, 0x10
    L_1004143a:
        mov     edi, dword ptr [ebp + 0xc]
        mov     bl, byte ptr [edi]
        inc     edi
        test    bl, bl
        mov     dword ptr [ebp + 0xc], edi
        jnz     L_10040d5e
    L_1004144b:
        mov     eax, dword ptr [ebp - 0x14]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
