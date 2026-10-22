/*
 * FUN_005e0170 (395 B) — string/format helper with obfuscated vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e1bf0(void *a, int b);
extern void __stdcall FUN_005cbf80(void *a, void *b, void *c);
extern void __stdcall FUN_005cb1c0(void *a);
extern void __stdcall FUN_005480c0(void *a, void *b);
extern void __stdcall FUN_005cbe50(void *a, void *b, void *c);
extern void __stdcall FUN_005e1c30(void *a, int b);
extern void __stdcall FUN_005dfde0(void *a, int b, int c);
extern void __stdcall FUN_005dfda0(void *a);
extern void __stdcall FUN_00547c60(void *a, int b);

__declspec(naked) void __stdcall FUN_005e0170(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
sub     esp, 0x84
        push    esi
        push    edi
        push    0x8
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005e1bf0
        mov     esi, dword ptr [esp + 0x90]
        cmp     esi, 0x8
        mov     ecx, dword ptr [esp + 0x14]
        mov     byte ptr [ecx], 0x0
        jnz     L_c7
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x7533
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]
        jmp     L_2a0
L_c7:
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
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005cbf80
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
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x28]
        repne scasb
        not     ecx
        dec     ecx
        lea     ecx, [esp + ecx + 0x28]
        push    ecx
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_005480c0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005cbe50
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005e1c30
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x753b
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]
L_2a0:
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_005cbf80
        mov     ecx, dword ptr [esp + 0x98]
        mov     edx, dword ptr [esp + 0x94]
        push    ecx
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        call    FUN_005dfde0
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_005dfda0
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x28]
        sub     edx, eax
        push    edx
        push    eax
        call    FUN_00547c60
        add     esp, 0x18
        pop     edi
        pop     esi
        add     esp, 0x84
        ret
    }


}
