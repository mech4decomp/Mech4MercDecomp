/*
 * FUN_00701790 (263 B) — Timed event / animation driver.
 *
 * Iterates a linked list of timed events (0x00856a7c), updating
 * each when its time threshold is crossed, and draining a
 * sub-list of resources via FUN_006f4230. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_856a7c;   /* DAT_00856a7c (event list head) */
extern double g_7a11d0;   /* DAT_007a11d0 (time threshold) */
extern char   g_856974;   /* DAT_00856974 */
extern char   g_87ceac;   /* DAT_0087ceac (reentrancy flag) */

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00718410(void);
extern void __cdecl FUN_00717df0(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void __cdecl FUN_00701790(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xFFFFFFF8
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_856a7c]
        push    1
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        xor     ecx, ecx
        cmp     edi, ecx
        jz      L_188d
L_17b8:
        fld     qword ptr [esp + 0x18]
        fsub    qword ptr [edi]
        fcomp   qword ptr [g_7a11d0]
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     L_1814
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1C]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x24], ecx
        mov     word ptr [esp + 0x2C], cx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     dword ptr [edi + 4], edx
        mov     dword ptr [esp + 0x2C], eax
        mov     word ptr [esp + 0x3A], 1
        mov     byte ptr [esp + 0x3C], 0xF4
        mov     dword ptr [esp + 0x3D], offset g_856974
        mov     byte ptr [g_87ceac], 1
        call    FUN_00718410
        mov     byte ptr [g_87ceac], 0
L_1814:
        xor     ebx, ebx
        mov     bx, word ptr [edi + 0xC]
        xor     eax, eax
        mov     ax, word ptr [edi + 8]
        push    8
        push    ebx
        push    eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00717df0
        test    al, al
        jz      L_1880
        mov     esi, dword ptr [edi + 0x10]
        test    esi, esi
        jz      L_1880
L_1831:
        mov     edx, dword ptr [esi]
        push    edx
        mov     byte ptr [g_87ceac], 1
        call    FUN_00718410
        mov     ebp, dword ptr [esi]
        mov     eax, dword ptr [ebp + 0x15]
        test    eax, eax
        mov     byte ptr [g_87ceac], 0
        jz      L_185d
        push    eax
        call    FUN_006f4230
L_185d:
        push    ebp
        call    FUN_006f4230
        mov     eax, dword ptr [esi + 4]
        push    esi
        mov     dword ptr [edi + 0x10], eax
        call    FUN_006f4230
        mov     ecx, dword ptr [esp + 0x14]
        push    8
        push    ebx
        push    ecx
        call    FUN_00717df0
        test    al, al
        __emit  0x75        /* jnz L_1831: MSVC6 miscomputes backward rel-offset (off-by-7) due to call-relocs between branch and target */
        __emit  0xB1
L_1880:
        mov     edi, dword ptr [edi + 0x18]
        xor     ecx, ecx
        cmp     edi, ecx
        jnz     L_17b8
L_188d:
        pop     edi
        mov     al, 1
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
