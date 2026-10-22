/*
 * FUN_100080d0 (466 B) __stdcall, RET 0x20.
 * Creates a 0x24-byte COM object (vtable 0x1004956c), initializes its
 * sub-object vtables, and registers it via virtual calls on the
 * DAT_10055028/0x1005502c..0x10055038 globals.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1005502c;   /* DAT_1005502c */
extern unsigned int g_10055030;   /* DAT_10055030 */
extern unsigned int g_10055034;   /* DAT_10055034 */
extern unsigned int g_10055038;   /* DAT_10055038 */
extern unsigned int g_10055028;   /* DAT_10055028 */
extern void __cdecl FUN_10001d50(void);   /* rel32 call (_malloc) */
extern void __cdecl FUN_1002ef30(void);   /* rel32 call */
extern void __cdecl FUN_10030fd0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (_free) */

__declspec(naked) void __stdcall FUN_100080d0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [g_1005502c]
        mov     edx, dword ptr [g_10055034]
        mov     ecx, dword ptr [g_10055030]
        push    ebx
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_10055038]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esp + 0x28]
        push    ebp
        xor     ebx, ebx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x24], eax
        cmp     byte ptr [edx], bl
        push    esi
        mov     dword ptr [esp + 0x14], ecx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     word ptr [esp + 0x1c], cx
        jz      L_10008287
        push    0x24
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_10008248
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esi + 0x8], ebx
        mov     byte ptr [esi + 0xc], bl
        mov     byte ptr [esi + 0xd], bl
        mov     byte ptr [esi + 0xe], bl
        mov     dword ptr [esi + 0x10], 0x10049578
        mov     dword ptr [esi + 0x14], 0x10049408
        mov     dword ptr [esi + 0x18], 0x10049574
        lea     ebp, [esi + 0x10]
        mov     dword ptr [esi], 0x1004956c
        mov     dword ptr [ebp], 0x10049544
        mov     dword ptr [esi + 0x14], 0x10049540
        mov     dword ptr [esi + 0x18], 0x1004953c
        mov     dword ptr [esi + 0x1c], ebx
        mov     dword ptr [esi + 0x20], ebx
        mov     eax, dword ptr [g_10055028]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_1002ef30
        mov     edi, eax
        cmp     edi, ebx
        jl      L_1000824f
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [g_10055028]
        push    edx
        push    ebp
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_10030fd0
        mov     edi, eax
        cmp     edi, ebx
        jl      L_1000824f
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    ebx
        push    ebx
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x4c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        sub     esp, 0x8
        mov     edi, esp
        mov     dword ptr [edi], ecx
        mov     cx, word ptr [esp + 0x54]
        mov     word ptr [edi + 0x4], cx
        mov     ecx, dword ptr [esp + 0x50]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x34]
        mov     edi, eax
        cmp     edi, ebx
        jl      L_1000824f
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x44], edx
        call    dword ptr [eax + 0x44]
        mov     eax, dword ptr [esp + 0x50]
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [eax + 0x4], esi
        mov     ecx, dword ptr [edi]
        push    edi
        call    dword ptr [ecx]
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ebx
        jz      L_10008220
        mov     dword ptr [eax + 0x8], ebp
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0xc], edi
    L_10008220:
        cmp     ebp, ebx
        jz      L_10008235
        mov     eax, dword ptr [ebp]
        push    ebx
        push    ebp
        call    dword ptr [eax + 0x20]
        mov     ecx, dword ptr [ebp]
        push    0x1
        push    ebp
        call    dword ptr [ecx + 0x40]
    L_10008235:
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esi + 0x8], edx
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x20
    L_10008248:
        mov     edi, 0x8007000e
        jmp     L_10008258
    L_1000824f:
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_10008258:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_10008275
        mov     ecx, dword ptr [eax]
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x38]
        mov     dword ptr [esp + 0x10], ebx
    L_10008275:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_10008283
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
    L_10008283:
        cmp     edi, ebx
        jge     L_10008296
    L_10008287:
        mov     eax, 0xc1120401
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x20
    L_10008296:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x20
    }
}
