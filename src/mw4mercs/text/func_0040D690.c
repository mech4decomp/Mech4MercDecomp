/*
 * FUN_0040D690 (794 B, 0x40D690-0x40D9A9) — __cdecl GameOS string-table /
 * object-list teardown routine. Constructs a set of string objects via
 * FUN_00412570 (thiscall ctor, string arg) at 0x76d0e0/0x76d0c8/0x76d0b8/
 * 0x76d0b4/0x76d0b0/0x76d0ac/0x76d0a8/0x76d09c/0x76d090/0x76d08c/0x76d088/
 * 0x76d084, links them via FUN_004125E0/FUN_00412670/FUN_00412740, then
 * decrements each object's refcount (byte before the pointer) and frees via
 * FUN_004084E0 when it hits zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_76d0e0[];   /* 0x76d0e0 - string */
extern char g_76d0c8[];   /* 0x76d0c8 - string */
extern char g_76d0b8[];   /* 0x76d0b8 - string */
extern char g_76d0b4[];   /* 0x76d0b4 - string */
extern char g_76d0b0[];   /* 0x76d0b0 - string */
extern char g_76d0ac[];   /* 0x76d0ac - string */
extern char g_76d0a8[];   /* 0x76d0a8 - string */
extern char g_76d09c[];   /* 0x76d09c - string */
extern char g_76d090[];   /* 0x76d090 - string */
extern char g_76d08c[];   /* 0x76d08c - string */
extern char g_76d088[];   /* 0x76d088 - string */
extern char g_76d084[];   /* 0x76d084 - string */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040D9B0(void);
extern void __cdecl FUN_00412670(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_0040D690(void)
{
    __asm {
        sub     esp, 0x48
        push    edi
        push    offset g_76d0e0
        lea     ecx, [esp + 8]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        mov     edi, eax
        je      L_40D6AF
        inc     byte ptr [eax - 1]

L_40D6AF:
        push    offset g_76d0c8
        lea     ecx, [esp + 0x4c]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 4]
        push    edi
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x20], 0
        call    FUN_004125E0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040D9B0
        push    offset g_76d0b8
        lea     ecx, [esp + 0x48]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 4]
        push    0x5a
        push    edx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_00412670
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040D9B0
        push    offset g_76d0e0
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040D9B0
        push    offset g_76d0e0
        lea     ecx, [esp + 0xc]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 8]
        push    0x5a
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        lea     ecx, [esp + 0x10]
        call    FUN_0040D9B0
        push    offset g_76d0b4
        lea     ecx, [esp + 0x44]
        call    FUN_00412570
        push    offset g_76d0b0
        lea     ecx, [esp + 0x40]
        call    FUN_00412570
        push    offset g_76d0ac
        lea     ecx, [esp + 0x3c]
        call    FUN_00412570
        push    offset g_76d0a8
        lea     ecx, [esp + 0x38]
        call    FUN_00412570
        push    offset g_76d0b4
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        push    offset g_76d09c
        lea     ecx, [esp + 0x30]
        call    FUN_00412570
        push    offset g_76d090
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        push    offset g_76d08c
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        push    offset g_76d088
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        push    offset g_76d084
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        lea     ecx, [esp + 0x1c]
        call    FUN_0040D9B0
        lea     ecx, [esp + 0x20]
        call    FUN_0040D9B0
        lea     ecx, [esp + 0x24]
        call    FUN_0040D9B0
        lea     ecx, [esp + 0x28]
        call    FUN_0040D9B0
        lea     ecx, [esp + 0x2c]
        call    FUN_0040D9B0
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        je      L_40D861
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D861
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D861:
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        je      L_40D87C
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D87C
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D87C:
        mov     eax, dword ptr [esp + 0x38]
        test    eax, eax
        je      L_40D897
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D897
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D897:
        mov     eax, dword ptr [esp + 0x3c]
        test    eax, eax
        je      L_40D8B2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D8B2
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D8B2:
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        je      L_40D8CD
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D8CD
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D8CD:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_40D8E8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D8E8
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D8E8:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_40D903
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D903
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D903:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_40D91E
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D91E
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D91E:
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        je      L_40D939
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D939
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D939:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        je      L_40D954
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D954
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D954:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        je      L_40D96F
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D96F
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D96F:
        test    edi, edi
        je      L_40D988
        mov     cl, byte ptr [edi - 1]
        lea     eax, [edi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D988
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D988:
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        pop     edi
        je      L_40D9A4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_40D9A4
        push    eax
        call    FUN_004084E0
        add     esp, 4

L_40D9A4:
        mov     al, 1
        add     esp, 0x48
        ret
    }
}
