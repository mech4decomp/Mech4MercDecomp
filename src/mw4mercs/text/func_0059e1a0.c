/*
 * FUN_0059E1A0 (261 B)
 *
 * CFLAGS: /O1
 */

extern int DAT_007f2004;
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0059dba0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0059e730(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0059E1A0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007f2004]
        sub     esp, 0x0c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_004d5b10
        push    1
        lea     esi, [edi + 0x10]
        xor     ebp, ebp
        push    ebp
        mov     ecx, esi
        call    FUN_00416990
        mov     dword ptr [esi], 0x78392c
        mov     esi, [esp + 0x20]
        cmp     esi, ebp
        lea     ebx, [edi + 0x24]
        mov     [ebx], ebp
        mov     [ebx + 4], ebp
        mov     dword ptr [edi], 0x783920
        mov     [edi + 0x2c], ebp
        je      L_e225
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, [esp + 0x10]
        test    eax, eax
        jle     L_e223
    L_e1f8:
        push    0x44
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_e210
        push    esi
        mov     ecx, eax
        call    FUN_0059dba0
        jmp     L_e212
    L_e210:
        xor     eax, eax
    L_e212:
        push    eax
        mov     ecx, ebx
        call    FUN_004179b0
        mov     eax, [esp + 0x10]
        inc     ebp
        cmp     ebp, eax
        jl      L_e1f8
    L_e223:
        xor     ebp, ebp
    L_e225:
        cmp     esi, ebp
        mov     [edi + 0x2c], ebp
        je      L_e299
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, [esp + 0x14]
        xor     ebx, ebx
        cmp     eax, ebp
        jle     L_e299
    L_e244:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     [esp + 0x28], ebp
        call    dword ptr [edx + 0x20]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    FUN_00412a00
        mov     edx, [esp + 0x28]
        mov     eax, [esp + 0x20]
        add     esp, 8
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_0059e730
        mov     eax, [esp + 0x20]
        cmp     eax, ebp
        je      L_e290
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_e290
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_e290:
        mov     eax, [esp + 0x14]
        inc     ebx
        cmp     ebx, eax
        jl      L_e244
    L_e299:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x0c
        ret     4
    }
}
