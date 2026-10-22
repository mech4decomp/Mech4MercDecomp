/*
 * FUN_005f5a00 (381 B) — __fastcall (ECX = this). Handles terrain-type
 * change: spawns/updates a marker object and stores the last terrain id.
 *
 * CFLAGS: /O1
 */

extern short g_7db0ac;   /* 0x007db0ac */
extern short g_7db0ae;   /* 0x007db0ae */
extern int   g_7dab40;   /* 0x007dab40 */
extern int   g_7dab44;   /* 0x007dab44 */
extern float g_76d064;   /* 0x0076d064 */

extern void FUN_00502ef0(void);
extern void FUN_0041fd80(void);
extern void FUN_0041fcb0(void);
extern void FUN_005fa610(void);
extern void FUN_0041fcd0(void);

__declspec(naked) void __fastcall FUN_005f5a00(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov     cl, byte ptr [edi + 0x4bc]
        cmp     cl, 0x18
        jnc     l_5b76
        mov     dx, word ptr [eax + 0x2e8]
        cmp     dx, word ptr [g_7db0ac]
        lea     esi, [eax + 0x2e8]
        jnz     l_5a47
        mov     ax, word ptr [esi + 2]
        cmp     ax, word ptr [g_7db0ae]
        jz      l_5b76
    l_5a47:
        mov     ebx, dword ptr [g_7dab40]
        mov     word ptr [esp + 0xc], 0xffff
        mov     word ptr [esp + 0xe], 0
        mov     byte ptr [esp + 0x10], cl
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [edi + 0xd8]
        fld     dword ptr [eax + 0x9c]
        fsub    dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x14]
        call    dword ptr [edx + 4]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [eax + 0x34]
        fnstsw  ax
        test    ah, 0x41
        jz      l_5aa3
        mov     byte ptr [esp + 0x10], 2
    l_5aa3:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x10]
        push    esi
        push    ecx
        call    FUN_00502ef0
        mov     dx, word ptr [esp + 0x18]
        add     esp, 0xc
        cmp     dx, word ptr [edi + 0x4b0]
        jnz     l_5ad6
        mov     ax, word ptr [esp + 0xe]
        cmp     ax, word ptr [edi + 0x4b2]
        jz      l_5b76
    l_5ad6:
        lea     ebx, [edi + 0x4b4]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_5b06
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [eax]
        push    0
        push    5
        mov     ecx, eax
        call    dword ptr [edx + 4]
        mov     ecx, ebx
        call    FUN_0041fcb0
    l_5b06:
        mov     ax, word ptr [esp + 0xc]
        cmp     ax, word ptr [g_7db0ac]
        jnz     l_5b22
        mov     cx, word ptr [esp + 0xe]
        cmp     cx, word ptr [g_7db0ae]
        jz      l_5b5e
    l_5b22:
        push    1
        push    edi
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    FUN_005fa610
        mov     esi, eax
        test    esi, esi
        jz      l_5b5e
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    6
        mov     byte ptr [esi + 0x250], 1
        call    dword ptr [edx + 4]
        push    esi
        mov     ecx, ebx
        call    FUN_0041fcd0
    l_5b5e:
        mov     ax, word ptr [esp + 0xc]
        mov     cx, word ptr [esp + 0xe]
        mov     word ptr [edi + 0x4b0], ax
        mov     word ptr [edi + 0x4b2], cx
    l_5b76:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
