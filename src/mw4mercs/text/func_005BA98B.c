/*
 * FUN_005BA98B (603 B) — __thiscall(2) member function, near-twin of
 * FUN_005AA47B. Reads a resolution object via [ebp+0x78] vtable; if the
 * [ebx+0x90] tag doesn't match 0x7db0ac, builds a transform
 * (FUN_0040CA40 / FUN_0040CBB0 / FUN_0041FDE0 / FUN_0041C680), calls
 * FUN_005F07C0 / a virtual [edx+0x60] / FUN_0059AFB0 / FUN_004EA0F0 /
 * FUN_00507F90 / FUN_005922E0 / FUN_0041E690 / FUN_004CEC10 /
 * FUN_004D9910, and a final virtual call through [edx+0x28].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004DA920(void *a);
extern void __cdecl FUN_00767400(void *a);
extern void * __cdecl FUN_00507F90(void *a);
extern void __cdecl FUN_0040CA40(void *a, void *b, void *c);
extern void __cdecl FUN_0040CBB0(void *a, void *b, void *c);
extern void __cdecl FUN_0041FDE0(void *a);
extern void __cdecl FUN_0041C680(void *a, void *b, void *c);
extern void * __cdecl FUN_005F07C0(void *a, void *b, void *c, void *d, void *e);
extern void * __cdecl FUN_0059AFB0(void *a);
extern void __cdecl FUN_004EA0F0(void *a, void *b);
extern void __cdecl FUN_005922E0(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h);
extern void __cdecl FUN_0041E690(void *a, void *b, void *c);
extern void * __cdecl FUN_004CEC10(void *a);
extern void __cdecl FUN_004D9910(void *a, void *b, void *c);
extern void __cdecl FUN_0041E710(void *a);

extern unsigned short g_7db0ac;  /* DAT_007db0ac */
extern unsigned short g_7db0ae;  /* DAT_007db0ae */
extern unsigned int g_7db098;    /* DAT_007db098 */
extern unsigned int g_7dab44;    /* DAT_007dab44 */
extern unsigned int g_7dab40;    /* DAT_007dab40 */

__declspec(naked) void FUN_005BA98B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x1a0
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x78]
        push    esi
        lea     ecx, [ebp + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ebx, eax
        mov     cx, word ptr [ebx + 0x90]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [ebx + 0x90]
        mov     dword ptr [esp + 0x20], eax
        jne     L_5ba9d2
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L_5babd9
L_5ba9d2:
        push    eax
        call    FUN_004DA920
        add     esp, 4
        push    0x8bd5e8
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x28], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0x44]
        call    FUN_00767400
        mov     ecx, dword ptr [ebp + 0x198]
        lea     eax, [esp + 0xcc]
        push    eax
        call    FUN_00507F90
        mov     ecx, dword ptr [eax + 0xc]
        mov     esi, dword ptr [ebp + 0x1d4]
        fld     dword ptr [esi + 0x18]
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esi + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x60]
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        call    FUN_0040CA40
        lea     edx, [esp + 0x58]
        push    edx
        push    esi
        lea     ecx, [esp + 0x30]
        call    FUN_0040CBB0
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x14]
        mov     esi, dword ptr [ebp + 0xd8]
        push    0
        push    1
        fstp    dword ptr [esp + 0x3c]
        add     esi, 0x80
        fld     dword ptr [esp + 0x34]
        mov     ecx, 0xc
        fsub    dword ptr [esp + 0x20]
        lea     edi, [esp + 0xa4]
        push    2
        lea     eax, [esp + 0x40]
        fstp    dword ptr [esp + 0x44]
        push    eax
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x4c]
        rep movsd
        lea     ecx, [esp + 0xac]
        call    FUN_0041FDE0
        lea     ecx, [esp + 0x9c]
        push    ecx
        lea     edx, [ebx + 0x78]
        push    edx
        lea     ecx, [esp + 0x6c]
        call    FUN_0041C680
        mov     ecx, dword ptr [ebx + 0x88]
        mov     eax, dword ptr [ebx + 0x84]
        mov     edx, dword ptr [ebx + 0x8c]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x48], edx
        call    FUN_005F07C0
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     ecx, dword ptr [ebx + 0x68]
        mov     edx, dword ptr [ebx + 0x64]
        mov     esi, eax
        mov     eax, dword ptr [ebx + 0x30]
        push    eax
        mov     eax, dword ptr [ebx + 0x60]
        push    ecx
        push    edx
        push    eax
        mov     ecx, dword ptr [ebx + 0x5c]
        push    ecx
        mov     ecx, ebp
        call    FUN_005F07C0
        mov     ecx, eax
        call    FUN_0059AFB0
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_004EA0F0
        mov     edx, dword ptr [ebx + 0x58]
        mov     eax, dword ptr [ebx + 0x50]
        mov     ecx, dword ptr [ebx + 0x54]
        push    edx
        push    eax
        push    ecx
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x8c]
        push    eax
        push    esi
        push    -1
        push    4
        push    0
        lea     ecx, [esp + 0x108]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x198]
        call    FUN_00507F90
        mov     edx, dword ptr [esp + 0x5c]
        push    eax
        mov     eax, dword ptr [esp + 0x64]
        push    edx
        push    2
        push    eax
        push    0
        push    2
        push    0xb4
        lea     ecx, [esp + 0x154]
        call    FUN_005922E0
        mov     ecx, dword ptr [esp + 0xfc]
        push    0
        push    ecx
        lea     edx, [esp + 0x104]
        push    edx
        lea     ecx, [esp + 0x88]
        call    FUN_0041E690
        mov     ecx, dword ptr [g_7db098]
        call    FUN_004CEC10
        __emit 0x8A   /* mov cl, byte ptr [eax] -- MSVC6 peephole drops this dead load */
        __emit 0x08
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 2]
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x84]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004D9910
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [edx]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        lea     ecx, [esp + 0x7c]
        call    FUN_0041E710
L_5babd9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1a0
        ret     8
    }
}
