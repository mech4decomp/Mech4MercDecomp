/*
 * FUN_1001CD10 (425 B) - __stdcall, RET 0x18.  String-table load helper:
 * allocates two arrays, iterates entries calling FUN_10001f90 /
 * FUN_1001cfb0, and dispatches via FUN_1001d0a0 / FUN_1001da50.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10001f90(void);   /* rel32 call, RET 0xC */
extern void __cdecl FUN_10001d50(void);     /* rel32 call (alloc) */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (free) */
extern void __stdcall FUN_1001cfb0(void);   /* rel32 call, RET 0xC */
extern void __fastcall FUN_1001d0a0(void);  /* rel32 call, this in ecx, RET 0x4 */
extern void __stdcall FUN_1001da50(void);   /* rel32 call, RET 0x14 */

__declspec(naked) void __stdcall FUN_1001CD10(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        xor     ebx, ebx
        push    esi
        push    ebp
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     word ptr [ebp + esi*2], bx
        call    FUN_10001f90
        cmp     eax, ebx
        jl      L_ceaf
        mov     edi, dword ptr [esp + 0x34]
        cmp     edi, ebx
        jbe     L_ce5e
        lea     eax, [edi*4 + 4]
        push    eax
        call    FUN_10001d50
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        mov     dword ptr [esp + 0x10], ebx
        jne     L_cd76
        mov     esi, 0x8007000e
        jmp     L_ce8b
L_cd76:
        lea     eax, [edi*4 + 4]
        push    eax
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jne     L_cd98
        mov     esi, 0x8007000e
        jmp     L_ce8b
L_cd98:
        shr     edi, 1
        test    edi, edi
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x1c], 0
        jbe     L_ce50
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x38]
        sub     edx, ecx
        sub     ebx, eax
        mov     ebp, eax
        lea     edi, [ecx + 4]
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x3c], ebx
        jmp     L_cdd0
L_cdc9:
        mov     esi, dword ptr [esp + 0x30]
        __emit 0x8D  /* __emit: lea ecx,[ecx+0] (8D 49 00); MSVC6 drops the 00 disp -> 8D 09 */
        __emit 0x49
        __emit 0x00
L_cdd0:
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [ecx + edx*8]
        mov     eax, dword ptr [edi - 4]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        push    ebx
        mov     word ptr [ebx + eax*2], 0
        call    FUN_10001f90
        mov     esi, eax
        test    esi, esi
        jl      L_ce8b
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [edx + ebp], ebx
        mov     ebx, dword ptr [eax + edi]
        mov     ecx, dword ptr [edi]
        mov     word ptr [ebx + ecx*2], 0
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x28]
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        push    ebx
        call    FUN_1001cfb0
        mov     esi, eax
        test    esi, esi
        jl      L_ce8b
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x34]
        inc     eax
        mov     dword ptr [ebp], ebx
        add     edi, 8
        add     ebp, 4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jb      L_cdc9
        mov     ebp, dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, ecx
L_ce50:
        mov     dword ptr [ebx + edi*4], 0
        mov     dword ptr [eax + edi*4], 0
L_ce5e:
        mov     ebx, dword ptr [esp + 0x28]
        push    ebp
        mov     ecx, ebx
        call    FUN_1001d0a0
        mov     esi, eax
        test    esi, esi
        jl      L_ce8b
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 4]
        push    ecx
        push    edx
        push    edi
        push    ebp
        push    eax
        call    FUN_1001da50
        mov     esi, eax
        test    esi, esi
        jge     L_cead
L_ce8b:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_ce9c
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_ce9c:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_cead
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_cead:
        mov     eax, esi
L_ceaf:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x18
    }
}
