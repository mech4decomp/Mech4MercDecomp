/*
 * FUN_00502C60 (393 B) — medium dispatcher with loop and external refs.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004171b0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

extern int g_7b8c0c;
extern short g_7db0ac;
extern short g_7db0ae;

__declspec(naked) void func_00502c60(void)
{
    __asm {
        sub     esp, 0x74
        mov     ecx, dword ptr [g_7b8c0c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x88]
        mov     eax, dword ptr [edi + 0xc]
        mov     ebx, dword ptr [ecx + eax*4]
        lea     eax, [ebx + 0x74]
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00417170
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], 0x776304
        call    FUN_00415cc0
        mov     ecx, dword ptr [esp + 0x8c]
        push    0x7723e8
        mov     dword ptr [esp + 0x18], eax
        call    FUN_0040eda0
        mov     edx, dword ptr [ebx + 4]
        mov     ebp, eax
        push    edx
        push    0x7723e0
        mov     ecx, ebp
        call    FUN_00411c40
        mov     cx, word ptr [edi + 0x14]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [edi + 0x14]
        mov     esi, 1
        jnz     l_52
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        jz      l_1f
    l_52:
        push    esi
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0x40]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x48]
        call    dword ptr [edx + 0x20]
        test    byte ptr [esp + 0x10], 2
        jz      l_16
        push    0x771780
        push    0x7717a4
        mov     ecx, ebp
        call    FUN_00411c40
    l_16:
        lea     ecx, [esp + 0x40]
        call    FUN_004d21c0
    l_1f:
        cmp     dword ptr [esp + 0x14], esi
        jle     l_9e
    l_25:
        lea     eax, [ebx + 0x74]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00417170
        push    esi
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], 0x776304
        call    FUN_004172a0
        lea     ecx, [esp + 0x18]
        mov     edi, eax
        call    FUN_004171b0
        push    0x100
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x8c]
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        push    ecx
        call    dword ptr [ebx + 0x38]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edi + 0x14]
        add     esp, 0x10
        push    edx
        push    eax
        mov     ecx, ebp
        call    FUN_00411c40
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
        inc     esi
        cmp     esi, eax
        jl      l_25
        mov     edi, dword ptr [esp + 0x88]
    l_9e:
        mov     edi, dword ptr [edi + 0x18]
        test    edi, 0x20000
        jz      l_b0
        push    0x77658c
        jmp     l_cc
    l_b0:
        test    edi, 0x40000
        jz      l_bf
        push    0x776578
        jmp     l_cc
    l_bf:
        test    edi, 0x60000
        jz      l_d8
        push    0x776564
    l_cc:
        push    0x776440
        mov     ecx, ebp
        call    FUN_00411c40
    l_d8:
        lea     ecx, [esp + 0x2c]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x74
        ret
    }
}
