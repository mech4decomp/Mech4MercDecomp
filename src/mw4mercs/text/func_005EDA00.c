/*
 * FUN_005EDA00 (663 B) — __thiscall (RET 0x4). Gameplay object update:
 * validates a token against a global, computes scaled vectors, and walks a
 * linked list of sub-objects (0x23c) toggling flags and copying transform
 * data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005EE7D0(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_004EA0F0(void);
extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_005885E0(void);
extern void __cdecl FUN_004D5B70(void);
extern void __cdecl FUN_004E41F0(void);
extern void __cdecl FUN_00417AD0(void);
extern unsigned int g_007DAB44;
extern unsigned int g_007DAB40;
extern unsigned int g_007DC728;
extern float g_0076D064;

__declspec(naked) void FUN_005EDA00(void)
{
    __asm {
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [edi + 8]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     esi, ecx
        je      L5EDAED
        mov     ecx, dword ptr [g_007DAB44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007DAB40]
        mov     ecx, dword ptr [edx + 0x1c]
        xor     ecx, 0x85739531
        cmp     eax, ecx
        je      L5EDAED
        fld     dword ptr [esi + 0x22c]
        mov     ebp, dword ptr [esi + 0x238]
        fmul    dword ptr [esi + 0x24c]
        mov     ecx, esi
        fstp    dword ptr [esp + 0x14]
        call    FUN_005EE7D0
        fld     dword ptr [esi + 0x228]
        push    ebx
        fmul    dword ptr [esi + 0x24c]
        push    2
        push    0x44
        push    4
        lea     ecx, [esp + 0x44]
        fstp    dword ptr [esp + 0x20]
        mov     byte ptr [esp + 0x8c], al
        call    FUN_00534630
        mov     eax, dword ptr [edi + 8]
        add     eax, 0x14
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_004EA0F0
        lea     edx, [edi + 0x18]
        push    edx
        lea     ecx, [esp + 0x58]
        mov     byte ptr [esp + 0x50], bl
        mov     word ptr [esp + 0x52], bx
        call    FUN_0040C5D0
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_0040C5D0
        lea     ecx, [esi + 0x230]
        push    ecx
        lea     ecx, [esp + 0x50]
        call    FUN_005885E0
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x48], edx
        lea     edx, [esp + 0x34]
        mov     dword ptr [esp + 0x6c], ecx
        mov     ecx, dword ptr [edi + 8]
        push    edx
        mov     byte ptr [esp + 0x54], al
        mov     byte ptr [esp + 0x74], bl
        mov     dword ptr [esp + 0x78], ebp
        call    FUN_004D5B70
L5EDAED:
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        mov     edx, dword ptr [edi + 0x14]
        push    esi
        mov     dword ptr [esp + 0x2c], ecx
        push    0x5edca0
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esi + 0x248]
        push    ecx
        mov     ecx, dword ptr [g_007DC728]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_004E41F0
        cmp     dword ptr [esi + 0x244], ebx
        je      L5EDC8D
        lea     eax, [esi + 0x23c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x18], 0x772d80
        cmp     eax, ebx
        je      L5EDB6A
L5EDB46:
        mov     ecx, dword ptr [eax]
        cmp     ecx, ebx
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x20], eax
        je      L5EDB6A
        mov     ecx, dword ptr [ecx + 0x150]
        cmp     ecx, ebx
        __emit 0x74   /* je L5EDB46 -- MSVC6 miscomputes backward rel8 by 4 */
        __emit 0xE5
        mov     byte ptr [ecx + 0x54], bl
        mov     eax, dword ptr [esp + 0x20]
        __emit 0xEB   /* jmp L5EDB46 -- MSVC6 miscomputes backward rel8 by 4 */
        __emit 0xDC
L5EDB6A:
        mov     eax, dword ptr [edi + 8]
        cmp     eax, ebx
        je      L5EDB7F
        mov     eax, dword ptr [eax + 0x150]
        cmp     eax, ebx
        je      L5EDB7F
        mov     byte ptr [eax + 0x54], 1
L5EDB7F:
        fld     dword ptr [g_0076D064]
        mov     edx, dword ptr [esp + 0x1c]
        fsub    dword ptr [esi + 0x24c]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esp + 0x20], eax
        fld     st(0)
        fmul    dword ptr [esi + 0x228]
        fstp    dword ptr [esp + 0x7c]
        fmul    dword ptr [esi + 0x22c]
        fstp    dword ptr [esp + 0x14]
L5EDBAB:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        je      L5EDC87
        mov     ebp, dword ptr [eax]
        cmp     ebp, ebx
        je      L5EDC87
        mov     eax, dword ptr [ebp + 0x150]
        cmp     eax, ebx
        je      L5EDBD8
        cmp     byte ptr [eax + 0x54], bl
        jne     L5EDC79
        mov     byte ptr [eax + 0x54], 1
L5EDBD8:
        cmp     dword ptr [edi + 8], ebp
        je      L5EDC79
        lea     ecx, [ebp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x38], 0x44
        mov     dword ptr [esp + 0x3c], 4
        mov     dword ptr [esp + 0x40], 2
        mov     dword ptr [esp + 0x44], ebx
        call    FUN_004EA0F0
        mov     ecx, dword ptr [edi + 0x20]
        mov     edx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x5c], ecx
        mov     ecx, dword ptr [edi + 0x14]
        mov     dword ptr [esp + 0x54], edx
        mov     edx, dword ptr [edi + 0xc]
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x68], ecx
        mov     ecx, dword ptr [esp + 0x7c]
        mov     dword ptr [esp + 0x60], edx
        mov     dl, byte ptr [esi + 0x230]
        mov     dword ptr [esp + 0x64], eax
        mov     ax, word ptr [esi + 0x232]
        mov     dword ptr [esp + 0x48], ecx
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x4c], dl
        mov     edx, dword ptr [esp + 0x14]
        mov     word ptr [esp + 0x4e], ax
        mov     eax, dword ptr [esi + 0x238]
        push    ecx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x54], 3
        mov     dword ptr [esp + 0x70], edx
        mov     byte ptr [esp + 0x74], bl
        mov     dword ptr [esp + 0x78], eax
        call    FUN_004D5B70
L5EDC79:
        lea     ecx, [esp + 0x18]
        call    FUN_00417AD0
        jmp     L5EDBAB
L5EDC87:
        mov     dword ptr [esi + 0x244], ebx
L5EDC8D:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret     4
    }
}
