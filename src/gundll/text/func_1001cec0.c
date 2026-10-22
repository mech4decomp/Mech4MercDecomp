/*
 * FUN_1001CEC0 (174 B) - __stdcall, RET 0xC.  String-table lookup helper:
 * calls FUN_1001d0d0 to fetch a string, compares it (strcmp-like loop),
 * and on match calls FUN_1001daa0.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001d0d0(void);  /* rel32 call, this in ecx, RET 0x4 */
extern void __stdcall FUN_1001daa0(void);   /* rel32 call, RET 0x4 */
extern void __stdcall FUN_10001f90(void);   /* rel32 call, RET 0xC */

__declspec(naked) void __stdcall FUN_1001CEC0(void)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        test    esi, esi
        push    edi
        mov     dword ptr [esp + 0xc], 0
        jne     L_cef8
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, ebp
        call    FUN_1001d0d0
        test    eax, eax
        jl      L_cef1
L_cee8:
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_1001daa0
L_cef1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret     0xc
L_cef8:
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, ebp
        call    FUN_1001d0d0
        test    eax, eax
        jl      L_cef1
        mov     edi, dword ptr [esp + 0x18]
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        push    edi
        mov     word ptr [edi + esi*2], 0
        call    FUN_10001f90
        test    eax, eax
        jl      L_cef1
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, edi
        push    ebx
        __emit 0x8D  /* __emit: lea esp,[esp+0] (8D A4 24 00 00 00 00); MSVC6 emits 8D 24 24 */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_cf30:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_cf58
        test    cl, cl
        je      L_cf54
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_cf58
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_cf30
L_cf54:
        xor     eax, eax
        jmp     L_cf5d
L_cf58:
        sbb     eax, eax
        sbb     eax, -1
L_cf5d:
        test    eax, eax
        pop     ebx
        je      L_cee8
        pop     edi
        pop     esi
        mov     eax, 0xc1121c02
        pop     ebp
        pop     ecx
        ret     0xc
    }
}
