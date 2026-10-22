/*
 * func_005dfde0 - Log/format helper (504 B)
 * Builds a formatted log string and dispatches through the obfuscated
 * global object pointer. Two paths depending on param_3 (EDX) being null.
 */
extern void FUN_005CBD00(void);
extern void FUN_005CB1C0(void);
extern void FUN_005480C0(void);
extern void FUN_005CBE50(void);
extern void FUN_005CB3D0(void);
extern void FUN_005CBF80(void);
extern void FUN_005E1C30(void);

__declspec(naked) void func_005dfde0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
mov     edx, dword ptr [esp + 0xc]
        sub     esp, 0x78
        test    edx, edx
        push    ebx
        push    esi
        push    edi
        jz      loc_5DFF0C

        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x88]
        or      ecx, -1
        push    eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBD00
        mov     ebx, dword ptr [esp + 0x8c]
        cmp     ebx, 8
        jz      loc_5DFFD1

        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x753d
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     edx, eax
        or      ecx, -1
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBD00
        inc     ebx
        push    ebx
        lea     edx, [esp + 0x24]
        push    0x76b9a8
        push    edx
        call dword ptr [DAT_0076b420]
        add     esp, 0xc
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005CB1C0
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne   scasb
        not     ecx
        dec     ecx
        lea     ecx, [esp + ecx + 0x20]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005480C0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBE50
        lea     ecx, [esp + 0x14]
        call    FUN_005CB3D0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x753e
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, -1
        push    eax
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBF80
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x78
        ret

loc_5DFF0C:
        mov     ebx, dword ptr [esp + 0x8c]
        cmp     ebx, 8
        jz      loc_5DFFD1

        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x753f
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x88]
        push    ecx
        mov     edx, eax
        or      ecx, -1
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBF80
        inc     ebx
        push    ebx
        lea     edx, [esp + 0x24]
        push    0x76b9a8
        push    edx
        call dword ptr [DAT_0076b420]
        add     esp, 0xc
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005CB1C0
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x20]
        repne   scasb
        not     ecx
        dec     ecx
        lea     ecx, [esp + ecx + 0x20]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005480C0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005CBE50
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005E1C30

loc_5DFFD1:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x78
        ret
    }


}
