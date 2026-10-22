/*
 * FUN_006e82c0 (298 B) — __cdecl, RET.
 *
 * Dialog-control helper: queries a listbox (GetDlgItem DAT_0076b5a4 +
 * SendMessageA DAT_0076b560), conditionally builds/executes a message
 * via FUN_0072d830/FUN_00412570/FUN_006e4210, decrements a refcount
 * string and frees via FUN_004084e0, stores into DAT_008589b4 and
 * calls FUN_00512510.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b5a4;   /* GetDlgItem */
extern int DAT_0076b560;   /* SendMessageA */
extern int DAT_007b4674;
extern int DAT_00841768;
extern int DAT_008589b4;
extern void *__cdecl FUN_0072d830(int a, int b);
extern void __cdecl FUN_00412570(void *a);
extern int __cdecl FUN_006e4210(void *a, void *b, int c);
extern int __cdecl FUN_00512ff0(int a, int b, void *c);
extern void __cdecl FUN_004084e0(void *a);
extern void __cdecl FUN_00512510(int a, int b, void *c);

__declspec(naked) void __cdecl FUN_006e82c0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [DAT_0076b5a4]
        push    0
        push    0
        push    0x147
        push    0x3fc
        push    esi
        call    edi
        mov     ebx, dword ptr [DAT_0076b560]
        push    eax
        call    ebx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [DAT_007b4674]
        add     eax, 2
        cmp     ecx, 4
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x10], 0x39
        mov     dword ptr [esp + 0x18], edx
        jge     L_831c
        cmp     eax, 6
        jg      L_832b
        cmp     ecx, 4
L_831c:
        jnz     L_83d0
        cmp     eax, 0xc
        jle     L_83d0
L_832b:
        mov     eax, dword ptr [DAT_00841768]
        push    0x693
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [DAT_00841768]
        push    4
        push    ecx
        push    0xc9a
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        add     esp, 0xc
        cmp     eax, 7
        jnz     L_83b1
        lea     eax, [esp + 0x14]
        push    eax
        push    1
        push    0
        call    FUN_00512ff0
        push    0
        add     eax, -2
        push    eax
        push    0x14e
        push    0x3fc
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_83e3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_83e3
        push    eax
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L_83b1:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_83cc
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_83cc
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_83cc:
        mov     eax, dword ptr [esp + 0xc]
L_83d0:
        lea     ecx, [esp + 0x14]
        push    ecx
        push    2
        push    0
        mov     dword ptr [DAT_008589b4], eax
        call    FUN_00512510
L_83e3:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
    }
}
