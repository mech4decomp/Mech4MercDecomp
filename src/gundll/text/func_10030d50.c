/*
 * FUN_10030D50 (575 B) - __stdcall, RET 0xC.  Large switch dispatcher on
 * arg1 (0xffff0011-relative) via an in-.text jump table (g_10030f90) and
 * byte index table (g_10030fb4).  Each case performs a virtual/COM-style
 * operation on the object graph rooted at arg0/arg2; several cases build a
 * stack struct and call FUN_10033480.  Returns HRESULT-style codes.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10030450(void);
extern void __cdecl FUN_10033480(void);
extern void __cdecl FUN_100309a0(void);
extern void *g_10049204;   /* IAT: timeGetTime */
extern void *g_100490b8;   /* IAT: lstrlenW */
extern char g_10030fb4;    /* in-.text jump index table */

__declspec(naked) void __stdcall FUN_10030D50(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        mov     ecx, edi
        call    FUN_10030450
        mov     esi, dword ptr [esp + 0x58]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x54]
        xor     ebp, ebp
        xor     ecx, ecx
        cmp     eax, 0xffff0011
        setne   cl
        mov     dword ptr [esp + 0x20], eax
        add     eax, 0xfffd
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], ebp
        mov     dword ptr [esp + 0x28], esi
        mov     dword ptr [esp + 0x24], ebp
        add     ecx, 0xc350
        cmp     eax, 0x13
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x50], ebp
        ja      defcase
        movzx   edx, byte ptr [eax + g_10030fb4]
        /* __emit: MSVC6 re-bases [edx*4+imm32] dispatch via EBX; emit ref bytes */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x90
        __emit 0x0F
        __emit 0x03
        __emit 0x10
case0:
        call    dword ptr [g_10049204]
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [esp + 0x24], 0x18
        mov     dword ptr [esp + 0x50], 0x15800e
        jmp     common
case1:
        mov     esi, dword ptr [esi + 8]
        mov     al, byte ptr [esi + 8]
        test    al, al
        je      case1b
        mov     dword ptr [esp + 0x24], 0x14
        jmp     common
case1b:
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi]
        push    esi
        push    edi
        call    dword ptr [eax + 0x14]
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
case2:
        mov     edx, dword ptr [esi + 8]
        mov     edi, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi]
        sub     edx, 0xc
        push    edx
        push    edi
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
case3:
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [ecx + 0x30]
        test    eax, eax
        lea     ebp, [esi + 0xc]
        lea     ebx, [ecx + 0x30]
        mov     dword ptr [esp + 0x58], ecx
        je      case3b
        push    eax
        call    dword ptr [g_100490b8]
        mov     ecx, dword ptr [esp + 0x58]
        lea     eax, [eax + eax + 2]
        mov     dword ptr [esp + 0x54], eax
        jmp     case3c
case3b:
        mov     dword ptr [esp + 0x54], 0
case3c:
        lea     eax, [ecx + 0x34]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     dword ptr [esp + 0x58], eax
        je      case3d
        push    ecx
        call    dword ptr [g_100490b8]
        lea     ecx, [eax + eax + 2]
        mov     eax, dword ptr [esp + 0x58]
        jmp     case3e
case3d:
        xor     ecx, ecx
case3e:
        mov     edi, dword ptr [edi + 0x10]
        movzx   edx, word ptr [esp + 0x54]
        mov     dword ptr [esp + 0x3c], eax
        xor     eax, eax
        mov     ax, cx
        push    edi
        push    4
        mov     dword ptr [esp + 0x40], edx
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esp + 0x34], ebp
        mov     dword ptr [esp + 0x48], eax
        lea     eax, [esp + 0x34]
        push    eax
        push    0x20
        push    esi
        mov     dword ptr [esp + 0x44], 0x48
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x5c], edx
        call    FUN_10033480
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jne     case3f
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x48], 0x8007000e
        mov     eax, dword ptr [esp + 0x48]
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
case3f:
        mov     esi, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x18], 4
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 4]
        mov     ebx, dword ptr [esp + 0x10]
        xor     ebp, ebp
        jmp     common
case4:
        call    dword ptr [g_10049204]
        mov     dword ptr [esi], eax
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        push    edi
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esi + 0x10]
        push    0x18
        jmp     case5b
case5:
        mov     edi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        push    1
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esi + 8]
        push    0x10
case5b:
        push    esi
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], eax
        call    FUN_10033480
        cmp     eax, ebp
        mov     dword ptr [esp + 0x28], eax
        jne     case5c
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x48], 0x8007000e
        mov     eax, dword ptr [esp + 0x48]
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
case5c:
        mov     dword ptr [esp + 0x18], 4
        jmp     common
case6:
        push    esi
        mov     ecx, edi
        call    FUN_100309a0
        mov     dword ptr [esp + 0x24], 0xc
common:
        cmp     ebx, ebp
        je      common2
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x18]
        push    eax
        push    ebx
        call    dword ptr [edx + 0xc]
common2:
        mov     eax, dword ptr [esp + 0x50]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3c
        ret     0xc
defcase:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x3c
        ret     0xc
    }
}
