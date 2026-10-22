/*
 * FUN_004c66b0 (569 B) - MLR node/mesh constructor (extended variant).
 * __thiscall, RET 0xC (3 stack args). Calls FUN_00415180, zeroes fields,
 * sets vtable (0x76cd9c), initializes matrices (rep movsd from 0x7b9460),
 * and dispatches through a virtual method on the parent object to load
 * per-node data, then indexes into global tables (0x7b3a28 / 0x7b3b28).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b83e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0040d9b0(void);

extern int g_007b8d68;   /* DAT_007b8d68 */
extern int g_007b8d6c;   /* DAT_007b8d6c */
extern int g_007b8d70;   /* DAT_007b8d70 */
extern int g_007daa38;   /* DAT_007daa38 */
extern int g_007b3a28[]; /* PTR_LAB_007b3a28 */
extern int g_007b3b28[]; /* PTR_FUN_007b3b28 */
extern int g_007b3b2c[]; /* PTR_FUN_007b3b2c */
extern int g_007b3b30[]; /* PTR_FUN_007b3b30 */

__declspec(naked) void __fastcall FUN_004c66b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx], 0x76cd9c
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x10], eax
        lea     edi, [ebx + 0x50]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        lea     edi, [ebx + 0x80]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        push    0x7b9460
        lea     ecx, [ebx + 0xf0]
        mov     dword ptr [ebx + 0x140], eax
        call    FUN_00419460
        mov     esi, dword ptr [esp + 0x28]
        cmp     esi, 0x7
        mov     ecx, dword ptr [g_007b8d68]
        mov     edx, dword ptr [g_007b8d6c]
        mov     eax, dword ptr [g_007b8d70]
        mov     ebp, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x120], ecx
        mov     dword ptr [ebx + 0x124], edx
        mov     dword ptr [ebx + 0x128], eax
        mov     dword ptr [ebx + 0x12c], 0xbf800000
        jge     L6757
        mov     edx, dword ptr [ebp]
        push    0x4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 0x20]
L6757:
        mov     edx, dword ptr [ebp]
        push    0x4
        lea     edi, [ebx + 0x18]
        push    edi
        mov     ecx, ebp
        call    dword ptr [edx + 0x20]
        cmp     esi, 0x6
        jge     L677A
        mov     eax, dword ptr [edi]
        mov     ecx, eax
        and     ecx, 0xfffffffe
        shl     ecx, 0x1
        and     eax, 0x1
        or      ecx, eax
        mov     dword ptr [edi], ecx
L677A:
        mov     eax, dword ptr [edi]
        __emit 0xF6            /* test ah,0x4: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x04
        jz      L67A3
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        test    eax, eax
        jz      L679B
        push    esi
        push    ebp
        mov     ecx, eax
        call    FUN_004b83e0
        jmp     L679D
L679B:
        xor     eax, eax
L679D:
        mov     dword ptr [ebx + 0x140], eax
L67A3:
        cmp     esi, 0xc
        jge     L67C7
        lea     edx, [esp + 0x20]
        push    edx
        push    ebp
        mov     dword ptr [esp + 0x28], 0x0
        call    FUN_00412a00
        add     esp, 0x8
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
L67C7:
        test    byte ptr [edi], 0x1
        jnz     L67DC
        mov     eax, dword ptr [ebp]
        push    0x30
        lea     ecx, [ebx + 0x20]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x20]
        jmp     L67EB
L67DC:
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
L67EB:
        mov     edx, dword ptr [ebx + 0x18]
        shr     edx, 0x5
        test    dl, 0x1
        jz      L6826
        mov     eax, dword ptr [ebp]
        push    0x30
        lea     ecx, [ebx + 0xb0]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0xc
        lea     ecx, [ebx + 0xe0]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [ebx + 0xec]
        push    0x4
        push    ecx
        mov     ecx, eax
        jmp     L688F
L6826:
        mov     edx, dword ptr [ebp]
        push    0xc
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [ebx + 0xb0]
        mov     edi, eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x1c], edx
        mov     edx, dword ptr [g_007b8d68]
        mov     dword ptr [eax + 0x2c], ecx
        mov     eax, dword ptr [g_007b8d6c]
        mov     ecx, dword ptr [g_007b8d70]
        mov     dword ptr [ebx + 0xe4], eax
        push    0x4
        lea     eax, [ebx + 0xec]
        mov     dword ptr [ebx + 0xe0], edx
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebx + 0xe8], ecx
        push    eax
        mov     ecx, ebp
L688F:
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx + 0x18]
        or      eax, 0x4
        mov     dword ptr [ebx + 0x18], eax
        mov     ecx, eax
        shr     eax, 0x5
        shr     ecx, 0x2
        and     eax, 0x1f
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_007b3a28]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     ecx, dword ptr [eax + g_007b3b28]
        pop     edi
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [eax + g_007b3b2c]
        mov     eax, dword ptr [eax + g_007b3b30]
        pop     esi
        mov     dword ptr [ebx + 0x138], eax
        pop     ebp
        mov     dword ptr [ebx + 0x130], ecx
        mov     dword ptr [ebx + 0x134], edx
        mov     eax, ebx
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
