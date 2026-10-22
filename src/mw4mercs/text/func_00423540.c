/*
 * FUN_00423540 (1445 B) — MLR vertex-buffer / lightmap build routine.
 * Iterates over the global stream object (g_007b960c), dispatches on a
 * render-state value via a jump table (0x00423ae8), and builds/updates
 * vertex buffers and lightmap data for the current entry (EBX), issuing
 * many virtual calls and rep movsd/movsb copies.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00450b10(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00423bd0(void);
extern void __cdecl FUN_00423c40(void);
extern void __cdecl FUN_00423b80(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007b9584;
extern int g_007b960c;
extern int g_007b98cc;
extern int g_007b95f8;
extern int g_007b95f4;
extern int g_007b95ec;
extern int g_007b95f0;
extern float g_0076de10;
extern int g_423ae8;
extern char g_76ddf0[];

__declspec(naked) void FUN_00423540(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        mov     eax, dword ptr [g_007b9584]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        xor     esi, esi
        xor     ebx, ebx
        call    dword ptr [edx+0x4]
        lea     ecx, [ebp-0x78]
        mov     dword ptr [ebp-0x18], eax
        call    FUN_00491280
        lea     ecx, [ebp-0x48]
        call    FUN_00491280
        mov     edi, dword ptr [g_007b960c]
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax+0xc]
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [edi+0x8], 0xffffffec
        or      edi, 0xffffffff
        mov     dword ptr [ebp-0x8], edi
        mov     dword ptr [ebp-0xc], edi
        mov     dword ptr [ebp-0x4], edi
        call    dword ptr [edx+0x4]
        cmp     eax, dword ptr [ebp-0x18]
        jnc     L_epilogue
L_loop:
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [ebp-0x14]
        push    edx
        call    dword ptr [eax+0x20]
        mov     eax, dword ptr [ebp-0x14]
        cmp     eax, 0x3
        ja      L_default
        jmp     dword ptr [eax*4 + g_423ae8]
L_case0:
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [ebp-0x10]
        push    edx
        call    dword ptr [eax+0x20]
        jmp     L_cont
L_case1:
        mov     eax, dword ptr [g_007b960c]
        push    0x12
        push    eax
        lea     ecx, [ebp-0x48]
        call    FUN_00491440
        jmp     L_cont
L_case2:
        lea     ecx, [ebp-0x60]
        call    FUN_00491280
        mov     ecx, dword ptr [g_007b960c]
        push    0x12
        push    ecx
        lea     ecx, [ebp-0x60]
        call    FUN_00491440
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx+0x14]
        test    al, 0x3
        jz      L_c2skip
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 0x3
        push    eax
        call    dword ptr [edx+0x18]
        mov     ecx, dword ptr [g_007b960c]
L_c2skip:
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [ebp-0x24]
        push    edx
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp-0x1c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [ebp-0x30]
        push    eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp-0x20]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        cmp     edi, esi
        jle     L_cont
        cmp     dword ptr [ebp-0x4], esi
        jle     L_cont
        cmp     ebx, esi
        jnz     L_ebx_nonzero
        push    0x70
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_alloc0
        mov     edx, dword ptr [g_007b98cc]
        push    edx
        mov     ecx, eax
        call    FUN_00450b10
        mov     ebx, eax
        jmp     L_alloc0done
L_alloc0:
        xor     ebx, ebx
L_alloc0done:
        mov     ecx, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebp-0x24]
        mov     edx, dword ptr [ebp-0x20]
        mov     dword ptr [ebp-0xc], ecx
        push    esi
        lea     ecx, [ebp-0x60]
        mov     dword ptr [ebp-0x8], eax
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp-0x4], edx
        call    dword ptr [eax+0x14]
        mov     edi, dword ptr [ebp-0xc]
        jmp     L_cont
L_ebx_nonzero:
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx+0x18]
        mov     ecx, dword ptr [ebp-0x60]
        cmp     ecx, dword ptr [eax]
        jnz     L_23718
        mov     edx, dword ptr [ebp-0x5c]
        cmp     edx, dword ptr [eax+0x4]
        jnz     L_23718
        mov     edx, dword ptr [ebp-0x1c]
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x20]
        add     edi, edx
        add     ecx, eax
        mov     dword ptr [ebp-0xc], edi
        mov     dword ptr [ebp-0x4], ecx
        jmp     L_cont
L_default:
        push    offset g_76ddf0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_cont
        int     3
L_cont:
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x4]
        cmp     eax, dword ptr [ebp-0x18]
        jnc     L_after
        jmp     L_loop
L_23718:
        mov     eax, dword ptr [ebx]
        lea     ecx, [ebp-0x48]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        cmp     dword ptr [ebx+0xc], esi
        jnz     L_23760
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_2375b
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+0x4], esi
        mov     dword ptr [eax+0x8], esi
        mov     dword ptr [eax+0xc], esi
        mov     dword ptr [eax+0x10], esi
        mov     dword ptr [eax+0x14], esi
        mov     dword ptr [eax+0x18], esi
        mov     dword ptr [eax+0x1c], esi
        mov     dword ptr [eax+0x20], esi
        mov     dword ptr [eax+0x24], esi
        mov     dword ptr [eax+0x28], esi
        mov     dword ptr [eax+0x2c], esi
        jmp     L_2375d
L_2375b:
        xor     eax, eax
L_2375d:
        mov     dword ptr [ebx+0xc], eax
L_23760:
        mov     eax, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebx+0xc]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [g_007b95f8]
        mov     ecx, dword ptr [eax]
        lea     edx, [ecx+edx*4]
        add     esi, 0x10
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp-0x18], edx
        mov     dword ptr [ebp-0x2c], esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi+0x4]
        test    eax, eax
        jbe     L_237b6
        mov     ecx, dword ptr [ebp-0x18]
        mov     esi, dword ptr [esi]
        sub     ecx, esi
        mov     dword ptr [ebp-0x28], ecx
        mov     dword ptr [ebp-0x18], eax
        jmp     L_2379d
L_2379a:
        mov     ecx, dword ptr [ebp-0x28]
L_2379d:
        add     ecx, esi
        push    ecx
        mov     ecx, esi
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x18]
        add     esi, 0xc
        dec     eax
        mov     dword ptr [ebp-0x18], eax
        jnz     L_2379a
        mov     esi, dword ptr [ebp-0x2c]
L_237b6:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [g_007b95f4]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebx+0xc]
        lea     edx, [eax+ecx*8]
        add     esi, 0x18
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp-0x2c], edx
        mov     dword ptr [ebp-0x18], esi
        call    FUN_00423bd0
        mov     ecx, dword ptr [esi+0x4]
        test    ecx, ecx
        jbe     L_237ff
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [ebp-0x2c]
        and     ecx, 0x1fffffff
        shl     ecx, 0x1
        rep     movsd
        mov     esi, dword ptr [ebp-0x18]
        mov     edi, dword ptr [ebp-0xc]
L_237ff:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x2c]
        mov     edx, dword ptr [g_007b95ec]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebx+0xc]
        lea     edx, [eax+ecx*4]
        add     esi, 0x20
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp-0x2c], edx
        mov     dword ptr [ebp-0x28], esi
        call    FUN_00423c40
        mov     ecx, dword ptr [esi+0x4]
        test    ecx, ecx
        jbe     L_23840
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [ebp-0x2c]
        rep     movsd
        mov     esi, dword ptr [ebp-0x28]
        mov     edi, dword ptr [ebp-0xc]
L_23840:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0xa4]
        mov     edx, dword ptr [g_007b95f0]
        mov     esi, dword ptr [edx]
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x8]
        mov     edi, dword ptr [ebx+0xc]
        push    eax
        mov     ecx, edi
        add     esi, edx
        call    FUN_00423b80
        mov     ecx, dword ptr [edi+0x4]
        test    ecx, ecx
        jbe     L_23880
        mov     edi, dword ptr [edi]
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_23880:
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     eax, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [eax]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x88]
        fild    dword ptr [ebp-0x4]
        mov     esi, dword ptr [ebx]
        push    0x0
        fmul    dword ptr [g_0076de10]
        call    FUN_0075db4a
        push    eax
        push    0x0
        mov     ecx, ebx
        call    dword ptr [esi+0xc]
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_after:
        cmp     edi, esi
        jle     L_epilogue
        cmp     dword ptr [ebp-0x4], esi
        jle     L_epilogue
        cmp     ebx, esi
        jz      L_epilogue
        mov     edx, dword ptr [ebx]
        lea     eax, [ebp-0x48]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x20]
        cmp     dword ptr [ebx+0xc], esi
        jnz     L_23918
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_23913
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+0x4], esi
        mov     dword ptr [eax+0x8], esi
        mov     dword ptr [eax+0xc], esi
        mov     dword ptr [eax+0x10], esi
        mov     dword ptr [eax+0x14], esi
        mov     dword ptr [eax+0x18], esi
        mov     dword ptr [eax+0x1c], esi
        mov     dword ptr [eax+0x20], esi
        mov     dword ptr [eax+0x24], esi
        mov     dword ptr [eax+0x28], esi
        mov     dword ptr [eax+0x2c], esi
        jmp     L_23915
L_23913:
        xor     eax, eax
L_23915:
        mov     dword ptr [ebx+0xc], eax
L_23918:
        mov     eax, dword ptr [ebp-0x8]
        mov     edx, dword ptr [g_007b95f8]
        mov     esi, dword ptr [ebx+0xc]
        lea     ecx, [eax+eax*2]
        mov     eax, dword ptr [edx]
        lea     ecx, [eax+ecx*4]
        mov     dword ptr [ebp-0x2c], ecx
        add     esi, 0x10
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     edx, dword ptr [esi+0x4]
        test    edx, edx
        jbe     L_2396b
        mov     eax, dword ptr [ebp-0x2c]
        mov     ecx, dword ptr [esi]
        add     eax, 0x8
        mov     dword ptr [ebp-0x18], edx
L_2394c:
        mov     edx, dword ptr [eax-0x8]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax-0x4]
        mov     dword ptr [ecx+0x4], edx
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx+0x8], edx
        mov     edx, dword ptr [ebp-0x18]
        add     eax, 0xc
        add     ecx, 0xc
        dec     edx
        mov     dword ptr [ebp-0x18], edx
        jnz     L_2394c
L_2396b:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [g_007b95f4]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebx+0xc]
        lea     edx, [eax+ecx*8]
        add     esi, 0x18
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp-0x2c], edx
        mov     dword ptr [ebp-0x18], esi
        call    FUN_00423bd0
        mov     ecx, dword ptr [esi+0x4]
        test    ecx, ecx
        jbe     L_239b4
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [ebp-0x2c]
        and     ecx, 0x1fffffff
        shl     ecx, 0x1
        rep     movsd
        mov     esi, dword ptr [ebp-0x18]
        mov     edi, dword ptr [ebp-0xc]
L_239b4:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x2c]
        mov     edx, dword ptr [g_007b95ec]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x8]
        lea     esi, [eax+ecx*4]
        mov     eax, dword ptr [ebx+0xc]
        cmp     edi, dword ptr [eax+0x24]
        jz      L_23a1a
        test    edi, edi
        mov     eax, dword ptr [eax+0x20]
        jbe     L_23a07
        test    eax, eax
        jz      L_239e9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_239e9:
        mov     eax, dword ptr [ebx+0xc]
        /* __emit: MSVC6 cannot encode the no-base SIB form lea edx,[edi*4+0]
           (8D 14 BD 00 00 00 00); emit it directly. */
        __emit 0x8D
        __emit 0x14
        __emit 0xBD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    edx
        mov     dword ptr [eax+0x24], edi
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx+0xc]
        add     esp, 0x4
        mov     dword ptr [ecx+0x20], eax
        jmp     L_23a1a
L_23a07:
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [ebx+0xc]
        add     esp, 0x4
        mov     dword ptr [eax+0x20], 0x0
L_23a1a:
        mov     eax, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [eax+0x24]
        test    ecx, ecx
        jbe     L_23a2c
        mov     edi, dword ptr [eax+0x20]
        rep     movsd
        mov     edi, dword ptr [ebp-0xc]
L_23a2c:
        mov     eax, dword ptr [eax+0x20]
        mov     edx, dword ptr [ebx]
        push    edi
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0xa4]
        mov     ecx, dword ptr [g_007b95f0]
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [ebx+0xc]
        mov     edx, dword ptr [ebp-0x8]
        mov     edi, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [eax+0x4]
        add     esi, edx
        cmp     edi, ecx
        jz      L_23a92
        test    edi, edi
        jbe     L_23a7e
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L_23a68
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_23a68:
        mov     eax, dword ptr [ebx+0xc]
        push    edi
        mov     dword ptr [eax+0x4], edi
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx+0xc]
        add     esp, 0x4
        mov     dword ptr [ecx], eax
        jmp     L_23a92
L_23a7e:
        mov     edx, dword ptr [eax]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [ebx+0xc]
        add     esp, 0x4
        mov     dword ptr [eax], 0x0
L_23a92:
        mov     eax, dword ptr [ebx+0xc]
        mov     ecx, dword ptr [eax+0x4]
        test    ecx, ecx
        jbe     L_23aaf
        mov     edi, dword ptr [eax]
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [ebp-0x4]
L_23aaf:
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        push    edi
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x88]
        fild    dword ptr [ebp-0x4]
        mov     esi, dword ptr [ebx]
        push    0x0
        fmul    dword ptr [g_0076de10]
        call    FUN_0075db4a
        push    eax
        push    0x0
        mov     ecx, ebx
        call    dword ptr [esi+0xc]
L_epilogue:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
