/*
 * FUN_0058B130 (568 B) — __thiscall(1) member function. Reads a resolution
 * from [edi+0xc]/[edi+0x2c], calls FUN_00420780 / FUN_0040D560 /
 * FUN_004E2F40 / FUN_0041C6E0, computes two angles via fpatan, clamps them,
 * and appends the results into ring buffers at [esi+0x870]/[esi+0x87c],
 * then computes averages into [esi+0x474]/[esi+0x478].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00420780(void *obj);
extern void __cdecl FUN_0040D560(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_004E2F40(void *a, void *b);
extern void __cdecl FUN_0041C6E0(void *a, void *b);

extern unsigned int g_7b8d68;   /* DAT_007b8d68 */
extern unsigned int g_7b8d6c;   /* DAT_007b8d6c */
extern unsigned int g_7b8d70;   /* DAT_007b8d70 */
extern unsigned int g_7dc728;   /* DAT_007dc728 */
extern float g_78155c;          /* DAT_0078155c */
extern float g_76ed00;          /* DAT_0076ed00 */
extern float g_76c5b0;          /* DAT_0076c5b0 */

__declspec(naked) void FUN_0058B130(void)
{
    __asm {
        sub     esp, 0x68
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x78]
        mov     esi, ecx
        mov     ecx, edi
        call    FUN_00420780
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [g_7b8d68]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [g_7b8d70]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ecx
        lea     edx, [esp + 0x58]
        lea     eax, [esp + 0x34]
        xor     ebx, ebx
        push    0x7b8d08
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x54], esi
        mov     dword ptr [esp + 0x58], 0x1000
        mov     dword ptr [esp + 0x74], 0x44fa0000
        call    FUN_0040D560
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x40]
        mov     dword ptr [esp + 0x58], ecx
        mov     ecx, dword ptr [g_7dc728]
        push    eax
        mov     dword ptr [esp + 0x64], edx
        mov     dword ptr [esp + 0x60], 0x447a0000
        call    FUN_004E2F40
        test    eax, eax
        je      L_58b35f
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], ecx
        mov     edx, dword ptr [eax + 4]
        push    edi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        mov     eax, dword ptr [eax + 8]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_0041C6E0
        fld     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x2c]
        fpatan
        fchs
        fstp    dword ptr [esp + 0x78]
        fld     dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x78]
        fpatan
        mov     dword ptr [esi + 0x480], edx
        fchs
        fst     dword ptr [esi + 0x47c]
        fld     dword ptr [g_78155c]
        fsub    dword ptr [g_76ed00]
        fst     dword ptr [esp + 0xc]
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L_58b258
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x78], eax
        jmp     L_58b26f
L_58b258:
        fld     dword ptr [esp + 0x78]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne     L_58b26f
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x78], ecx
L_58b26f:
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je      L_58b282
        fstp    st(0)
        fld     dword ptr [esp + 0x10]
        jmp     L_58b293
L_58b282:
        fcom    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne     L_58b293
        fstp    st(0)
        fld     dword ptr [esp + 0xc]
L_58b293:
        mov     edx, dword ptr [esi + 0x870]
        mov     eax, dword ptr [esi + 0x874]
        fstp    dword ptr [eax + edx*4]
        mov     edx, dword ptr [esi + 0x870]
        mov     ecx, dword ptr [esi + 0x86c]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x870], edx
        jb      L_58b2c1
        mov     dword ptr [esi + 0x870], ebx
L_58b2c1:
        mov     ecx, dword ptr [esi + 0x87c]
        fld     dword ptr [esp + 0x78]
        mov     edx, dword ptr [esi + 0x880]
        fstp    dword ptr [edx + ecx*4]
        mov     edx, dword ptr [esi + 0x87c]
        mov     ecx, dword ptr [esi + 0x878]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x87c], edx
        jb      L_58b2f3
        mov     dword ptr [esi + 0x87c], ebx
L_58b2f3:
        mov     ecx, dword ptr [esi + 0x86c]
        fld     dword ptr [g_76c5b0]
        cmp     ecx, ebx
        jbe     L_58b313
        mov     eax, dword ptr [esi + 0x874]
        mov     edx, ecx
L_58b30b:
        fadd    dword ptr [eax]
        add     eax, 4
        dec     edx
        jne     L_58b30b
L_58b313:
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 0x878]
        cmp     ecx, ebx
        fdivr   st(0), st(1)
        fstp    dword ptr [esi + 0x474]
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jbe     L_58b349
        mov     eax, dword ptr [esi + 0x880]
        mov     edx, ecx
L_58b341:
        fadd    dword ptr [eax]
        add     eax, 4
        dec     edx
        jne     L_58b341
L_58b349:
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        fdivr   st(0), st(1)
        fstp    dword ptr [esi + 0x478]
        fstp    st(0)
L_58b35f:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x68
        ret     4
    }
}
