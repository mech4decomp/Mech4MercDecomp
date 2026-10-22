/*
 * FUN_005313d0 (2854 B) — __fastcall(this) terrain/tile subsystem initializer.
 * Clears cached string pointers, allocates a 0x100-byte name buffer, then
 * walks several tables (0x40a4c / 0x40a50 / 0x40c54 / 0x40cf8 / 0x40cfc
 * offsets off the global at 0x7dd268) building string entries via
 * FUN_00622910/FUN_00622930 and sorting them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dd268;
extern int g_007dab40;
extern int g_007dab44;

extern void __cdecl FUN_00601cc0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00545660(void);
extern void __cdecl FUN_00622930(void);
extern void __cdecl FUN_00621aa0(void);
extern void __cdecl FUN_00624490(void);
extern void __cdecl FUN_00624420(void);
extern void __cdecl FUN_00622910(void);

__declspec(naked) void FUN_005313d0(void)
{
    __asm {
        sub     esp, 0x430
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     al, byte ptr [ebp+0x350c]
        test    al, al
        push    esi
        push    edi
        mov     dword ptr [esp+0x2c], ebp
        jnz     L_EEB
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x20]
        xor     ecx, 0x85739531
        call    FUN_00601cc0
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax+0x40a4c]
        xor     edi, edi
        mov     byte ptr [ebp+0x350c], 1
        xor     esi, esi
L_141F:
        mov     edx, dword ptr [esi+ecx]
        cmp     edx, edi
        jz      L_143D
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax+0x40a4c]
        add     esp, 4
        mov     dword ptr [esi+ecx], edi
L_143D:
        add     esi, 4
        cmp     esi, 0x80
        jl      L_141F
        mov     ecx, dword ptr [eax+0x40cfc]
        cmp     ecx, edi
        jz      L_1466
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dd268]
        add     esp, 4
        mov     dword ptr [eax+0x40cfc], edi
L_1466:
        mov     cl, byte ptr [ebp+0x16]
        mov     dword ptr [eax+0x40a50], edi
        mov     edx, dword ptr [eax+0x5c]
        mov     edi, dword ptr [g_007dab40]
        inc     edx
        mov     dword ptr [eax+0x5c], edx
        mov     edx, dword ptr [g_007dab44]
        test    cl, cl
        mov     ecx, dword ptr [edx]
        jz      L_1498
        xor     ecx, edi
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        mov     ebx, dword ptr [edx+0x50]
        jmp     L_14A6
L_1498:
        xor     ecx, edi
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        mov     ebx, dword ptr [edx+0x54]
L_14A6:
        mov     ecx, dword ptr [ebx+0xa4]
        push    0x100
        mov     dword ptr [eax+0x40cf8], ecx
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     eax, dword ptr [g_007dd268]
        mov     dword ptr [eax+0x40cfc], edx
        xor     eax, eax
        add     esp, 4
        lea     edi, [ebx+0x3f8]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [ebx+0xe4]
        mov     eax, dword ptr [g_007dab44]
        mov     esi, dword ptr [g_007dab40]
        mov     dword ptr [edx+0x40c54], ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edx+0x40c54]
        xor     ecx, esi
        mov     esi, dword ptr [ecx+0x20]
        xor     esi, 0x85739531
        test    eax, eax
        mov     dword ptr [esp+0x30], esi
        jz      L_1B06
        mov     ebx, 0x40c58
        or      edi, 0xffffffff
        mov     dword ptr [esp+0x28], 0
        mov     dword ptr [esp+0x18], ebx
        mov     dword ptr [esp+0x3c], edi
        jmp     L_1549
L_1545:
        mov     esi, dword ptr [esp+0x30]
L_1549:
        mov     dword ptr [ebx+edx], 0
        mov     edx, dword ptr [esp+0x28]
        push    edx
        mov     ecx, ebp
        call    FUN_00545660
        test    al, al
        jz      L_1AFE
        mov     esi, dword ptr [esi+0x225c]
        push    edi
        push    0x2b
        mov     ecx, esi
        call    FUN_00622930
        mov     ecx, dword ptr [g_007dd268]
        push    edi
        mov     dword ptr [ebx+ecx+0x20], eax
        push    2
        mov     ecx, esi
        call    FUN_00622930
        mov     edx, dword ptr [g_007dd268]
        push    edi
        push    8
        mov     ecx, esi
        mov     dword ptr [ebx+edx+0x40], eax
        call    FUN_00622930
        mov     edx, dword ptr [g_007dd268]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ebx+edx+0x60], eax
        mov     eax, dword ptr [esi+4]
        xor     ebp, ebp
        sub     eax, edi
        test    eax, 0xfffffffc
        mov     dword ptr [esp+0x10], ebp
        jle     L_1606
L_15BA:
        push    ebp
        mov     ecx, esi
        call    FUN_00621aa0
        mov     edi, eax
        test    edi, edi
        jz      L_15F3
        cmp     dword ptr [edi+4], 0x34
        jnz     L_15F3
        mov     eax, dword ptr [edi+8]
        test    eax, eax
        jnz     L_15F3
        mov     ecx, edi
        call    FUN_00624490
        cmp     eax, dword ptr [esp+0x28]
        jnz     L_15F3
        mov     ecx, edi
        call    FUN_00624420
        cmp     eax, dword ptr [esp+0x10]
        jle     L_15F3
        mov     dword ptr [esp+0x10], eax
L_15F3:
        mov     ecx, dword ptr [esi+4]
        sub     ecx, dword ptr [esi]
        inc     ebp
        sar     ecx, 2
        cmp     ebp, ecx
        jl      L_15BA
        mov     edx, dword ptr [g_007dd268]
L_1606:
        mov     ecx, dword ptr [esp+0x2c]
        mov     eax, dword ptr [esp+0x10]
        lea     ebp, [ecx+0x3584]
        mov     dword ptr [ebx+edx+0x80], eax
        mov     dword ptr [esp+0x10], ebp
        mov     dword ptr [esp+0x14], 0xff
L_1627:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_1747
        mov     ecx, dword ptr [eax+0x170]
        test    ecx, ecx
        jz      L_1747
        mov     eax, dword ptr [esp+0x28]
        cmp     dword ptr [ebp-0x3c], eax
        jnz     L_1747
        mov     edi, dword ptr [ebp+4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        mov     esi, dword ptr [ecx+0x40a4c]
        mov     dword ptr [esi+edx*4], eax
        mov     edx, dword ptr [ecx+0x40a50]
        mov     edi, dword ptr [ebp+4]
        mov     dword ptr [esp+0x20], edx
        mov     edx, dword ptr [ecx+0x40a4c]
        or      ecx, 0xffffffff
        add     esp, 4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp+0x1c]
        mov     edi, dword ptr [edx+edi*4]
        mov     edx, dword ptr [esp+0x30]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        mov     esi, dword ptr [ecx+0x170]
        mov     edi, dword ptr [edx+0x225c]
        add     esi, 0x14
        push    esi
        push    0x2b
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40a54], eax
        push    0x34
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40ad4], eax
        push    2
        mov     ecx, edi
        call    FUN_00622910
        mov     ebp, dword ptr [g_007dd268]
        mov     ecx, dword ptr [ebp+0x40a50]
        mov     dword ptr [ebp+ecx*4+0x40b54], eax
        push    esi
        push    8
        mov     ecx, edi
        add     ebp, 0x40a50
        call    FUN_00622910
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [g_007dd268]
        mov     dword ptr [edx+ecx*4+0x40bd4], eax
        inc     dword ptr [ebp]
        mov     eax, dword ptr [ebx+edx]
        mov     ebp, dword ptr [esp+0x10]
        inc     eax
        mov     dword ptr [ebx+edx], eax
L_1747:
        mov     eax, dword ptr [esp+0x14]
        add     ebp, 0x2038
        dec     eax
        mov     dword ptr [esp+0x10], ebp
        mov     dword ptr [esp+0x14], eax
        jnz     L_1627
        mov     eax, dword ptr [esp+0x2c]
        lea     ebp, [eax+0x205d30]
        mov     dword ptr [esp+0x10], ebp
        mov     dword ptr [esp+0x14], 0x18
L_1776:
        cmp     dword ptr [ebp], 0
        jz      L_18A1
        mov     al, byte ptr [ebp+0x204]
        test    al, al
        jz      L_18A1
        mov     al, byte ptr [ebp+0x205]
        test    al, al
        jz      L_18A1
        mov     ecx, dword ptr [esp+0x28]
        cmp     dword ptr [ebp+0x208], ecx
        jnz     L_18A1
        lea     esi, [ebp+4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        mov     edi, dword ptr [ecx+0x40a4c]
        mov     dword ptr [edi+edx*4], eax
        mov     edx, dword ptr [ecx+0x40a50]
        mov     edi, esi
        mov     dword ptr [esp+0x20], edx
        mov     edx, dword ptr [ecx+0x40a4c]
        or      ecx, 0xffffffff
        add     esp, 4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [esp+0x1c]
        mov     edi, dword ptr [edx+edi*4]
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [esp+0x30]
        mov     edi, dword ptr [ecx+0x225c]
        add     esi, 0x14
        push    esi
        push    0x2b
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40a54], eax
        push    0x34
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40ad4], eax
        push    2
        mov     ecx, edi
        call    FUN_00622910
        mov     ebp, dword ptr [g_007dd268]
        mov     ecx, dword ptr [ebp+0x40a50]
        mov     dword ptr [ebp+ecx*4+0x40b54], eax
        push    esi
        push    8
        mov     ecx, edi
        add     ebp, 0x40a50
        call    FUN_00622910
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [g_007dd268]
        mov     dword ptr [edx+ecx*4+0x40bd4], eax
        inc     dword ptr [ebp]
        mov     eax, dword ptr [ebx+edx]
        mov     ebp, dword ptr [esp+0x10]
        inc     eax
        mov     dword ptr [ebx+edx], eax
L_18A1:
        mov     eax, dword ptr [esp+0x14]
        add     ebp, 0x22ac
        dec     eax
        mov     dword ptr [esp+0x10], ebp
        mov     dword ptr [esp+0x14], eax
        jnz     L_1776
        mov     eax, dword ptr [edx+0x40a50]
        mov     esi, dword ptr [ebx+edx]
        mov     ebp, eax
        sub     ebp, esi
        cmp     ebp, eax
        mov     dword ptr [esp+0x14], ebp
        jge     L_1AD2
        lea     ebx, [ebp*4+0x40b54]
L_18DA:
        cmp     ebp, dword ptr [edx+0x40a50]
        mov     dword ptr [esp+0x10], ebp
        jge     L_1AB8
        lea     eax, [ebx+edx-0x80]
        mov     edi, 0xfffbf52c
        lea     ecx, [ebx+0xfffbf4ac]
        mov     dword ptr [esp+0x20], eax
        sub     edi, edx
L_18FF:
        mov     esi, dword ptr [eax]
        cmp     dword ptr [ecx+edx+0x40ad4], esi
        jl      L_1918
        jnz     L_191F
        mov     esi, dword ptr [ecx+edx+0x40a54]
        cmp     esi, dword ptr [eax-0x80]
        jge     L_191F
L_1918:
        mov     ebp, dword ptr [esp+0x10]
        lea     ecx, [edi+eax]
L_191F:
        inc     dword ptr [esp+0x10]
        mov     esi, dword ptr [edx+0x40a50]
        add     eax, 4
        cmp     dword ptr [esp+0x10], esi
        jl      L_18FF
        cmp     ebp, dword ptr [esp+0x14]
        jz      L_1AB4
        mov     eax, dword ptr [edx+0x40a4c]
        mov     edi, dword ptr [eax+ebx+0xfffbf4ac]
        or      ecx, 0xffffffff
        mov     dword ptr [esp+0x10], edi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [esp+0x40]
        mov     dword ptr [esp+0x1c], esi
        mov     esi, edi
        mov     edi, dword ptr [esp+0x1c]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebx+edx]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx+edx+0xffffff00]
        mov     dword ptr [esp+0x1c], ecx
        mov     ecx, dword ptr [ebx+edx+0x80]
        mov     edx, dword ptr [esp+0x20]
        mov     dword ptr [esp+0x38], ecx
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esp+0x34], eax
        mov     eax, dword ptr [edx]
        push    ecx
        mov     dword ptr [esp+0x28], eax
        call    FUN_004084e0
        mov     edx, dword ptr [g_007dd268]
        mov     eax, dword ptr [edx+0x40a4c]
        mov     edi, dword ptr [eax+ebp*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [edx+0x40a4c]
        mov     dword ptr [ebx+ecx+0xfffbf4ac], eax
        mov     edi, dword ptr [ecx+ebp*4]
        or      ecx, 0xffffffff
        mov     dword ptr [esp+0x28], eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp+0x28]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx+ebp*4+0x40a54]
        mov     dword ptr [ebx+edx+0xffffff00], ecx
        mov     eax, dword ptr [edx+ebp*4+0x40b54]
        mov     dword ptr [ebx+edx], eax
        mov     ecx, dword ptr [edx+ebp*4+0x40bd4]
        mov     dword ptr [ebx+edx+0x80], ecx
        mov     eax, dword ptr [edx+ebp*4+0x40ad4]
        mov     dword ptr [ebx+edx-0x80], eax
        mov     ecx, dword ptr [edx+0x40a4c]
        mov     edx, dword ptr [ecx+ebp*4]
        push    edx
        call    FUN_004084e0
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x4c]
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [edx+0x40a4c]
        add     esp, 0x10
        mov     dword ptr [esp+0x20], eax
        mov     dword ptr [ecx+ebp*4], eax
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x40]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp+0x20]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x34]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [edx+ebp*4+0x40a54], ecx
        mov     ecx, dword ptr [esp+0x38]
        mov     dword ptr [edx+ebp*4+0x40b54], eax
        mov     eax, dword ptr [esp+0x24]
        mov     dword ptr [edx+ebp*4+0x40bd4], ecx
        mov     dword ptr [edx+ebp*4+0x40ad4], eax
L_1AB4:
        mov     ebp, dword ptr [esp+0x14]
L_1AB8:
        mov     eax, dword ptr [edx+0x40a50]
        inc     ebp
        add     ebx, 4
        cmp     ebp, eax
        mov     dword ptr [esp+0x14], ebp
        jl      L_18DA
        mov     ebx, dword ptr [esp+0x18]
L_1AD2:
        mov     ebp, dword ptr [esp+0x2c]
L_1AD6:
        inc     dword ptr [esp+0x28]
        mov     edi, dword ptr [esp+0x3c]
        dec     edi
        add     ebx, 4
        cmp     edi, -9
        mov     dword ptr [esp+0x3c], edi
        mov     dword ptr [esp+0x18], ebx
        jg      L_1545
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x430
        ret
L_1AFE:
        mov     edx, dword ptr [g_007dd268]
        jmp     L_1AD6
L_1B06:
        add     ebp, 0x3584
        mov     dword ptr [esp+0x18], 0xff
L_1B14:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L_1BF5
        mov     ecx, dword ptr [eax+0x170]
        test    ecx, ecx
        jz      L_1BF5
        mov     edi, dword ptr [ebp+4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        mov     esi, dword ptr [ecx+0x40a4c]
        mov     dword ptr [esi+edx*4], eax
        mov     edx, dword ptr [ecx+0x40a50]
        mov     ebx, dword ptr [ecx+0x40a4c]
        mov     edi, dword ptr [ebp+4]
        or      ecx, 0xffffffff
        add     esp, 4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx+edx*4]
        mov     edx, dword ptr [esp+0x30]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebp]
        mov     esi, dword ptr [ecx+0x170]
        mov     edi, dword ptr [edx+0x225c]
        add     esi, 0x14
        push    esi
        push    0x2b
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40a54], eax
        push    2
        mov     ecx, edi
        call    FUN_00622910
        mov     ebx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [ebx+0x40a50]
        mov     dword ptr [ebx+ecx*4+0x40b54], eax
        push    esi
        push    8
        mov     ecx, edi
        add     ebx, 0x40a50
        call    FUN_00622910
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [g_007dd268]
        mov     dword ptr [edx+ecx*4+0x40bd4], eax
        inc     dword ptr [ebx]
L_1BF5:
        mov     eax, dword ptr [esp+0x18]
        add     ebp, 0x2038
        dec     eax
        mov     dword ptr [esp+0x18], eax
        jnz     L_1B14
        mov     eax, dword ptr [esp+0x2c]
        lea     ebp, [eax+0x205d30]
        mov     dword ptr [esp+0x18], 0x18
L_1C1C:
        cmp     dword ptr [ebp], 0
        jz      L_1D05
        mov     al, byte ptr [ebp+0x204]
        test    al, al
        lea     esi, [ebp+4]
        jz      L_1D05
        mov     al, byte ptr [esi+0x201]
        test    al, al
        jz      L_1D05
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        mov     edi, dword ptr [ecx+0x40a4c]
        mov     dword ptr [edi+edx*4], eax
        mov     edx, dword ptr [ecx+0x40a50]
        mov     ebx, dword ptr [ecx+0x40a4c]
        or      ecx, 0xffffffff
        mov     edi, esi
        add     esp, 4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx+edx*4]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [esp+0x30]
        mov     edi, dword ptr [ecx+0x225c]
        add     esi, 0x14
        push    esi
        push    0x2b
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx+0x40a50]
        push    esi
        mov     dword ptr [ecx+edx*4+0x40a54], eax
        push    2
        mov     ecx, edi
        call    FUN_00622910
        mov     ebx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [ebx+0x40a50]
        mov     dword ptr [ebx+ecx*4+0x40b54], eax
        push    esi
        push    8
        mov     ecx, edi
        add     ebx, 0x40a50
        call    FUN_00622910
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [g_007dd268]
        mov     dword ptr [edx+ecx*4+0x40bd4], eax
        inc     dword ptr [ebx]
L_1D05:
        mov     eax, dword ptr [esp+0x18]
        add     ebp, 0x22ac
        dec     eax
        mov     dword ptr [esp+0x18], eax
        jnz     L_1C1C
        mov     esi, dword ptr [edx+0x40a50]
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [esp+0x14], eax
        jle     L_EEB
        mov     ebp, 0x40a54
L_1D33:
        cmp     eax, esi
        mov     ebx, eax
        jge     L_1ED5
        lea     ecx, [ebp+0xfffbf5ac]
        mov     dword ptr [esp+0x18], ecx
        lea     ecx, [edx+ebp]
L_1D4A:
        mov     edi, dword ptr [esp+0x18]
        mov     edi, dword ptr [edi+edx+0x40a54]
        cmp     edi, dword ptr [ecx]
        jge     L_1D66
        lea     edi, [eax*4+0]
        mov     ebx, eax
        mov     dword ptr [esp+0x18], edi
L_1D66:
        inc     eax
        add     ecx, 4
        cmp     eax, esi
        jl      L_1D4A
        mov     eax, dword ptr [esp+0x14]
        cmp     ebx, eax
        jz      L_1ED5
        mov     eax, dword ptr [edx+0x40a4c]
        mov     edi, dword ptr [eax+ebp+0xfffbf5ac]
        or      ecx, 0xffffffff
        mov     dword ptr [esp+0x38], edi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [esp+0x40]
        mov     dword ptr [esp+0x24], esi
        mov     esi, edi
        mov     edi, dword ptr [esp+0x24]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [edx+ebp+0x100]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx+ebp]
        mov     dword ptr [esp+0x34], ecx
        mov     ecx, dword ptr [edx+ebp+0x180]
        mov     edx, dword ptr [esp+0x38]
        push    edx
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esp+0x20], ecx
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax+0x40a4c]
        mov     edi, dword ptr [ecx+ebx*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [edx+0x40a4c]
        mov     dword ptr [ecx+ebp+0xfffbf5ac], eax
        mov     edi, dword ptr [ecx+ebx*4]
        or      ecx, 0xffffffff
        mov     dword ptr [esp+0x2c], eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp+0x2c]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx+ebx*4+0x40a54]
        mov     dword ptr [edx+ebp], ecx
        mov     eax, dword ptr [edx+ebx*4+0x40b54]
        mov     dword ptr [edx+ebp+0x100], eax
        mov     ecx, dword ptr [edx+ebx*4+0x40bd4]
        mov     dword ptr [edx+ebp+0x180], ecx
        mov     edx, dword ptr [edx+0x40a4c]
        mov     eax, dword ptr [edx+ebx*4]
        push    eax
        call    FUN_004084e0
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0x4c]
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [g_007dd268]
        mov     ecx, dword ptr [edx+0x40a4c]
        mov     dword ptr [ecx+ebx*4], eax
        mov     dword ptr [esp+0x34], eax
        or      ecx, 0xffffffff
        lea     edi, [esp+0x50]
        xor     eax, eax
        add     esp, 0x10
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp+0x24]
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x20]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp+0x34]
        mov     dword ptr [edx+ebx*4+0x40a54], ecx
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [edx+ebx*4+0x40b54], eax
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [edx+ebx*4+0x40bd4], ecx
L_1ED5:
        mov     esi, dword ptr [edx+0x40a50]
        inc     eax
        add     ebp, 4
        cmp     eax, esi
        mov     dword ptr [esp+0x14], eax
        jl      L_1D33
L_EEB:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x430
        ret
    }
}
