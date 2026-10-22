/*
 * FUN_0059BC80 (249 B)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084E0(void);
extern int *DAT_0076b2b0;

__declspec(naked) void __stdcall FUN_0059BC80(void)
{
    __asm {
        mov     ecx, [ecx + 0x10]
        sub     esp, 0x0C
        push    ebx
        push    ebp
        mov     ebp, [esp + 0x18]
        push    esi
        push    edi
    L_0E:
        test    ecx, ecx
        jz      L_CA
        mov     eax, [ecx]
        test    eax, eax
        mov     ecx, [ecx + 4]
        mov     [esp + 0x18], ecx
        mov     [esp + 0x20], eax
        jz      L_D2
        mov     cl, [esp + 0x24]
        test    cl, cl
        jz      L_99
        mov     edi, [eax + 0x14]
        test    edi, edi
        jz      L_3D
        inc     byte ptr [edi - 1]
    L_3D:
        mov     esi, ebp
        mov     eax, edi
    L_41:
        mov     dl, [eax]
        mov     bl, [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_69
        test    cl, cl
        jz      L_65
        mov     dl, [eax + 1]
        mov     bl, [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_69
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_41
    L_65:
        xor     eax, eax
        jmp     L_6E
    L_69:
        sbb     eax, eax
        sbb     eax, -1
    L_6E:
        test    eax, eax
        sete    bl
        test    edi, edi
        jz      L_8C
        mov     cl, [edi - 1]
        lea     eax, [edi - 1]
        dec     cl
        mov     [eax], cl
        jne     L_8C
    L_83:
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_8C:
        test    bl, bl
        jne     L_D2
        mov     ecx, [esp + 0x18]
        jmp     L_0E
    L_99:
        mov     esi, [eax + 0x14]
        test    esi, esi
        jz      L_A3
        inc     byte ptr [esi - 1]
    L_A3:
        push    4
        push    ebp
        push    esi
        call    dword ptr [DAT_0076b2b0]
        add     esp, 0xC
        mov     ebx, eax
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    esi, esi
        jz      L_8C
        mov     cl, [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     [eax], cl
        jne     L_8C
        jmp     L_83
    L_CA:
        mov     dword ptr [esp + 0x20], 0
    L_D2:
        test    ebp, ebp
        jz      L_EB
        mov     cl, [ebp - 1]
        lea     eax, [ebp - 1]
        dec     cl
        mov     [eax], cl
        jne     L_EB
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_EB:
        mov     eax, [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     8
    }
}
