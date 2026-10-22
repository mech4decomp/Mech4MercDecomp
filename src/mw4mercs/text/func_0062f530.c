/*
 * FUN_0062f530 (419 B) — __thiscall: refreshes armature/subsystem/damage-object
 * animation state, emits heat/decal/name strings via the log/format helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

extern void __cdecl FUN_006935e0(void *a);
extern void __cdecl FUN_004d1f80(void *a, int b);
extern void __cdecl FUN_00411c40(void *a, void *b);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00411dc0(void *a, float b);
extern void __cdecl FUN_00411d10(void *a, int b);
extern void __cdecl FUN_00411f20(void *a, int b);

__declspec(naked) void FUN_0062f530(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        mov     esi, ecx
        push    edi
        call    FUN_006935e0
        mov     cx, word ptr [esi + 0x284]
        cmp     cx, word ptr [g_007db0ac]
        lea     eax, [esi + 0x284]
        jnz     L_f564
        mov     dx, word ptr [eax + 0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L_f58a
    L_f564:
        push    0x1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x78d1fc
        mov     ecx, edi
        call    FUN_00411c40
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
    L_f58a:
        mov     cx, word ptr [g_007db0ac]
        cmp     word ptr [esi + 0x3ac], cx
        lea     eax, [esi + 0x3ac]
        jnz     L_f5ad
        mov     dx, word ptr [g_007db0ae]
        cmp     word ptr [eax + 0x2], dx
        jz      L_f5d3
    L_f5ad:
        push    0x1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x78d1e0
        mov     ecx, edi
        call    FUN_00411c40
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
    L_f5d3:
        mov     al, byte ptr [esi + 0x2a0]
        test    al, al
        jnz     L_f626
        mov     cx, word ptr [g_007db0ac]
        cmp     word ptr [esi + 0x3a8], cx
        lea     eax, [esi + 0x3a8]
        jnz     L_f600
        mov     dx, word ptr [g_007db0ae]
        cmp     word ptr [eax + 0x2], dx
        jz      L_f626
    L_f600:
        push    0x1
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x78d1d0
        mov     ecx, edi
        call    FUN_00411c40
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
    L_f626:
        mov     eax, dword ptr [esi + 0x408]
        test    eax, eax
        jz      L_f643
        fld     dword ptr [eax + 0x4c]
        push    ecx
        fstp    dword ptr [esp]
        push    0x78d44c
        mov     ecx, edi
        call    FUN_00411dc0
    L_f643:
        mov     cl, byte ptr [esi + 0x274]
        push    ebx
        lea     edx, [esp + 0x54]
        push    edx
        mov     byte ptr [esp + 0x58], cl
        push    0x783a18
        mov     ecx, edi
        mov     byte ptr [esp + 0x5d], 0x0
        call    FUN_00411c40
        mov     eax, dword ptr [esi + 0x27c]
        push    eax
        push    0x78d1c4
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x278]
        push    ecx
        push    0x78d1b8
        mov     ecx, edi
        call    FUN_00411d10
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x3f1]
        mov     ecx, edi
        push    ebx
        push    0x78d1a0
        call    FUN_00411f20
        test    bl, bl
        pop     ebx
        jz      L_f6b4
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        push    0x78d434
        mov     ecx, edi
        call    FUN_00411c40
    L_f6b4:
        cmp     dword ptr [esi + 0x3f4], -0x1
        jle     L_f6cb
        push    -0x1
        push    0x78a930
        mov     ecx, edi
        call    FUN_00411d10
    L_f6cb:
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     0x4
    }
}
