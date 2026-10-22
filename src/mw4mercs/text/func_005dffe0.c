/*
 * func_005dffe0 - Log/format helper (395 B)
 * Builds a formatted log string and dispatches through the obfuscated
 * global object pointer, then calls func_005dfde0 / func_005dfda0.
 */
extern void FUN_005E1BF0(void);
extern void FUN_005CBF80(void);
extern void FUN_005CB1C0(void);
extern void FUN_005480C0(void);
extern void FUN_005CBE50(void);
extern void FUN_005E1C30(void);
extern void FUN_00547C60(void);
extern void func_005dfde0(void);
extern void func_005dfda0(void);

__declspec(naked) void func_005dffe0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
sub     esp, 0x84
        push    esi
        push    edi
        push    8
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005E1BF0
        mov     esi, dword ptr [esp + 0x90]
        cmp     esi, 8
        mov     ecx, dword ptr [esp + 0x14]
        mov     byte ptr [ecx], 0
        jnz     loc_5E0037

        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x7534
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]
        jmp     loc_5E0110

loc_5E0037:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x753f
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esp + 0xc]
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
        lea     ecx, [esp + 0x1c]
        call    FUN_005CBF80
        inc     esi
        push    esi
        lea     edx, [esp + 0x2c]
        push    0x76b9a8
        push    edx
        call dword ptr [DAT_0076b420]
        add     esp, 0xc
        lea     eax, [esp + 0xb]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005CB1C0
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x28]
        repne   scasb
        not     ecx
        dec     ecx
        lea     ecx, [esp + ecx + 0x28]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_005480C0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005CBE50
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005E1C30
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x753c
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]

loc_5E0110:
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
        lea     ecx, [esp + 0x1c]
        call    FUN_005CBF80
        mov     ecx, dword ptr [esp + 0x98]
        mov     edx, dword ptr [esp + 0x94]
        push    ecx
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        call    func_005dfde0
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    func_005dfda0
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x28]
        sub     edx, eax
        push    edx
        push    eax
        call    FUN_00547C60
        add     esp, 0x18
        pop     edi
        pop     esi
        add     esp, 0x84
        ret
    }


}
