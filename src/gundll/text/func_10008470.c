/*
 * FUN_10008470 (622 B) - __stdcall, RET 0x20. Creates a 0x24-byte COM
 * object (vtable 0x100495d4), initializes its sub-object vtables
 * (0x10049408/0x10049574/0x100495f4/0x100495dc then
 * 0x100495d0/0x100495cc/0x100495b8/0x100495a0), and registers it via
 * virtual calls on the DAT_10055028/0x1005502c..0x10055038 globals.
 * Builds a string via FUN_100467d0/FUN_10033350. On failure frees the
 * object (FUN_10001d60) and returns an HRESULT.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1005502c;   /* DAT_1005502c */
extern unsigned int g_10055030;   /* DAT_10055030 */
extern unsigned int g_10055034;   /* DAT_10055034 */
extern unsigned int g_10055038;   /* DAT_10055038 */
extern unsigned int g_10055028;   /* DAT_10055028 */
extern void __cdecl FUN_100467d0(void);   /* rel32 call */
extern void __cdecl FUN_100467ca(void);   /* rel32 call */
extern void __cdecl FUN_10033350(void);   /* rel32 call */
extern void __cdecl FUN_1002ef30(void);   /* rel32 call */
extern void __cdecl FUN_100331a0(void);   /* rel32 call */
extern void __cdecl FUN_10001d50(void);   /* rel32 call (_malloc) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (_free) */

__declspec(naked) void __stdcall FUN_10008470(void)
{
    __asm {
        sub     esp, 0x234
        mov     eax, dword ptr [g_1005502c]
        mov     ecx, dword ptr [g_10055030]
        mov     edx, dword ptr [g_10055034]
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [g_10055038]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x24], eax
        xor     eax, eax
        mov     ecx, 0x46
        lea     edi, [esp + 0x28]
        xor     ebx, ebx
        rep stosd
        mov     eax, dword ptr [esp + 0x24c]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        je      L_d1
        cmp     byte ptr [eax], bl
        je      L_d1
        lea     ecx, [esp + 0x128]
        push    ecx
        push    eax
        jmp     L_525
L_d1:
        push    0x104
        lea     edx, [esp + 0x144]
        push    edx
        call    FUN_100467d0
        cmp     eax, -1
        jne     L_515
        call    FUN_100467ca
        test    eax, eax
        jg      L_4fd
        call    FUN_100467ca
        mov     edi, eax
        jmp     L_6a5
L_4fd:
        call    FUN_100467ca
        mov     edi, eax
        and     edi, 0xffff
        or      edi, 0x80070000
        jmp     L_6a5
L_515:
        lea     eax, [esp + 0x128]
        push    eax
        lea     ecx, [esp + 0x144]
        push    ecx
L_525:
        call    FUN_10033350
        mov     edi, eax
        cmp     edi, ebx
        jl      L_6a5
        mov     eax, dword ptr [esp + 0x248]
        cmp     byte ptr [eax], bl
        mov     dx, word ptr [esp + 0x250]
        mov     word ptr [esp + 0x12c], dx
        jne     L_559
        mov     edi, 0xc1120008
        jmp     L_6a5
L_559:
        push    0x24
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebx
        je      L_66a
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 8], ebx
        mov     byte ptr [esi + 0xc], bl
        mov     byte ptr [esi + 0xd], bl
        mov     byte ptr [esi + 0xe], bl
        mov     dword ptr [esi + 0x10], 0x10049408
        mov     dword ptr [esi + 0x14], 0x10049574
        mov     dword ptr [esi + 0x18], 0x100495f4
        mov     dword ptr [esi + 0x1c], 0x100495dc
        lea     ebp, [esi + 0x18]
        mov     dword ptr [esi], 0x100495d4
        mov     dword ptr [esi + 0x10], 0x100495d0
        mov     dword ptr [esi + 0x14], 0x100495cc
        mov     dword ptr [ebp], 0x100495b8
        mov     dword ptr [esi + 0x1c], 0x100495a0
        mov     dword ptr [esi + 0x20], ebx
        mov     ecx, dword ptr [g_10055028]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_1002ef30
        mov     edi, eax
        cmp     edi, ebx
        jl      L_671
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_10055028]
        push    eax
        push    ebp
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_100331a0
        mov     edi, eax
        cmp     edi, ebx
        jl      L_671
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        mov     edi, eax
        cmp     edi, ebx
        jl      L_671
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        lea     edx, [esp + 0x258]
        push    edx
        push    1
        push    0x100501e8
        push    eax
        call    dword ptr [ecx]
        mov     edi, eax
        cmp     edi, ebx
        jl      L_671
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x264]
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [eax + 4], esi
        mov     eax, dword ptr [esi + 4]
        cmp     eax, ebx
        je      L_658
        mov     dword ptr [eax + 8], ebx
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [edx + 0xc], ebx
L_658:
        pop     edi
        mov     dword ptr [esi + 8], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x234
        ret     0x20
L_66a:
        mov     edi, 0x8007000e
        jmp     L_6a5
L_671:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        mov     dword ptr [esi], 0x100495d4
        mov     dword ptr [esi + 0x10], 0x100495d0
        mov     dword ptr [esi + 0x14], 0x100495cc
        mov     dword ptr [ebp], 0x100495b8
        mov     dword ptr [esi + 0x1c], 0x100495a0
        call    FUN_10001d60
        push    esi
        call    FUN_10001d60
        add     esp, 8
L_6a5:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_6c1
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esp + 0x10], ebx
L_6c1:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_6cf
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
L_6cf:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x234
        ret     0x20
    }
}
