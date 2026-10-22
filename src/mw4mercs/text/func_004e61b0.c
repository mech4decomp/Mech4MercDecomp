/* FUN_004e61b0 - MLR/Adept armor-zone state loader (482 B) */

extern int g_7dc76c;   /* DAT_007dc76c */
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004e6730(void);
extern void __cdecl FUN_004e7e60(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_004e61b0(void)
{
    __asm {
        sub     esp, 0x34
        push    esi
        mov     esi, dword ptr [esp + 0x40]
        push    0
        lea     eax, [esp + 0x8]
        push    eax
        push    0x774144
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0x76b768
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x4]
        push    ecx
        call    FUN_004e6730
        add     esp, 4
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    0x774130
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], eax
        call    FUN_00411bf0
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_004e7e60
        add     esp, 4
        push    0
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x774118
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        jz      L_004e6238
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        call    FUN_004e6730
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
L_004e6238:
        push    0
        lea     eax, [esp + 0x44]
        push    eax
        push    0x774108
        mov     ecx, esi
        mov     dword ptr [esp + 0x4c], 0
        call    FUN_00411d60
        mov     ecx, dword ptr [esp + 0x40]
        push    0
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x18], ecx
        push    0x7740f8
        mov     ecx, esi
        call    FUN_00411d60
        push    0
        lea     eax, [esp + 0xc]
        push    eax
        push    0x7740e4
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jnz     L_004e628d
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x8], ecx
L_004e628d:
        push    0
        lea     edx, [esp + 0x10]
        push    edx
        push    0x7740d0
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jnz     L_004e62ac
        mov     dword ptr [esp + 0xc], 0x3f800000
L_004e62ac:
        mov     eax, dword ptr [g_7dc76c]
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x30], 0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     esi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x3c], 0
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop     esi
        jz      L_004e638e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_004e638e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_004e638e:
        add     esp, 0x34
        ret
    }
}
