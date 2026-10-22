/*
 * FUN_00423110 (1050 B) — MLR render-state / vertex-buffer processing loop.
 * Iterates over the global stream object (g_007b960c), dispatches on a
 * render-state value via a jump table (0x0042352c), and for each active
 * entry issues a series of virtual calls to set up vertex buffers /
 * lightmaps. Ends with a per-entry cleanup loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004919c0(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00423b60(void);
extern void __cdecl FUN_00423e00(void);

extern int g_007b960c;
extern int g_007b95e8;
extern int g_007b95e4;
extern int g_007b95f8;
extern int g_007b95f4;
extern int g_007b95ec;
extern int g_007b95f0;
extern int g_007b94a0;
extern int g_007b9604;
extern float g_0076de10;
extern int g_42352c;
extern char g_76ddf0[];

__declspec(naked) void FUN_00423110(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    esi
        push    edi
        call    dword ptr [eax+0x4]
        mov     ebx, eax
        xor     edi, edi
        lea     ecx, [ebp-0x78]
        mov     dword ptr [ebp-0x30], ebx
        mov     dword ptr [ebp-0x1c], edi
        mov     dword ptr [ebp-0x4], edi
        call    FUN_00491280
        lea     ecx, [ebp-0x48]
        call    FUN_00491280
        mov     esi, dword ptr [g_007b960c]
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0xc]
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esi+0x8], 0xffffffec
        call    dword ptr [eax+0x4]
        cmp     eax, ebx
        mov     dword ptr [g_007b95e8], edi
        jnc     L_after
L_loop:
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [ebp-0x18]
        push    eax
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp-0x18]
        cmp     eax, 0x3
        ja      L_default
        jmp     dword ptr [eax*4 + g_42352c]
L_case0:
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [ebp-0x14]
        push    eax
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [ebp-0x14]
        mov     dword ptr [ebp-0x1c], ecx
        jmp     L_cont
L_case1:
        mov     edx, dword ptr [g_007b960c]
        push    edx
        lea     ecx, [ebp-0x4]
        call    FUN_004919c0
        jmp     L_cont
L_case2:
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [ebp-0x20]
        push    edx
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp-0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx+0x14]
        test    al, 0x3
        jz      L_c2skip
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 0x3
        push    eax
        call    dword ptr [edx+0x18]
L_c2skip:
        mov     eax, dword ptr [ebp-0x20]
        mov     ecx, dword ptr [ebp-0x24]
        mov     dword ptr [ebp-0x48], eax
        mov     dword ptr [ebp-0x44], ecx
        jmp     L_cont
L_case3:
        lea     ecx, [ebp-0x60]
        call    FUN_00491280
        mov     edx, dword ptr [g_007b960c]
        push    0x12
        push    edx
        lea     ecx, [ebp-0x60]
        call    FUN_00491440
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx+0x14]
        test    al, 0x3
        jz      L_c3skip
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 0x3
        push    eax
        call    dword ptr [edx+0x18]
        mov     ecx, dword ptr [g_007b960c]
L_c3skip:
        mov     eax, dword ptr [ecx]
        push    0x4
        lea     edx, [ebp-0xc]
        push    edx
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp-0x8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        push    0x4
        lea     eax, [ebp-0x28]
        push    eax
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp-0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [ebp-0x8]
        test    eax, eax
        jle     L_cont
        mov     ecx, dword ptr [ebp-0x10]
        test    ecx, ecx
        jle     L_cont
        mov     edx, dword ptr [g_007b95e4]
        mov     ecx, dword ptr [edx]
        mov     esi, dword ptr [g_007b95f8]
        mov     edx, dword ptr [g_007b95e8]
        mov     esi, dword ptr [esi]
        mov     ecx, dword ptr [ecx+edx*4]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [ebp-0xc]
        lea     eax, [eax+eax*2]
        lea     eax, [esi+eax*4]
        push    eax
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        mov     ecx, dword ptr [edx+eax*4]
        mov     eax, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [g_007b95f4]
        mov     eax, dword ptr [eax]
        lea     eax, [eax+esi*8]
        push    eax
        call    dword ptr [edx+0x2c]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        mov     ecx, dword ptr [edx+eax*4]
        mov     eax, dword ptr [ebp-0x8]
        mov     esi, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [g_007b95ec]
        mov     eax, dword ptr [eax]
        lea     eax, [eax+esi*4]
        push    eax
        call    dword ptr [edx+0xa4]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        mov     ecx, dword ptr [edx+eax*4]
        mov     eax, dword ptr [ebp-0x10]
        mov     edi, dword ptr [ebp-0x28]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [g_007b95f0]
        mov     eax, dword ptr [eax]
        add     eax, edi
        push    eax
        call    dword ptr [edx+0x88]
        fild    dword ptr [ebp-0x10]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        fmul    dword ptr [g_0076de10]
        mov     esi, dword ptr [edx+eax*4]
        mov     edi, dword ptr [esi]
        push    0x0
        call    FUN_0075db4a
        push    eax
        push    0x0
        mov     ecx, esi
        call    dword ptr [edi+0xc]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        mov     ecx, dword ptr [edx+eax*4]
        mov     edx, dword ptr [ecx]
        push    0x0
        lea     eax, [ebp-0x60]
        push    eax
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007b95e8]
        mov     ecx, dword ptr [edx+eax*4]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp-0x48]
        push    eax
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [g_007b95e8]
        mov     edx, dword ptr [g_007b95e4]
        mov     eax, dword ptr [edx+0x4]
        inc     ecx
        cmp     ecx, eax
        mov     dword ptr [g_007b95e8], ecx
        jc      L_cont
        lea     esi, [eax+eax*1]
        mov     edi, edx
        cmp     esi, dword ptr [edi+0x4]
        jz      L_cont
        test    esi, esi
        jbe     L_grow0
        /* __emit: MSVC6 cannot encode the no-base SIB form lea ecx,[esi*4+0]
           (8D 0C B5 00 00 00 00); emit it directly. */
        __emit 0x8D
        __emit 0x0C
        __emit 0xB5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi]
        add     esp, 0x4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [ebp-0x2c], ebx
        jz      L_grow1
        mov     ecx, dword ptr [edi+0x4]
        cmp     esi, ecx
        jnc     L_grow2
        mov     ecx, esi
L_grow2:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_grow3
        lea     eax, [ebx+ecx*4]
        sub     edx, ebx
        inc     ecx
L_grow4:
        mov     ebx, dword ptr [edx+eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_grow4
        mov     ebx, dword ptr [ebp-0x2c]
L_grow3:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_grow1:
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [ebp-0x30]
        mov     dword ptr [edi+0x4], esi
        jmp     L_cont
L_grow0:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0x0
        mov     dword ptr [edi+0x4], esi
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
        cmp     eax, ebx
        jc      L_loop
L_after:
        mov     eax, dword ptr [g_007b95e8]
        xor     esi, esi
        test    eax, eax
        jle     L_epilogue
        mov     edi, dword ptr [ebp+0x8]
L_loop2:
        mov     eax, dword ptr [g_007b95e4]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx+esi*4]
        mov     edx, dword ptr [ecx]
        push    0x1
        push    0x1
        call    dword ptr [edx+0x40]
        mov     eax, dword ptr [g_007b95e4]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx+esi*4]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x98]
        test    byte ptr [ebp-0x4], 0x3f
        jz      L_else
        mov     ecx, dword ptr [g_007b95e4]
        push    esi
        call    FUN_00423b60
        mov     edi, dword ptr [eax]
        mov     eax, dword ptr [g_007b94a0]
        mov     ecx, dword ptr [g_007b9604]
        mov     ebx, dword ptr [edi]
        push    0x1
        push    eax
        push    0x0
        push    ecx
        push    ecx
        lea     edx, [ebp-0x4]
        mov     ecx, esp
        push    edx
        call    FUN_00423e00
        mov     eax, dword ptr [ebp-0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [ebx+0x64]
        mov     edi, dword ptr [ebp+0x8]
        jmp     L_loop2cont
L_else:
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx+esi*4]
        mov     edx, dword ptr [g_007b94a0]
        mov     eax, dword ptr [ecx]
        push    0x1
        push    edx
        mov     edx, dword ptr [g_007b9604]
        push    0x0
        push    edx
        mov     edx, dword ptr [ebp-0x1c]
        push    edx
        call    dword ptr [eax+0x68]
L_loop2cont:
        mov     eax, dword ptr [g_007b95e4]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx+esi*4]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx+0x44]
        test    eax, eax
        jz      L_loop2next
        mov     ecx, dword ptr [g_007b95e4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx+esi*4]
        mov     eax, dword ptr [edi]
        push    0x0
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x18]
L_loop2next:
        mov     eax, dword ptr [g_007b95e8]
        inc     esi
        cmp     esi, eax
        jl      L_loop2
L_epilogue:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
