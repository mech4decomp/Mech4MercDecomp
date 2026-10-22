/*
 * FUN_00402a00 (767 B) - Game-list filter setup: reads filter parameters from
 * a config, applies them to a set of up to 16 filter slots. __stdcall, 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f7970(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006fabf0(void);

extern int  *g_76b318;   /* atoi IAT */
extern char *g_76b320;   /* strncpy IAT */

extern int g_7b7de4;
extern int g_7b7ddc;
extern int g_7b7de0;

__declspec(naked) void FUN_00402a00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        xor     ebx, ebx
        xor     esi, esi
        cmp     eax, 1
        push    edi
        mov     dword ptr [g_7b7de4], ebx
        mov     dword ptr [ebp - 4], ebx
        jz      L_402a2f
        cmp     eax, 2
        jz      L_402a2f
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_402a2f:
        call    FUN_006f89f0
        call    FUN_006f5ed0
        mov     eax, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [eax]
        cmp     edi, -1
        jnz     L_402a4d
        mov     eax, dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 4], eax
        jmp     L_402a9f
L_402a4d:
        call    FUN_006f89f0
        test    eax, eax
        jnz     L_402a6c
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_402a6c:
        call    FUN_006f89f0
        mov     eax, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [edi]
        lea     ecx, [ebp - 4]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006f7970
        test    al, al
        jnz     L_402a9c
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_402a9c:
        mov     eax, dword ptr [ebp - 4]
L_402a9f:
        cmp     eax, ebx
        jz      L_402cec
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f6410
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 4]
        push    0x79fa24
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        cmp     eax, ebx
        jz      L_402b16
        push    eax
        call    dword ptr [g_76b318]
        mov     edi, eax
        add     esp, 4
        cmp     edi, 0x10
        mov     dword ptr [ebp + 0x10], edi
        jle     L_402aee
        mov     dword ptr [ebp + 0x10], 0x10
L_402aeb:
        mov     edi, dword ptr [ebp + 0x10]
L_402aee:
        mov     ecx, dword ptr [ebp - 4]
        push    0x79fa84
        push    ecx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        cmp     eax, ebx
        jz      L_402b1b
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_402b1e
L_402b16:
        mov     dword ptr [ebp + 0x10], ebx
        jmp     L_402aeb
L_402b1b:
        mov     dword ptr [ebp - 0xc], ebx
L_402b1e:
        cmp     dword ptr [ebp - 0xc], edi
        jle     L_402b26
        mov     dword ptr [ebp - 0xc], edi
L_402b26:
        mov     edx, dword ptr [ebp - 4]
        push    0x79fa60
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        cmp     eax, ebx
        jz      L_402b49
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
L_402b49:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x3c]
        mov     dword ptr [ebp - 0x14], ecx
        mov     dword ptr [ebp + 0xc], ebx
        call    FUN_006f8430
        test    eax, eax
        mov     edi, dword ptr [g_76b320]
        jle     L_402c1a
L_402b68:
        mov     edx, dword ptr [ebp + 0xc]
        lea     ecx, [ebp - 8]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x14]
        push    edx
        call    FUN_006f7970
        test    al, al
        jnz     L_402b94
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    0x76b9e0
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_402c02
        int     3
        jmp     L_402c02
L_402b94:
        mov     ecx, dword ptr [ebp - 8]
        push    0x79fb68
        push    ecx
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_006f5b80
        cmp     eax, ebx
        jz      L_402bfd
        mov     edx, dword ptr [g_7b7ddc]
        push    0x13
        push    eax
        mov     eax, dword ptr [edx + esi*4]
        push    eax
        call    edi
        mov     ecx, dword ptr [g_7b7ddc]
        mov     edx, dword ptr [ecx + esi*4]
        mov     ecx, dword ptr [ebp - 0x10]
        add     esp, 0xc
        mov     byte ptr [edx + 0x13], bl
        mov     eax, dword ptr [ebp - 8]
        push    0x79fb70
        push    eax
        call    FUN_006f5b80
        cmp     eax, ebx
        mov     ecx, dword ptr [g_7b7de0]
        mov     ecx, dword ptr [ecx + esi*4]
        mov     byte ptr [ecx], bl
        jz      L_402bfc
        push    0x13
        push    eax
        push    ecx
        call    edi
        mov     edx, dword ptr [g_7b7de0]
        mov     eax, dword ptr [edx + esi*4]
        add     esp, 0xc
        mov     byte ptr [eax + 0x13], bl
L_402bfc:
        inc     esi
L_402bfd:
        cmp     esi, 0x10
        jge     L_402c1a
L_402c02:
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x14]
        inc     edx
        mov     dword ptr [ebp + 0xc], edx
        call    FUN_006f8430
        cmp     dword ptr [ebp + 0xc], eax
        jl      L_402b68
L_402c1a:
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp + 0xc]
        sub     eax, edx
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x14], eax
        jge     L_402c80
L_402c2c:
        mov     ecx, dword ptr [g_7b7ddc]
        mov     edx, dword ptr [ecx + esi*4]
        push    0x13
        push    0x76b9d0
        push    edx
        call    edi
        mov     eax, dword ptr [g_7b7ddc]
        mov     ecx, dword ptr [eax + esi*4]
        mov     edx, dword ptr [g_7b7de0]
        mov     eax, dword ptr [edx + esi*4]
        push    0x13
        push    0x76b9c0
        push    eax
        mov     byte ptr [ecx + 0x13], bl
        call    edi
        mov     ecx, dword ptr [g_7b7de0]
        mov     edx, dword ptr [ecx + esi*4]
        add     esp, 0x18
        inc     esi
        cmp     esi, 0x10
        mov     byte ptr [edx + 0x13], bl
        jge     L_402c80
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x14]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp + 0xc], eax
        jl      L_402c2c
L_402c80:
        mov     eax, dword ptr [ebp + 0x10]
        cmp     dword ptr [ebp + 0xc], eax
        jge     L_402cdc
L_402c88:
        mov     ecx, dword ptr [g_7b7ddc]
        mov     edx, dword ptr [ecx + esi*4]
        push    0x13
        push    0x76b9b4
        push    edx
        call    edi
        mov     eax, dword ptr [g_7b7ddc]
        mov     ecx, dword ptr [eax + esi*4]
        mov     edx, dword ptr [g_7b7de0]
        mov     eax, dword ptr [edx + esi*4]
        push    0x13
        push    0x76b9c0
        push    eax
        mov     byte ptr [ecx + 0x13], bl
        call    edi
        mov     ecx, dword ptr [g_7b7de0]
        mov     edx, dword ptr [ecx + esi*4]
        add     esp, 0x18
        inc     esi
        cmp     esi, 0x10
        mov     byte ptr [edx + 0x13], bl
        jge     L_402cdf
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp + 0xc], eax
        jl      L_402c88
L_402cdc:
        cmp     esi, 0x10
L_402cdf:
        jle     L_402ce6
        mov     esi, 0x10
L_402ce6:
        mov     dword ptr [g_7b7de4], esi
L_402cec:
        call    FUN_006f89f0
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
