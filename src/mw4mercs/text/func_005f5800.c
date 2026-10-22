/*
 * FUN_005f5800 (459 B) — __thiscall (ECX = this), RET 4 (1 byte param).
 * Spawns/updates a vehicle marker object when the terrain type changes.
 *
 * CFLAGS: /O1
 */

extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern short g_7db0ac;   /* 0x007db0ac */
extern short g_7db0ae;   /* 0x007db0ae */
extern int   g_7b9584;   /* 0x007b9584 */
extern int   g_7dc740;   /* 0x007dc740 */

extern void FUN_005f92d0(void);
extern void FUN_00420840(void);
extern void FUN_0041c680(void);
extern void FUN_004d1f80(void);
extern void FUN_006f4950(void);
extern void FUN_00421e60(void);
extern void FUN_004084d0(void);
extern void FUN_00429b20(void);
extern void FUN_006f49a0(void);
extern void FUN_004d21c0(void);

__declspec(naked) void __fastcall FUN_005f5800(void)
{
    __asm {
        sub     esp, 0xb8
        push    ebx
        mov     ebx, dword ptr [esp + 0xc0]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_005f92d0
        mov     edi, dword ptr [esi + 0x124]
        test    edi, edi
        jnz     l_582d
        mov     edi, dword ptr [esi + 0x128]
        test    edi, edi
        jz      l_585a
    l_582d:
        lea     ebp, [edi + 0x10]
        push    ebp
        lea     ecx, [esp + 0xb4]
        call    FUN_00420840
        push    ebp
        lea     eax, [edi + 0x40]
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_0041c680
        fld     dword ptr [esp + 0x5c]
        fabs
        fadd    dword ptr [edi + 0x2c]
        fstp    dword ptr [esi + 0x458]
    l_585a:
        test    bl, bl
        jz      l_59be
        mov     eax, dword ptr [esi + 0x508]
        xor     ebp, ebp
        cmp     eax, ebp
        jnz     l_59be
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        xor     eax, 0x85739531
        mov     edi, dword ptr [eax + 0x1e4]
        call    dword ptr [edx + 4]
        mov     cx, word ptr [eax + 0x2ec]
        add     eax, 0x2ec
        cmp     cx, word ptr [g_7db0ac]
        jnz     l_58bd
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        jz      l_59b2
    l_58bd:
        cmp     edi, ebp
        jz      l_59b2
        push    1
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004d1f80
        mov     eax, dword ptr [g_7b9584]
        push    eax
        call    FUN_006f4950
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_00421e60
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x34]
        sub     edx, ecx
        add     esp, 4
        add     edx, eax
        jz      l_5997
        mov     edi, dword ptr [esi + 0xd8]
    l_5907:
        mov     edx, dword ptr [esp + 0x14]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    dword ptr [edx + 0x20]
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      l_5939
        push    ebx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_00429b20
        jmp     l_593b
    l_5939:
        xor     eax, eax
    l_593b:
        mov     edx, dword ptr [g_7dc740]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     dword ptr [eax + 0x18], edi
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x6c], 0xbf800000
        mov     dword ptr [esp + 0x68], 0xbf800000
        mov     dword ptr [esp + 0x64], 0xbf800000
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        mov     dword ptr [esi + 0x508], eax
        call    dword ptr [edx + 8]
        mov     edx, dword ptr [esp + 0xa0]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esi + 0x50c], edx
        sub     eax, dword ptr [esp + 0x28]
        add     eax, ecx
        jnz     l_5907
    l_5997:
        call    FUN_006f49a0
        lea     ecx, [esp + 0x14]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb8
        ret     4
    l_59b2:
        mov     dword ptr [esi + 0x508], ebp
        mov     dword ptr [esi + 0x50c], ebp
    l_59be:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb8
        ret     4
    }
}
