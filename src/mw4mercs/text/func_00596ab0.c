/*
 * FUN_00596ab0 (1654 B) — __thiscall (RET 4). Configuration/serialization
 * routine that walks several linked lists and dispatches values through a
 * vtable (call dword ptr [edx+0x24]).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00594bb0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_005944b0(void);
extern void __cdecl FUN_00598510(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_005621b0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00493150(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __cdecl FUN_00596ab0(void)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x50]
        push    edi
        push    esi
        mov     dword ptr [esp + 0x2c], ebx
        call    FUN_00594bb0
        lea     eax, [ebx + 0x18]
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x48], 0x7830dc
        call    FUN_00415cc0
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x24], eax
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x48]
        call    FUN_00416cc0
        xor     ebp, ebp
        cmp     eax, ebp
        jz      label_b1e
label_b09:
        push    esi
        mov     ecx, eax
        call    FUN_005944b0
        lea     ecx, [esp + 0x48]
        call    FUN_00416cc0
        cmp     eax, ebp
        jnz     label_b09
label_b1e:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edi, dword ptr [ebx + 0x30]
        cmp     edi, ebp
        jnz     label_b49
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebp
        call    dword ptr [edx + 0x24]
        jmp     label_bc9
label_b49:
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, edi
        call    FUN_00598510
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], eax
        mov     edi, dword ptr [edi]
        cmp     eax, edi
        jz      label_bc9
label_b76:
        mov     ecx, dword ptr [eax + 0x10]
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x20], ecx
        jz      label_b88
        inc     byte ptr [ecx - 1]
        mov     eax, dword ptr [esp + 0x1c]
label_b88:
        mov     dl, byte ptr [eax + 0x14]
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        mov     byte ptr [esp + 0x68], dl
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    1
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_005621b0
        add     esp, 4
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        jnz     label_b76
label_bc9:
        mov     edi, dword ptr [ebx + 0x40]
        cmp     edi, ebp
        jnz     label_be7
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], ebp
        call    dword ptr [edx + 0x24]
        jmp     label_c67
label_be7:
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, edi
        call    FUN_00493150
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x60], eax
        mov     edi, dword ptr [edi]
        cmp     eax, edi
        jz      label_c67
label_c14:
        mov     ecx, dword ptr [eax + 0x10]
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x20], ecx
        jz      label_c26
        inc     byte ptr [ecx - 1]
        mov     eax, dword ptr [esp + 0x60]
label_c26:
        mov     edx, dword ptr [eax + 0x14]
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        mov     dword ptr [esp + 0x24], edx
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x60]
        push    ecx
        call    FUN_005621b0
        add     esp, 4
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x60]
        cmp     eax, edi
        jnz     label_c14
label_c67:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [ebx + 0x10]
        push    ecx
        lea     ecx, [esp + 0x34]
        call    FUN_004c41d0
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x30], 0x77a080
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x30]
        call    FUN_0040c0e0
        cmp     eax, ebp
        jz      label_ccb
label_cb1:
        add     eax, 0x10
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        lea     ecx, [esp + 0x30]
        call    FUN_0040c0e0
        cmp     eax, ebp
        jnz     label_cb1
label_ccb:
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [ecx]
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x38], edx
        call    FUN_0040c0e0
        mov     edi, eax
        cmp     edi, ebp
        jz      label_70d2
label_ce8:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [edi + 0x60]
        push    ecx
        push    esi
        call    FUN_00412a50
        lea     edx, [edi + 0xdc]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     ecx, [edi + 0x4c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     ebx, dword ptr [edi + 0x14]
        test    ebx, ebx
        mov     byte ptr [esp + 0x60], 0
        jz      label_da2
        mov     byte ptr [esp + 0x60], 1
label_da2:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     al, byte ptr [esp + 0x60]
        test    al, al
        jz      label_dd2
        add     ebx, 0x10
        push    ebx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 8
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_dd2:
        mov     edx, dword ptr [edi + 0x58]
        lea     ecx, [edi + 0x58]
        mov     dword ptr [esp + 0x40], ecx
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x3c], 0x7830d8
        call    FUN_00417a40
        push    4
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c0e0
        test    eax, eax
        jz      label_e3d
label_e0c:
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0040f060
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        lea     ecx, [esp + 0x3c]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     label_e0c
label_e3d:
        mov     eax, dword ptr [edi + 0x68]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x1c], eax
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x6c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x70]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x74]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x78]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x7c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x80]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x8c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x90]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x94]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x98]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x9c]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0xa0]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0xa4]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x84]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x88]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0xa8]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0xac]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     cl, byte ptr [edi + 0xb0]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x17]
        mov     byte ptr [esp + 0x17], cl
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     cl, byte ptr [edi + 0xb1]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x17]
        mov     byte ptr [esp + 0x17], cl
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     cl, byte ptr [edi + 0xb2]
        mov     byte ptr [esp + 0x13], cl
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ebp, [edi + 0xb4]
        mov     ebx, 0xa
label_702e:
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebp, 4
        dec     ebx
        jnz     label_702e
        mov     ebp, dword ptr [edi + 0x24]
        lea     ecx, [edi + 0x24]
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_7066:
        test    ebp, ebp
        jz      label_7083
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     ebp, dword ptr [ebp + 4]
        jz      label_7083
        add     eax, 0x10
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        jmp     label_7066
label_7083:
        lea     ecx, [edi + 0x2c]
        mov     edi, dword ptr [ecx]
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x18], eax
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
label_709f:
        test    edi, edi
        jz      label_70bb
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        jz      label_70bb
        add     eax, 0x10
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 8
        jmp     label_709f
label_70bb:
        lea     ecx, [esp + 0x30]
        call    FUN_0040c0e0
        mov     edi, eax
        test    edi, edi
        jnz     label_ce8
        mov     ebx, dword ptr [esp + 0x28]
label_70d2:
        mov     ecx, dword ptr [ebx + 0x48]
        add     ecx, 0x10
        push    ecx
        push    esi
        call    FUN_00412a50
        lea     edx, [ebx + 0x34]
        push    edx
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     ecx, [ebx + 0x38]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebx, 0x54
        push    ebx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        lea     ecx, [esp + 0x48]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret     4
    }
}
