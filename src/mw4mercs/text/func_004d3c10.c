/*
 * FUN_004d3c10 (818 B) -- MLR network/server subsystem main update/tick.
 *
 * Calls FUN_006f4950, walks a state object (via the XOR-obfuscated global
 * pointer chain at 0x7dab44/0x7dab40), invokes virtual methods, and performs
 * a large state-machine update (double-precision time value from
 * FUN_00707e70, several virtual dispatch calls, a retry loop, and a final
 * FUN_006d1c20 call).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int a);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004deac0(void);
extern double __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_004d6740(int a, int b);
extern void __cdecl FUN_004c8ee0(void);
extern void __cdecl FUN_004e3250(int a, int b);
extern void __cdecl FUN_004d6780(int a, int b);
extern void __cdecl FUN_004cca00(void);
extern void __cdecl FUN_004e2930(void *a);
extern void __cdecl FUN_0048fb80(int a);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_006d1c20(int a, int b, int c);

extern int g_007dc12c;   /* DAT_007dc12c */
extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007dc6b4;   /* DAT_007dc6b4 */
extern int g_007dc728;   /* DAT_007dc728 */
extern int g_007b95a4;   /* DAT_007b95a4 */
extern int g_007da848;   /* DAT_007da848 */
extern int g_00840048;   /* DAT_00840048 */
extern int g_00840008;   /* DAT_00840008 */
extern int g_007dc6e0;   /* DAT_007dc6e0 */
extern char g_76ff10[];  /* PTR_LAB_0076ff10 */

__declspec(naked) void __stdcall FUN_004d3c10(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc12c]
        sub     esp, 0x3c
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx + 0xc]
        xor     esi, 0x85739531
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     dword ptr [ecx + 0x14], 0x4
        mov     eax, 0x1
        jnz     L3C4B
        mov     eax, 0xa
L3C4B:
        mov     edi, dword ptr [esi + 0x60]
        mov     ebx, eax
L3C50:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        dec     ebx
        jnz     L3C50
        mov     al, byte ptr [esi + 0x15]
        test    al, al
        jz      L3C68
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
L3C68:
        mov     eax, dword ptr [esi + 0x4c]
        mov     ebx, dword ptr [eax + 0x14]
        cmp     ebx, 0x5
        jz      L3C7C
        cmp     ebx, 0x4
        jnz     L3F36
L3C7C:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        jnz     L3CB0
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0x2c]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
L3CB0:
        cmp     ebx, 0x5
        jnz     L3CCA
        mov     ecx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jnz     L3CCA
        mov     ecx, dword ptr [g_007dc6b4]
        call    FUN_004deac0
L3CCA:
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        push    ebp
        jnz     L3DEC
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x10]
        xor     eax, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        push    ebp
        xor     ecx, 0x85739531
        mov     byte ptr [esi + 0x58], 0x1
        call    FUN_004d6740
        mov     byte ptr [esi + 0x58], 0x0
        call    FUN_004c8ee0
        cmp     ebx, 0x4
        jz      L3D27
        mov     ecx, dword ptr [g_007dc728]
        push    edi
        push    ebp
        call    FUN_004e3250
L3D27:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        push    edi
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004d6780
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x38]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        cmp     ebx, 0x5
        jnz     L3DB7
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        push    ebp
        call    dword ptr [edx + 0x1c]
L3DB7:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x3c]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cca00
L3DEC:
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     L3ECF
        mov     edi, dword ptr [esi + 0x4c]
        cmp     dword ptr [edi + 0x14], 0x5
        jnz     L3E3A
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x18]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x1c]
        push    eax
        call    dword ptr [edx + 0xa0]
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        jmp     L3E4B
L3E3A:
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
L3E4B:
        mov     edx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [g_007dab40]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e2930
        mov     ebx, dword ptr [edi + 0x14]
        cmp     ebx, 0x4
        mov     eax, 0x1
        jnz     L3E84
        mov     eax, 0xa
L3E84:
        mov     ebp, eax
        mov     edi, offset g_76ff10
L3E8B:
        mov     ecx, dword ptr [g_007b95a4]
        push    ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [g_007da848]
        lea     eax, [ecx + 0x8]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], edi
        jz      L3EC7
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L3EC7
        push    eax
        call    FUN_0048fb80
        lea     ecx, [esp + 0x10]
        call    FUN_00417ad0
L3EC7:
        call    FUN_006f49a0
        dec     ebp
        jnz     L3E8B
L3ECF:
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        pop     ebp
        jnz     L3F36
        mov     eax, dword ptr [g_00840048]
        test    eax, eax
        jz      L3F36
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     L3F36
        cmp     ebx, 0x5
        jnz     L3F13
        mov     edx, dword ptr [g_00840008]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [g_007dc6e0]
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, dword ptr [ecx + 0x24]
        push    0x0
        push    0x0
        add     edx, 0x80
        push    edx
        jmp     L3F26
L3F13:
        mov     eax, dword ptr [g_00840008]
        push    eax
        call    FUN_006f4950
        push    0x0
        push    0x0
        add     esi, 0x1c
        push    esi
L3F26:
        mov     ecx, dword ptr [g_00840048]
        call    FUN_006d1c20
        call    FUN_006f49a0
L3F36:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
