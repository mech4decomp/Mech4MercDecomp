/*
 * FUN_00501EB0 (899 B) — method with virtual calls, string copy loop,
 * and many external data/function references.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004c43f0(void);
extern void __cdecl FUN_004c6a50(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b8420(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004b99a0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00502f80(void);
extern void __cdecl FUN_0041ef60(void);

extern int g_7dab00;
extern int g_7dab04;
extern int g_7b87ec;
extern int g_7daa38;
extern int g_7db0b0;
extern short g_7db0ac;
extern short g_7db0ae;

__declspec(naked) void func_00501eb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x100
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x1c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ebx, dword ptr [edi + 8]
        mov     ecx, dword ptr [edi + 4]
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        push    0x7723e8
        mov     dword ptr [ebp - 0x20], esi
        mov     dword ptr [ebp - 0x1c], ebx
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [ebp - 0x24], ecx
        call    FUN_0040ed60
        mov     ecx, dword ptr [g_7dab00]
        mov     edi, eax
        push    ecx
        mov     dword ptr [ebp - 0x28], edi
        call    FUN_006f4950
        push    0x14c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_null
        mov     edx, dword ptr [g_7dab04]
        push    edx
        mov     ecx, eax
        call    FUN_004c43f0
        mov     dword ptr [ebp - 4], eax
        jmp     l_alloc_done
    l_alloc_null:
        mov     dword ptr [ebp - 4], 0
    l_alloc_done:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [eax + 0x18]
        lea     edx, [ebp - 0x100]
        push    edx
        mov     edx, dword ptr [g_7b87ec]
        lea     eax, [ebp - 0x18]
        push    eax
        mov     dword ptr [ebp - 8], ecx
        lea     ecx, [ebp - 8]
        push    ecx
        push    edx
        push    edi
        call    FUN_004c6a50
        mov     ecx, dword ptr [g_7daa38]
        add     esp, 0x14
        call    FUN_00416110
        test    eax, eax
        jz      l_16110_null
        mov     ecx, dword ptr [g_7b87ec]
        push    ecx
        push    edi
        mov     ecx, eax
        call    FUN_004b8420
        mov     edi, eax
        jmp     l_16110_done
    l_16110_null:
        xor     edi, edi
    l_16110_done:
        push    0
        lea     ecx, [ebp - 0x68]
        call    FUN_0041ee70
        mov     edx, dword ptr [ebp - 8]
        and     edx, 0xffffff3f
        or      edx, 4
        push    4
        lea     eax, [ebp - 8]
        mov     dword ptr [ebp - 8], edx
        mov     edx, dword ptr [ebp - 0x68]
        push    eax
        lea     ecx, [ebp - 0x68]
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x40
        lea     ecx, [ebp - 0x100]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        lea     edx, [ebp - 0x68]
        push    edx
        mov     ecx, edi
        call    FUN_004b99a0
        test    edi, edi
        jz      l_skip_16130
        mov     ecx, dword ptr [g_7daa38]
        push    edi
        call    FUN_00416130
    l_skip_16130:
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [eax]
        push    ecx
        lea     ecx, [ebp - 0xc]
        call    FUN_00412570
        mov     edx, dword ptr [ebp - 0xc]
        push    0x77646c
        push    edx
        lea     ecx, [ebp - 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp - 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x10]
        test    eax, eax
        jz      l_skip_free
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, dword ptr [ebp - 0xc]
        push    0
        push    eax
        lea     ecx, [ebp - 0xc0]
        call    FUN_004d2000
        mov     ecx, dword ptr [g_7db0b0]
        push    ecx
        lea     edx, [ebp - 0x68]
        push    edx
        lea     ecx, [ebp - 0xc0]
        call    FUN_004d2680
        mov     ax, word ptr [ebp - 0x80]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esi + 0x14], ax
        mov     cx, word ptr [ebp - 0x7e]
        mov     ax, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x16], cx
        mov     word ptr [esi + 0x12], ax
        mov     eax, dword ptr [ebx + 0x30]
        test    eax, eax
        mov     word ptr [esi + 0x10], dx
        jz      l_skip_call
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        call    eax
        add     esp, 4
    l_skip_call:
        mov     ecx, dword ptr [ebp - 4]
        test    ecx, ecx
        jz      l_skip_vcall
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip_vcall:
        lea     eax, [ebx + 0x74]
        push    eax
        lea     ecx, [ebp - 0x40]
        call    FUN_00417170
        lea     ecx, [ebp - 0x40]
        mov     dword ptr [ebp - 0x40], 0x776304
        call    FUN_00415cc0
        cmp     eax, 1
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [ebp - 0x10], 1
        jle     l_loop_end
        jmp     l_loop_start
    l_loop_body:
        mov     ebx, dword ptr [ebp - 0x1c]
    l_loop_start:
        lea     eax, [ebx + 0x74]
        push    eax
        lea     ecx, [ebp - 0x7c]
        call    FUN_00417170
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        lea     ecx, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x7c], 0x776304
        call    FUN_004172a0
        lea     ecx, [ebp - 0x7c]
        mov     ebx, eax
        call    FUN_004171b0
        push    0
        mov     edi, 0x76b768
        lea     ecx, [ebp - 4]
        mov     dword ptr [ebp - 4], edi
        mov     edx, dword ptr [ebx + 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x28]
        push    edx
        call    FUN_00411bf0
        push    0x80
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp + 8], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x20]
        and     ecx, 3
        rep     movsb
        mov     edx, dword ptr [ebp - 4]
        push    0x80
        lea     ecx, [ebp + 8]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x34]
        add     esp, 0x18
        test    al, al
        jnz     l_skip_assert
        mov     edx, dword ptr [ebp + 8]
        mov     eax, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    0x776450
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      l_skip_assert
        int     3
    l_skip_assert:
        mov     edx, dword ptr [ebp + 8]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x2c]
        add     esp, 4
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x10], eax
        jl      l_loop_body
        mov     esi, dword ptr [ebp - 0x20]
    l_loop_end:
        mov     al, byte ptr [esi]
        xor     edi, edi
        test    al, al
        mov     dword ptr [esi + 0x18], edi
        jz      l_skip_800
        mov     dword ptr [esi + 0x18], 0x800
    l_skip_800:
        mov     al, byte ptr [esi + 1]
        test    al, al
        jz      l_skip_3000
        or      dword ptr [esi + 0x18], 0x3000
    l_skip_3000:
        mov     al, byte ptr [esi + 2]
        test    al, al
        jz      l_skip_2000
        or      dword ptr [esi + 0x18], 0x2000
    l_skip_2000:
        mov     al, byte ptr [esi + 3]
        test    al, al
        jz      l_skip_4000
        or      dword ptr [esi + 0x18], 0x4000
    l_skip_4000:
        mov     cl, byte ptr [esi + 4]
        test    cl, cl
        mov     eax, 0x8000
        jz      l_skip_8000
        or      dword ptr [esi + 0x18], eax
    l_skip_8000:
        cmp     dword ptr [esi + 0x18], eax
        jnz     l_skip_zero
        mov     dword ptr [esi + 0x18], edi
    l_skip_zero:
        mov     ecx, dword ptr [ebp - 0x28]
        push    edi
        lea     eax, [ebp - 0x14]
        push    eax
        push    0x776440
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_2f80
        mov     ecx, dword ptr [ebp - 0x14]
        push    ecx
        call    FUN_00502f80
        mov     ecx, dword ptr [esi + 0x18]
        add     esp, 4
        or      ecx, eax
        mov     dword ptr [esi + 0x18], ecx
    l_skip_2f80:
        lea     ecx, [ebp - 0x40]
        call    FUN_004171b0
        lea     ecx, [ebp - 0xc0]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp - 0xc]
        cmp     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        jz      l_skip_free2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free2:
        lea     ecx, [ebp - 0x68]
        call    FUN_0041ef60
        mov     esp, ebp
        pop     ebp
        ret
    }
}
