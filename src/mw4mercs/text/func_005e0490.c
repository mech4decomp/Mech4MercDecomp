/*
 * FUN_005e0490 (334 B) — string/format helper with obfuscated vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00547ba0(void *a, void *b);
extern void __stdcall FUN_005480c0(void *a, void *b);
extern void __stdcall FUN_005cb1c0(void *a);
extern void __stdcall FUN_005cbe50(void *a, void *b, void *c);
extern void __stdcall FUN_005e1c30(void *a, int b);
extern void __stdcall FUN_005cbf80(void *a, void *b, void *c);
extern void __stdcall FUN_005dfda0(void *a);
extern void __stdcall FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_005e0490(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b420;
__asm {
sub     esp, 0x84
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        push    esi
        push    edi
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x753f
        call    dword ptr [edx + 0x34]
        mov     esi, eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x1c], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00547ba0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        add     ecx, esi
        push    ecx
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_005480c0
        mov     edx, dword ptr [esp + 0x90]
        inc     edx
        push    edx
        lea     eax, [esp + 0x2c]
        push    0x76b9a8
        push    eax
        call dword ptr [DAT_0076b420]
        add     esp, 0xc
        lea     ecx, [esp + 0xb]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_005cb1c0
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x28]
        repne scasb
        not     ecx
        dec     ecx
        lea     edx, [esp + ecx + 0x28]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005480c0
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
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
        push    0x7539
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0xc]
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
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_005dfda0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        test    eax, eax
        pop     edi
        pop     esi
        jz      L_d7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_d7:
        add     esp, 0x84
        ret
    }


}
