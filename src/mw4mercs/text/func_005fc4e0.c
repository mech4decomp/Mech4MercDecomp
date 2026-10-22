/*
 * FUN_005fc4e0 (843 B) — __thiscall, RET 8. Builds a 0x118-byte weapon/
 * mech render state object (EBX) from the source object (EDI): copies
 * header fields, iterates tread/leg state lists via virtual calls,
 * accumulates offsets, and finally copies a name string into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007dc696;
extern unsigned char  g_007dc694;
extern int            g_007f26a4;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

extern void __cdecl FUN_004fabf0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00507f30(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_005fc4e0(void)
{
    __asm {
        sub     esp, 0x8c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x9c]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x118
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ebp, dword ptr [esp + 0xa4]
        push    ebp
        push    esi
        mov     ecx, edi
        call    FUN_004fabf0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [edi + 0x286]
        mov     dx, word ptr [edi + 0x288]
        mov     ebx, eax
        mov     ax, word ptr [edi + 0x284]
        mov     dword ptr [ebx], 0x118
        mov     word ptr [ebx + 0x94], ax
        mov     ax, word ptr [edi + 0x28a]
        mov     word ptr [ebx + 0x96], cx
        mov     word ptr [ebx + 0x92], ax
        mov     eax, dword ptr [edi + 0x280]
        test    eax, eax
        mov     word ptr [ebx + 0x90], dx
        jz      loc_5fc7f6
        mov     cl, byte ptr [eax + 0x33c]
        test    cl, cl
        jz      loc_5fc7f6
        mov     eax, dword ptr [edi + 0xbc]
        test    eax, eax
        lea     esi, [edi + 0xbc]
        jz      loc_5fc6ea
        push    0x2
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x18]
        push    0x2
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x5c], 0x0
        call    dword ptr [edx + 0x24]
        mov     cx, word ptr [g_007dc696]
        mov     al, byte ptr [g_007dc694]
        mov     edx, dword ptr [esi]
        mov     word ptr [esp + 0x12], cx
        lea     ecx, [esp + 0x40]
        mov     byte ptr [esp + 0x10], al
        mov     dword ptr [esp + 0x44], esi
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x40], 0x772d80
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      loc_5fc63b
loc_5fc5e1:
        mov     eax, dword ptr [g_007f26a4]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_5fc62c
        mov     eax, dword ptr [esi]
        push    ebp
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        test    eax, eax
        jz      loc_5fc62c
        mov     dl, byte ptr [eax + 0x18]
        add     byte ptr [esp + 0x10], dl
        mov     cx, word ptr [eax + 0x1a]
        add     word ptr [esp + 0x12], cx
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x30]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x2c], ecx
        jbe     loc_5fc62c
        mov     dword ptr [esp + 0x30], ecx
loc_5fc62c:
        lea     ecx, [esp + 0x40]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     loc_5fc5e1
loc_5fc63b:
        mov     edx, dword ptr [esp + 0x2c]
        sub     edx, dword ptr [esp + 0x28]
        cmp     edx, 0x2
        jbe     loc_5fc6c6
        mov     eax, dword ptr [esp + 0x18]
        push    0x0
        lea     ecx, [esp + 0x1c]
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esp + 0x18]
        push    0x2
        lea     ecx, [esp + 0x16]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x28], 0xffffffec
        call    dword ptr [edx + 0x24]
        push    0x0
        push    ebp
        push    0x0
        lea     ecx, [esp + 0x64]
        call    FUN_004d2110
        push    0x0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_004d2680
        mov     cx, word ptr [esp + 0x98]
        mov     al, byte ptr [esp + 0x10]
        mov     dx, word ptr [esp + 0x9a]
        mov     word ptr [ebx + 0x94], cx
        add     byte ptr [ebx + 0x18], al
        mov     cx, word ptr [esp + 0x12]
        mov     word ptr [ebx + 0x96], dx
        add     word ptr [ebx + 0x1a], cx
        lea     ecx, [esp + 0x58]
        call    FUN_004d21c0
        jmp     loc_5fc6e1
loc_5fc6c6:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [ebx + 0x94], dx
        mov     word ptr [ebx + 0x96], ax
loc_5fc6e1:
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
loc_5fc6ea:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     eax, dword ptr [edi + 0x28c]
        lea     esi, [edi + 0x28c]
        mov     word ptr [ebx + 0x90], cx
        mov     ecx, esi
        mov     word ptr [ebx + 0x92], dx
        call    dword ptr [eax + 0x14]
        test    al, al
        jnz     loc_5fc7f6
        push    esi
        lea     ecx, [esp + 0x44]
        call    FUN_00416bc0
        push    0x0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x44], 0x774218
        call    FUN_0041ee70
        lea     ecx, [esp + 0x40]
        call    FUN_00416cc0
        test    eax, eax
        jz      loc_5fc762
loc_5fc749:
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_00507f30
        lea     ecx, [esp + 0x40]
        call    FUN_00416cc0
        test    eax, eax
        jnz     loc_5fc749
loc_5fc762:
        mov     edx, dword ptr [esp + 0x2c]
        sub     edx, dword ptr [esp + 0x28]
        jz      loc_5fc7c8
        mov     eax, dword ptr [esp + 0x18]
        push    0x0
        lea     ecx, [esp + 0x1c]
        call    dword ptr [eax + 0xc]
        push    0x0
        push    ebp
        push    0x0
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x2c], 0xffffffec
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x60]
        call    FUN_004d2680
        mov     dx, word ptr [esp + 0x98]
        mov     ax, word ptr [esp + 0x9a]
        lea     ecx, [esp + 0x58]
        mov     word ptr [ebx + 0x90], dx
        mov     word ptr [ebx + 0x92], ax
        call    FUN_004d21c0
        jmp     loc_5fc7e4
loc_5fc7c8:
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     word ptr [ebx + 0x90], cx
        mov     word ptr [ebx + 0x92], dx
loc_5fc7e4:
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x40]
        call    FUN_00416c60
loc_5fc7f6:
        mov     edi, dword ptr [edi + 0x2c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        lea     edx, [ebx + 0x98]
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8c
        ret     0x8
    }
}
