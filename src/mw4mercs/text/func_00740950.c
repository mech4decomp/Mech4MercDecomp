/*
 * FUN_00740950 (298 B @ 0x740950) - __thiscall (ECX = this), RET 4. Reads
 * globals 0x8AAA14/0x8AAA18, makes IAT calls (0x76B170, 0x76B110, 0x76B380,
 * 0x76B100), builds a stack record, iterates a list (0x8AAB08) making virtual
 * calls (slot +0x30/+0x34), calls 0x707E90, and stores FPU result to
 * 0x8AAAC8. String/function literals 0x8AAA20 / 0x742630 / 0x742800.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   dword_8AAA14;
extern int   dword_8AAA18;
extern void *g_76B170;
extern void *g_76B100;
extern void *g_76B110;
extern int   dword_8589AC;
extern int   dword_8589A4;
extern int   dword_8589A8;
extern int   dword_8589B0;
extern int   dword_8AAAF4;
extern int   dword_8AAAE4;
extern int   dword_8AAAF8;
extern int   dword_8AAB08;
extern void  __cdecl FUN_00707E90(void);
extern double g_8AAAC8;
extern char  g_8AAAC2;
extern void *g_76B380;

__declspec(naked) void FUN_00740950(void)
{
    __asm {
        sub     esp, 0x58
        mov     eax, dword ptr [dword_8AAA14]
        mov     ecx, dword ptr [dword_8AAA18]
        push    -1
        push    0
        lea     edx, [esp + 8]
        push    edx
        push    2
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        call    dword ptr [g_76B170]
        cmp     eax, 1
        jne     L_740A6A
        push    ebp
        mov     ebp, dword ptr [g_76B100]
        push    esi
        push    edi
L_740989:
        push    0x8aaa20
        call    dword ptr [g_76B110]
        mov     edx, dword ptr [dword_8589AC]
        xor     eax, eax
        mov     ecx, 0x14
        lea     edi, [esp + 0x14]
        rep stosd
        mov     eax, dword ptr [dword_8589A4]
        mov     ecx, dword ptr [dword_8589A8]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [dword_8589B0]
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [dword_8AAAF4]
        push    0xd2
        cmp     eax, 2
        mov     eax, dword ptr [dword_8AAAE4]
        push    0
        mov     dword ptr [esp + 0x1c], 0x50
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x3c], edx
        mov     ecx, dword ptr [eax]
        push    0x742630
        jne     L_7409F3
        push    0x9c4
        jmp     L_7409F5
L_7409F3:
        push    0
L_7409F5:
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x34]
        test    eax, eax
        mov     dword ptr [dword_8AAAF8], eax
        jl      L_740A34
        mov     esi, dword ptr [dword_8AAB08]
        test    esi, esi
        je      L_740A34
L_740A11:
        mov     eax, dword ptr [dword_8AAAE4]
        mov     ecx, dword ptr [eax]
        push    0x80
        lea     edx, [esi + 0x54]
        push    edx
        push    0x742800
        lea     edx, [esi + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        mov     esi, dword ptr [esi]
        test    esi, esi
        jne     L_740A11
L_740A34:
        call    FUN_00707E90
        fstp    qword ptr [g_8AAAC8]
        push    0x8aaa20
        call    ebp
        push    -1
        push    0
        lea     eax, [esp + 0x14]
        push    eax
        push    2
        mov     byte ptr [g_8AAAC2], 0
        call    dword ptr [g_76B170]
        cmp     eax, 1
        je      L_740989
        pop     edi
        pop     esi
        pop     ebp
L_740A6A:
        push    0
        call    dword ptr [g_76B380]
        xor     eax, eax
        add     esp, 0x5c
        ret     4
    }
}
