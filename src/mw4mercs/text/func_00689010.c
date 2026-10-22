/*
 * FUN_00689010 (929 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Computes a HUD element placement: builds candidate transforms, tests
 * neighbor cells, and writes the resulting 3-float vector to param_1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0068d4c0(void);
extern void __cdecl FUN_006893c0(void);
extern void __cdecl FUN_00686640(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0041c540(void);

extern void *g_7f20f4;          /* global pointer @ 0x7f20f4 */
extern void *g_7b220c;          /* global pointer @ 0x7b220c */
extern const char g_7b8d18;     /* string/constant @ 0x7b8d18 */
extern float g_76d048;          /* float constant @ 0x76d048 */

__declspec(naked) void *__cdecl FUN_00689010(void)
{
    __asm {
        sub     esp, 0x98
        mov     edx, dword ptr [esp + 0xa0]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x28]
        push    edi
        mov     edi, dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x30], 0x0
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x14]
        mov     byte ptr [edx], 0x0
        mov     dword ptr [esp + 0x54], edi
        call    FUN_00419480
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x70]
        call    FUN_0040c410
        mov     edx, dword ptr [edi + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x7c]
        call    FUN_00428850
        push    0x2
        push    0x0
        push    0x1
        push    offset g_7b8d18
        lea     ecx, [esp + 0x88]
        call    FUN_0041fde0
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_0041c7d0
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [g_7f20f4]
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [ecx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_890ef
        mov     esi, dword ptr [esp + 0xac]
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_0040c5d0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x98
        ret     0x8
    L_890ef:
        mov     edi, dword ptr [esi + 0x10]
        mov     ebx, dword ptr [edi + 0x48]
        lea     ecx, [esp + 0x6c]
        push    ecx
        mov     ecx, ebx
        call    FUN_0068d4c0
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_0068d4c0
        mov     ecx, dword ptr [esp + 0x20]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edi + 0x3c]
        call    FUN_006893c0
        cmp     ebp, ebx
        jz      L_891ca
        mov     edx, dword ptr [esi + 0x28]
        lea     eax, [esp + 0x78]
        push    eax
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x38], 0x0
        mov     dword ptr [esp + 0x3c], edx
        call    FUN_0041c7d0
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c410
        mov     ecx, dword ptr [edi + 0x48]
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0068d4c0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [edi + 0x3c]
        push    edx
        mov     ebx, eax
        call    FUN_006893c0
        cmp     ebx, ebp
        jz      L_891ca
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax + 0x170]
        mov     edx, dword ptr [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        mov     esi, dword ptr [esp + 0xac]
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_0040c5d0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x98
        ret     0x8
    L_891ca:
        mov     ebx, dword ptr [esi + 0x1c]
        xor     ebp, ebp
        xor     ecx, ecx
        test    bl, 0x80
        jz      L_891db
        mov     ecx, 0x80
    L_891db:
        test    bl, 0x10
        jz      L_891e5
        add     ecx, 0x41
        jmp     L_89229
    L_891e5:
        test    bl, 0x1
        jz      L_891ef
        add     ecx, 0x60
        jmp     L_89229
    L_891ef:
        test    bl, 0x2
        jz      L_891f9
        add     ecx, 0x44
        jmp     L_89229
    L_891f9:
        test    bl, 0x8
        jz      L_89203
        add     ecx, 0x48
        jmp     L_89229
    L_89203:
        test    bl, 0x4
        jz      L_8920d
        add     ecx, 0x60
        jmp     L_89229
    L_8920d:
        test    bl, 0x20
        jz      L_89217
        add     ecx, 0x42
        jmp     L_89229
    L_89217:
        test    bl, 0x40
        jz      L_89221
        add     ecx, 0x60
        jmp     L_89229
    L_89221:
        test    bh, 0x1
        jz      L_89229
        add     ecx, 0x50
    L_89229:
        and     ecx, eax
        test    cl, 0x7f
        jz      L_89389
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0xb0]
        mov     eax, dword ptr [edx + 0x35c]
        mov     byte ptr [ecx], 0x1
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        mov     dword ptr [esp + 0x58], edx
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x5c], eax
        push    edx
        mov     dword ptr [esp + 0x64], ecx
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_00686640
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x38], edx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x3c], ecx
        mov     edx, dword ptr [eax + 0x8]
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x48], edx
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x48]
        mov     edx, dword ptr [g_7b220c]
        fld     dword ptr [esp + 0x4c]
        push    edx
        fmul    dword ptr [esp + 0x50]
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x40]
        faddp   st(1), st(0)
        mov     dword ptr [esi + 0x2c], ebp
        fld     dword ptr [esp + 0x4c]
        push    ecx
        fmul    dword ptr [esp + 0x50]
        mov     dword ptr [esi + 0x30], ebp
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x20], 0xbf800000
        faddp   st(1), st(0)
        mov     dword ptr [esp + 0x24], 0xbf800000
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_89348
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76d048]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_89348
        mov     eax, dword ptr [esp + 0xac]
        fld     dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x3c]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x40]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        pop     ebx
        add     esp, 0x98
        ret     0x8
    L_89348:
        mov     edx, dword ptr [esp + 0x50]
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xac]
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        pop     ebx
        add     esp, 0x98
        ret     0x8
    L_89389:
        mov     eax, dword ptr [esp + 0xac]
        fld     dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        pop     ebx
        add     esp, 0x98
        ret     0x8
    }
}
