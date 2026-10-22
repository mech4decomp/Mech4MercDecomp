/*
 * FUN_0052A000 (1092 B) — __stdcall, 3 args (ret 0xc). Two-pass object
 * enumeration: builds a string list, walks a linked list of sub-objects,
 * counts matches, and frees temporaries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0041D890(void);
extern void __cdecl FUN_0041DB30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0040DCA0(void);
extern void __cdecl FUN_0040ECC0(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_0040DD50(void);
extern void __cdecl FUN_0041F8D0(void);
extern void __cdecl FUN_00411CB0(void);
extern void __cdecl FUN_0040DE20(void);
extern void __cdecl FUN_0041DB70(void);
extern void __cdecl FUN_0041DAC0(void);

__declspec(naked) void FUN_0052A000(void)
{
    __asm {
        sub     esp, 0xc0
        mov     eax, dword ptr [esp + 0xcc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    ebp
        push    edi
        xor     edi, edi
        push    0x779fc8
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x28], edx
        xor     ebx, ebx
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00412570
        push    0x38
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        je      l_52A04E
        mov     ecx, dword ptr [esp + 0x14]
        push    1
        push    ecx
        mov     ecx, eax
        call    FUN_0041D890
        mov     ebp, eax
        jmp     l_52A050
    l_52A04E:
        xor     ebp, ebp
    l_52A050:
        push    esi
        mov     ecx, ebp
        call    FUN_0041DB30
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A208
    l_52A062:
        push    0x779cb0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        je      l_52A0A8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_52A0A8
        push    eax
        call    FUN_004084E0
        add     esp, 4
    l_52A0A8:
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    eax
        lea     ecx, [esp + 0x8c]
        call    FUN_0040DCA0
        push    0x772f0c
        lea     ecx, [esp + 0x84]
        call    FUN_0040ECC0
        cmp     eax, ebx
        je      l_52A1C5
        push    ebx
        lea     ecx, [esp + 0x30]
        push    ecx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411BF0
        test    al, al
        je      l_52A1C5
        push    0x779fb0
        lea     ecx, [esp + 0x84]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A1C5
        push    0xc
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        je      l_52A12D
        mov     edx, dword ptr [esi + 0x18]
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x76cc9c
        mov     edi, eax
        jmp     l_52A12F
    l_52A12D:
        xor     edi, edi
    l_52A12F:
        mov     eax, dword ptr [edi + 8]
        cmp     eax, ebx
        je      l_52A1BC
        mov     esi, dword ptr [eax]
        cmp     esi, ebx
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [edi + 8], eax
        je      l_52A1BC
        push    ebx
        lea     ecx, [esp + 0x34]
        call    FUN_0040DD50
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, esi
        call    FUN_0041F8D0
        push    0x7727b4
        lea     ecx, [esp + 0x34]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A1AE
        push    ebx
        lea     edx, [esp + 0x24]
        push    edx
        push    0x779d58
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00411CB0
        test    al, al
        je      l_52A1AE
        push    ebx
        lea     eax, [esp + 0x28]
        push    eax
        push    0x779fa8
        mov     ecx, esi
        call    FUN_00411BF0
        test    al, al
        je      l_52A1AE
        mov     ecx, dword ptr [esp + 0x28]
        cmp     dword ptr [esp + 0x20], ecx
        jne     l_52A1AE
        inc     dword ptr [esp + 0x14]
    l_52A1AE:
        lea     ecx, [esp + 0x30]
        call    FUN_0040DE20
        jmp     l_52A12F
    l_52A1BC:
        push    edi
        call    FUN_004084E0
        add     esp, 4
    l_52A1C5:
        mov     ecx, ebp
        call    FUN_0041DB70
        lea     ecx, [esp + 0x80]
        call    FUN_0040DE20
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      l_52A1F3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_52A1F3
        push    eax
        call    FUN_004084E0
        add     esp, 4
    l_52A1F3:
        mov     ecx, ebp
        call    FUN_0041DB30
        mov     esi, eax
        cmp     esi, ebx
        jne     l_52A062
        mov     edi, dword ptr [esp + 0x14]
    l_52A208:
        cmp     ebp, ebx
        je      l_52A21C
        mov     ecx, ebp
        call    FUN_0041DAC0
        push    ebp
        call    FUN_004084E0
        add     esp, 4
    l_52A21C:
        push    0x779f8c
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780
        push    0x38
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        je      l_52A24A
        mov     edx, dword ptr [esp + 0x18]
        push    1
        push    edx
        mov     ecx, eax
        call    FUN_0041D890
        mov     ebp, eax
        jmp     l_52A24C
    l_52A24A:
        xor     ebp, ebp
    l_52A24C:
        mov     ecx, ebp
        call    FUN_0041DB30
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A406
    l_52A25D:
        push    0x779d68
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        je      l_52A2A3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_52A2A3
        push    eax
        call    FUN_004084E0
        add     esp, 4
    l_52A2A3:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebx
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0040DCA0
        push    0x772f0c
        lea     ecx, [esp + 0x34]
        call    FUN_0040ECC0
        cmp     eax, ebx
        je      l_52A3C6
        push    ebx
        lea     edx, [esp + 0x30]
        push    edx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411BF0
        test    al, al
        je      l_52A3C6
        push    0x779fb0
        lea     ecx, [esp + 0x34]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A3C6
        push    0xc
        call    FUN_004084D0
        add     esp, 4
        cmp     eax, ebx
        je      l_52A31E
        lea     ecx, [esi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cc9c
        mov     edi, eax
        jmp     l_52A320
    l_52A31E:
        xor     edi, edi
    l_52A320:
        mov     eax, dword ptr [edi + 8]
        cmp     eax, ebx
        je      l_52A3BD
        mov     esi, dword ptr [eax]
        cmp     esi, ebx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [edi + 8], edx
        je      l_52A3BD
        push    ebx
        lea     ecx, [esp + 0x84]
        call    FUN_0040DD50
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        call    FUN_0041F8D0
        push    0x7727b4
        lea     ecx, [esp + 0x84]
        call    FUN_0040ECC0
        mov     esi, eax
        cmp     esi, ebx
        je      l_52A3AC
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x779d58
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00411CB0
        test    al, al
        je      l_52A3AC
        push    ebx
        lea     edx, [esp + 0x28]
        push    edx
        push    0x779fa8
        mov     ecx, esi
        call    FUN_00411BF0
        test    al, al
        je      l_52A3AC
        mov     eax, dword ptr [esp + 0x28]
        cmp     dword ptr [esp + 0x1c], eax
        jne     l_52A3AC
        inc     dword ptr [esp + 0x14]
    l_52A3AC:
        lea     ecx, [esp + 0x80]
        call    FUN_0040DE20
        jmp     l_52A320
    l_52A3BD:
        push    edi
        call    FUN_004084E0
        add     esp, 4
    l_52A3C6:
        mov     ecx, ebp
        call    FUN_0041DB70
        lea     ecx, [esp + 0x30]
        call    FUN_0040DE20
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      l_52A3F1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_52A3F1
        push    eax
        call    FUN_004084E0
        add     esp, 4
    l_52A3F1:
        mov     ecx, ebp
        call    FUN_0041DB30
        mov     esi, eax
        cmp     esi, ebx
        jne     l_52A25D
        mov     edi, dword ptr [esp + 0x14]
    l_52A406:
        cmp     ebp, ebx
        pop     esi
        je      l_52A41B
        mov     ecx, ebp
        call    FUN_0041DAC0
        push    ebp
        call    FUN_004084E0
        add     esp, 4
    l_52A41B:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      l_52A436
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     l_52A436
        push    eax
        call    FUN_004084E0
        add     esp, 4
    l_52A436:
        mov     eax, edi
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0xc0
        ret     0xc
    }
}
