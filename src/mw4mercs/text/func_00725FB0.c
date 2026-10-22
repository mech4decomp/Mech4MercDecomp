/*
 * FUN_00725FB0 (816 B) - __thiscall (RET 0xc, 3 params). Object
 * constructor: initializes a large object at ebx, allocates/copies
 * string and array members, calls FUN_007265f0 to build sub-objects,
 * and links the object into a global list (head g_00856a80).
 *
 * CFLAGS: /O1
 */

extern int g_008aadc8;
extern unsigned char g_0087dd0a;
extern int g_00856a80;
extern int (*g_0076b294)(void);

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_007265f0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007589a0(void);
extern void __cdecl FUN_007588c0(void);

__declspec(naked) void FUN_00725FB0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        mov     ebx, ecx
        xor     edx, edx
        xor     eax, eax
        push    esi
        mov     esi, dword ptr [ebp + 8]
        cmp     esi, edx
        mov     dword ptr [ebx + 0xac], edx
        push    edi
        mov     ecx, 0x10
        lea     edi, [ebx + 0x5c]
        rep     stosd
        lea     ecx, [ebx + 0x9c]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     al, byte ptr [ebp + 0x10]
        mov     dword ptr [ebx + 0x58], edx
        mov     byte ptr [ebx + 0xb0], al
        mov     byte ptr [ebx + 0x38], 1
        mov     dword ptr [ebx + 0x4c], edx
        mov     dword ptr [ebx + 0x54], edx
        mov     dword ptr [ebx + 0x50], edx
        je      L_603e
        mov     ecx, dword ptr [g_008aadc8]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebx + 4], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        jmp     L_6041
L_603e:
        mov     dword ptr [ebx + 4], edx
L_6041:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [g_008aadc8]
        mov     esi, dword ptr [ecx + 4]
        mov     edx, dword ptr [esi]
        push    eax
        push    0xc
        mov     dword ptr [ebx + 8], edx
        call    FUN_006f3c80
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edi, eax
        mov     eax, dword ptr [ecx]
        push    0
        lea     edx, [eax*4]
        push    edx
        mov     dword ptr [ebx + 0xc4], edi
        mov     dword ptr [edi], eax
        call    FUN_006f3c80
        mov     dword ptr [edi + 4], eax
        mov     ecx, dword ptr [edi]
        shl     ecx, 2
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebx + 0xc4]
        mov     ecx, dword ptr [esi]
        push    0
        shl     ecx, 2
        push    ecx
        call    FUN_006f3c80
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi + 8], eax
        mov     ecx, dword ptr [esi]
        mov     esi, dword ptr [edx + 8]
        shl     ecx, 2
        mov     edi, eax
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [ebp + 0x10]
        push    ecx
        mov     ecx, dword ptr [ebx + 0xc4]
        lea     edx, [ebp - 8]
        push    edx
        mov     edx, dword ptr [ecx + 4]
        lea     eax, [ebp - 4]
        push    eax
        mov     eax, dword ptr [edx]
        xor     edi, edi
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0xb8], edi
        mov     dword ptr [ebx + 0xc0], edi
        mov     dword ptr [ebx + 0xbc], edi
        call    FUN_007265f0
        mov     eax, dword ptr [ebx + 0xc4]
        mov     ecx, dword ptr [eax]
        xor     esi, esi
        cmp     ecx, edi
        jbe     L_6157
L_6101:
        mov     ecx, dword ptr [eax + 4]
        lea     eax, [ecx + esi*4]
        lea     edx, [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [eax]
        push    eax
        lea     ecx, [ebp + 8]
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_007265f0
        mov     eax, dword ptr [ebx + 0xc4]
        mov     ecx, dword ptr [eax + 8]
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [ecx + esi*4], edx
        mov     ecx, dword ptr [ebp + 8]
        cmp     word ptr [ecx], 2
        jne     L_613f
        mov     edx, dword ptr [ebp + 0x10]
        lea     ecx, [edx*4]
        mov     dword ptr [ebp + 0x10], ecx
L_613f:
        mov     ecx, dword ptr [ebx + 0xbc]
        mov     edx, dword ptr [ebp + 0x10]
        add     ecx, edx
        mov     dword ptr [ebx + 0xbc], ecx
        mov     ecx, dword ptr [eax]
        inc     esi
        cmp     esi, ecx
        jb      L_6101
L_6157:
        mov     eax, dword ptr [ebp - 4]
        fild    dword ptr [ebx + 0xbc]
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [ebp - 0x10], ecx
        mov     dword ptr [ebp - 0xc], edi
        fidiv   dword ptr [ebp - 0x10]
        lea     edx, [ebx + 0x14]
        push    edx
        mov     edx, dword ptr [ebx + 8]
        lea     eax, [ebx + 0xc]
        push    eax
        lea     ecx, [ebp + 8]
        push    ecx
        push    edx
        mov     ecx, ebx
        fstp    dword ptr [ebx + 0x24]
        call    FUN_007265f0
        mov     ecx, dword ptr [ebp + 8]
        cmp     word ptr [ecx], 1
        jne     L_6193
        xor     eax, eax
        jmp     L_6199
L_6193:
        xor     eax, eax
        mov     ax, word ptr [ecx + 0x10]
L_6199:
        mov     ecx, dword ptr [g_008aadc8]
        push    ecx
        add     eax, 0x12
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [ebp + 8]
        cmp     word ptr [esi], 1
        mov     dword ptr [ebx + 0x20], eax
        jne     L_61b9
        xor     ecx, ecx
        jmp     L_61bf
L_61b9:
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x10]
L_61bf:
        add     ecx, 0x12
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [ebx + 0x20]
        mov     ax, word ptr [eax]
        cmp     ax, 1
        mov     dword ptr [ebx], 3
        je      L_6279
        cmp     ax, 2
        je      L_6200
        push    0x7a5568
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        je      L_6200
        int     3
L_6200:
        mov     byte ptr [ebx + 0x38], 0
        lea     esi, [ebx + 0x39]
        xor     ecx, ecx
        mov     edx, esi
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 4], ecx
        mov     dword ptr [edx + 8], ecx
        push    0x10000
        mov     dword ptr [edx + 0xc], ecx
        push    0x12
        mov     word ptr [edx + 0x10], cx
        mov     eax, dword ptr [ebx + 0x20]
        push    esi
        push    eax
        xor     edi, edi
        push    edi
        mov     word ptr [esi], 1
        mov     byte ptr [g_0087dd0a], 1
        call    FUN_007589a0
        mov     ecx, dword ptr [ebx + 0x20]
        push    0x10000
        push    0x12
        push    esi
        push    ecx
        push    edi
        mov     byte ptr [g_0087dd0a], 0
        call    FUN_007589a0
        push    edi
        push    edi
        push    edi
        push    edi
        push    esi
        push    esi
        push    edi
        lea     eax, [ebx + 0x4c]
        push    eax
        call    FUN_007588c0
        mov     edx, dword ptr [g_008aadc8]
        push    edx
        push    0x4000
        call    FUN_006f3c80
        mov     dword ptr [ebx + 0x50], eax
        jmp     L_627b
L_6279:
        xor     edi, edi
L_627b:
        mov     esi, dword ptr [g_00856a80]
        push    0x10
        call    dword ptr [g_0076b294]
        mov     ecx, dword ptr [esi]
        add     esp, 4
        cmp     ecx, edi
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], edi
        jne     L_62b5
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], edi
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_62b5:
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, edi
        je      L_62c5
L_62bc:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, edi
        jne     L_62bc
L_62c5:
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [esi + 4]
        inc     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
