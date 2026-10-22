/*
 * FUN_5e005220 (502 B) — DirectDraw wrapper dispatcher.
 *
 * __stdcall, RET 0x10 (4 stack params). ECX = this (stored to local).
 * Dispatches to FUN_5e004490/4680/4870/4a60/4c60/4e50 based on flag bits
 * in param_4, then FUN_5e005050 and FUN_5e012eb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e004490(void);
extern void __cdecl FUN_5e004680(void);
extern void __cdecl FUN_5e004870(void);
extern void __cdecl FUN_5e004a60(void);
extern void __cdecl FUN_5e004c60(void);
extern void __cdecl FUN_5e004e50(void);
extern void __cdecl FUN_5e005050(void);
extern void __cdecl FUN_5e012eb0(void);

__declspec(naked) void __stdcall FUN_5e005220(void)
{
    __asm {
        sub     esp, 0x38c
        mov     eax, dword ptr [esp + 0x390]
        mov     edx, dword ptr [esp + 0x398]
        push    ebx
        mov     ebx, dword ptr [esp + 0x3a0]
        mov     dword ptr [esp + 0x8], ecx
        push    ebp
        mov     ecx, dword ptr [esp + 0x39c]
        push    esi
        push    edi
        lea     esi, [esp + 0x18]
        test    bl, 0x1
        lea     ebp, [esp + 0x54]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     edi, 0x3
        mov     dword ptr [esp + 0x10], 0x0
        jz      L_52dc
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0x90]
        push    eax
        lea     edx, [esp + 0x58]
        push    ecx
        push    edx
        lea     eax, [esp + 0x24]
        push    edi
        push    eax
        call    FUN_5e004490
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     eax, dword ptr [esp + 0x54]
        lea     ecx, [esp + 0x54]
        lea     edx, [edi - 1]
        fld     dword ptr [eax + 0x24]
        fcomp   dword ptr [eax + 0x30]
        fnstsw ax
        test ah, 0x41
        jz      L_52c9
    L_52b0:
        add     ecx, 4
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_52d0
        mov     eax, dword ptr [ecx]
        fld     dword ptr [eax + 0x24]
        fcomp   dword ptr [eax + 0x30]
        fnstsw ax
        test ah, 0x41
        jnz     L_52b0
    L_52c9:
        mov     eax, 0x8
        jmp     L_52d2
    L_52d0:
        xor     eax, eax
    L_52d2:
        or      ebx, eax
        lea     esi, [esp + 0x54]
        lea     ebp, [esp + 0x18]
    L_52dc:
        test    bl, 0x2
        jz      L_5307
        lea     ecx, [esp + 0x10]
        lea     edx, [esp + 0x90]
        push    ecx
        push    edx
        push    ebp
        push    edi
        push    esi
        call    FUN_5e004680
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     eax, esi
        mov     esi, ebp
        mov     ebp, eax
    L_5307:
        test    bl, 0x4
        jz      L_5332
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0x90]
        push    eax
        push    ecx
        push    ebp
        push    edi
        push    esi
        call    FUN_5e004870
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     eax, esi
        mov     esi, ebp
        mov     ebp, eax
    L_5332:
        test    bl, 0x8
        jz      L_535d
        lea     edx, [esp + 0x10]
        lea     eax, [esp + 0x90]
        push    edx
        push    eax
        push    ebp
        push    edi
        push    esi
        call    FUN_5e004a60
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     eax, esi
        mov     esi, ebp
        mov     ebp, eax
    L_535d:
        test    bl, 0x10
        jz      L_5388
        lea     ecx, [esp + 0x10]
        lea     edx, [esp + 0x90]
        push    ecx
        push    edx
        push    ebp
        push    edi
        push    esi
        call    FUN_5e004c60
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     eax, esi
        mov     esi, ebp
        mov     ebp, eax
    L_5388:
        test    bl, 0x20
        jz      L_53ab
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0x90]
        push    eax
        push    ecx
        push    ebp
        push    edi
        push    esi
        call    FUN_5e004e50
        mov     edi, eax
        cmp     edi, 0x3
        jl      L_5409
        mov     esi, ebp
    L_53ab:
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        push    esi
        call    FUN_5e005050
        mov     ebp, dword ptr [esp + 0x14]
        cmp     dword ptr [ebp + 0x45d0], 0x1
        jnz     L_53e0
        test    edi, edi
        jle     L_53e0
        mov     eax, esi
        mov     ecx, edi
    L_53cb:
        mov     ebx, dword ptr [esp + 0x3a0]
        mov     edx, dword ptr [eax]
        add     eax, 4
        dec     ecx
        mov     ebx, dword ptr [ebx + 0x10]
        mov     dword ptr [edx + 0x10], ebx
        jnz     L_53cb
    L_53e0:
        lea     eax, [edi - 2]
        test    eax, eax
        jle     L_5409
        add     ebp, 0x400c
        lea     edi, [esi + 0x4]
        mov     ebx, eax
    L_53f2:
        mov     eax, dword ptr [edi + 0x4]
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_5e012eb0
        add     edi, 4
        dec     ebx
        jnz     L_53f2
    L_5409:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x38c
        ret     0x10
    }
}
