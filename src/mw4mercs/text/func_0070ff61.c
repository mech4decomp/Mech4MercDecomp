/*
 * FUN_0070FF61 (296 B @ 0x70FF61) - __cdecl. UI/draw routine: checks globals
 * 0x85A270 / 0x85B608 / 0x858940 / 0x858944, calls 0x717650 / 0x713CC0 /
 * 0x7103B0 / 0x73D430 / 0x73D3B0 / 0x716950, and writes globals 0x8AAF30 /
 * 0x8AAF2C. Two loops build 0xF text/color entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00717650(void);
extern int  dword_85A270;
extern int  dword_85B608;
extern int  dword_858940;
extern int  dword_858944;
extern void __cdecl FUN_00713CC0(void);
extern void __cdecl FUN_007103B0(void);
extern void __cdecl FUN_0073D430(void);
extern int  dword_8AAF30;
extern int  dword_8AAF2C;
extern void __cdecl FUN_0073D3B0(void);
extern void __cdecl FUN_00716950(void);

__declspec(naked) void FUN_0070FF61(void)
{
    __asm {
        push    0
        call    FUN_00717650
        mov     eax, dword ptr [dword_85A270]
        test    eax, eax
        je      L_710085
        mov     eax, dword ptr [dword_85B608]
        test    eax, eax
        jne     L_710085
        mov     eax, dword ptr [dword_858940]
        cdq
        push    ebx
        push    ebp
        sub     eax, edx
        mov     esi, eax
        mov     eax, dword ptr [dword_858944]
        push    0
        sar     esi, 1
        push    1
        sub     esi, 0x80
        lea     ebp, [eax - 0x50]
        call    FUN_00713CC0
        push    2
        push    0x10
        call    FUN_00713CC0
        push    1
        push    0xd
        call    FUN_00713CC0
        push    0xff606060
        push    0x2c
        push    0x10e
        push    ebp
        lea     ecx, [esi - 6]
        push    ecx
        call    FUN_007103B0
        call    FUN_0073D430
        push    1
        push    0xd
        call    FUN_00713CC0
        xor     ebx, ebx
        mov     edi, esi
L_70FFE1:
        cmp     ebx, 7
        lea     eax, [ebp + 8]
        mov     dword ptr [dword_8AAF30], edi
        mov     dword ptr [dword_8AAF2C], eax
        jae     L_710003
        mov     dl, 0x37
        sub     dl, bl
        mov     byte ptr [esp + 0x10], 0x2d
        mov     byte ptr [esp + 0x11], dl
        jmp     L_710019
L_710003:
        mov     cl, bl
        lea     eax, [edi - 0xa]
        add     cl, 0x29
        mov     dword ptr [dword_8AAF30], eax
        mov     byte ptr [esp + 0x10], 0x2b
        mov     byte ptr [esp + 0x11], cl
L_710019:
        cmp     ebx, 7
        mov     byte ptr [esp + 0x12], 0
        je      L_710032
        lea     edx, [esp + 0x10]
        push    edx
        push    0xffffff
        call    FUN_0073D3B0
L_710032:
        inc     ebx
        add     edi, 0x12
        cmp     ebx, 0xf
        jb      L_70FFE1
        push    0
        push    1
        call    FUN_00713CC0
        push    2
        push    0x10
        call    FUN_00713CC0
        push    1
        push    0xd
        call    FUN_00713CC0
        xor     edi, edi
L_710058:
        cmp     edi, 7
        je      L_71007A
        lea     eax, [edi - 7]
        push    eax
        call    FUN_00716950
        push    eax
        push    0xe
        push    0xe
        lea     ecx, [ebp + 0x14]
        push    ecx
        push    esi
        call    FUN_007103B0
        add     esi, 0x12
        jmp     L_71007D
L_71007A:
        add     esi, 8
L_71007D:
        inc     edi
        cmp     edi, 0xf
        jb      L_710058
        pop     ebp
        pop     ebx
L_710085:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
