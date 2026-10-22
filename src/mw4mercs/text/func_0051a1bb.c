/*
 * func_0051A1BB.c  (block 0x51A1BB, 1628 bytes)
 *
 * Contains two functions:
 *   FUN_0051A1C0 (0x51A1C0, __stdcall ret 0xc) - string-table loader:
 *     builds a 0x42-entry table, iterating entries, calling 0x6fbc80 to
 *     check size, 0x72df20 to validate, and freeing strings via 0x4084e0.
 *   FUN_0051A310 (0x51A310, __stdcall ret 0xc) - larger table loader:
 *     iterates 0x42 entries, uses IAT 0x76b420 (sprintf), allocates via
 *     0x6f3c80, copies strings with repne scasb/rep movsd, and calls
 *     FUN_0051A820 / FUN_0051AA60 helpers.
 *
 * Preceded by 5 nops (0x51A1BB..0x51A1BF), 2 nops between functions
 * (0x51A30E..0x51A30F).
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006fbc80(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0072df20(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0041dac0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_0051a820(void);
extern void __cdecl FUN_0051aa60(void);
extern void __cdecl FUN_006f49a0(void);

extern unsigned int g_7dd234;
extern void *g_76b420;

__declspec(naked) void func_0051A1BB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop

        /* ---- FUN_0051A1C0 ---- */
        sub     esp, 0x3c
        push    ebp
        push    edi
        push    0x77a010
        lea     ecx, [esp + 0x10]
        mov     ebp, 0x42
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a1f8
        mov     ecx, dword ptr [esp + 0xc]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        jmp     L_a1fa
L_a1f8:
        xor     edi, edi
L_a1fa:
        push    esi
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        test    esi, esi
        je      L_a2c7
L_a20c:
        push    0x779ff0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_a256
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a256
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a256:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fbc80
        cmp     eax, 0x1400
        jae     L_a294
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        call    FUN_0072df20
        test    al, al
        je      L_a28b
        inc     ebp
L_a28b:
        lea     ecx, [esp + 0x18]
        call    FUN_0041dec0
L_a294:
        mov     ecx, edi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_a2b6
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a2b6
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a2b6:
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        test    esi, esi
        jne     L_a20c
L_a2c7:
        test    edi, edi
        pop     esi
        je      L_a2dc
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_a2dc:
        cmp     ebp, 0x80
        jle     L_a2e9
        mov     ebp, 0x80
L_a2e9:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_a304
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a304
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a304:
        pop     edi
        mov     eax, ebp
        pop     ebp
        add     esp, 0x3c
        ret     0xc
        nop
        nop

        /* ---- FUN_0051A310 ---- */
        sub     esp, 0x150
        mov     eax, dword ptr [g_7dd234]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x16c]
        mov     ebx, dword ptr [eax + 4]
        mov     esi, dword ptr [eax]
        sub     esi, ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x2c], 0x42
        jmp     L_a351
L_a34d:
        mov     esi, dword ptr [esp + 0x28]
L_a351:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x64]
        push    0x77a054
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [esi + ebx]
        add     esp, 0xc
        test    eax, eax
        je      L_a37d
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx], 0
L_a37d:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     ebp, eax
        lea     eax, [esp + 0x60]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esi + ebx], ebp
        call    FUN_00412570
        lea     ecx, [esp + 0x18]
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_a3d8
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
L_a3d8:
        push    0
        push    0x200
        call    FUN_006f3c80
        mov     ebp, eax
        push    0x77a034
        lea     ecx, [esp + 0x18]
        mov     dword ptr [ebx], ebp
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x60]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        je      L_a436
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a436
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a436:
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, 4
        test    eax, eax
        je      L_a475
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a475
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a475:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_a490
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a490
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a490:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0x42
        mov     dword ptr [esp + 0x10], eax
        jl      L_a34d
        push    0x77a010
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 4
        cmp     eax, ebp
        je      L_a4d2
        mov     ecx, dword ptr [esp + 0x1c]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        jmp     L_a4d4
L_a4d2:
        xor     edi, edi
L_a4d4:
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        je      L_a5a3
L_a4e5:
        push    0x779ff0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebp
        je      L_a52b
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a52b
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a52b:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fbc80
        cmp     eax, 0x1400
        jae     L_a570
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0041de80
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x44]
        push    edx
        push    eax
        call    FUN_0072df20
        test    al, al
        je      L_a567
        push    esi
        call    FUN_0051a820
        add     esp, 4
L_a567:
        lea     ecx, [esp + 0x30]
        call    FUN_0041dec0
L_a570:
        mov     ecx, edi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        je      L_a592
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a592
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a592:
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jne     L_a4e5
L_a5a3:
        cmp     edi, ebp
        je      L_a5b7
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_a5b7:
        push    0x38
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        je      L_a5db
        mov     ecx, dword ptr [esp + 0x1c]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     L_a5e1
L_a5db:
        mov     dword ptr [esp + 0x14], ebp
        mov     edi, ebp
L_a5e1:
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        je      L_a7d1
        mov     edx, dword ptr [esp + 0x24]
        lea     ebx, [edx + 0x108]
L_a5fc:
        push    0x779ff0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebp
        je      L_a642
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a642
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a642:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fbc80
        cmp     eax, 0x1400
        jae     L_a75d
        mov     edx, dword ptr [esp + 0x10]
        push    ebp
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_0041de80
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        call    FUN_0072df20
        test    al, al
        je      L_a752
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx + edi]
        cmp     eax, ebp
        je      L_a691
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx + edi], ebp
L_a691:
        push    ebp
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, eax
        push    esi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [ebx + edx], ebp
        call    FUN_00412570
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_0051aa60
        mov     edi, dword ptr [esp + 0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebx]
        test    eax, eax
        je      L_a6ef
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0
L_a6ef:
        push    0
        push    0x200
        call    FUN_006f3c80
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x2c]
        and     ecx, 3
        inc     eax
        add     ebx, 4
        rep     movsb
        mov     dword ptr [esp + 0x2c], eax
        cmp     eax, 0x80
        mov     eax, dword ptr [esp + 0x18]
        je      L_a792
        test    eax, eax
        je      L_a74e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a74e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a74e:
        mov     edi, dword ptr [esp + 0x14]
L_a752:
        lea     ecx, [esp + 0x30]
        call    FUN_0041dec0
        xor     ebp, ebp
L_a75d:
        mov     ecx, edi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        je      L_a77f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a77f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a77f:
        mov     ecx, edi
        call    FUN_0041db30
        mov     esi, eax
        cmp     esi, ebp
        jne     L_a5fc
        jmp     L_a7d1
L_a792:
        test    eax, eax
        je      L_a7a9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a7a9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a7a9:
        lea     ecx, [esp + 0x30]
        call    FUN_0041dec0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_a7cd
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a7cd
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a7cd:
        mov     edi, dword ptr [esp + 0x14]
L_a7d1:
        test    edi, edi
        je      L_a7e5
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_a7e5:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        je      L_a809
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_a809
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_a809:
        mov     eax, 1
        add     esp, 0x150
        ret     0xc
    }
}
