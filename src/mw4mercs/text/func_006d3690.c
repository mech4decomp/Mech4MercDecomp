/*
 * FUN_006d3690 (346 B) — __thiscall. Initializes a sub-object at +4 via
 * FUN_00417170, allocates a 0xc-byte node (FUN_004084c0), walks a linked
 * list of entries, and for each entry parses a set of key/value pairs
 * (FUN_00411cb0 / FUN_00411bf0) and dispatches to FUN_006d2df0 or
 * FUN_006d2c60. Frees the node and tears down the sub-object at exit.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7b8810;   /* 0x007b8810 */
extern void FUN_00417170(void);
extern void FUN_004171b0(void);
extern void *__cdecl FUN_004084c0(int, int);
extern void __cdecl FUN_004084e0(int);
extern int FUN_00411cb0(void);
extern int FUN_00411bf0(void);
extern void FUN_006d2df0(void);
extern void FUN_006d2c60(void);
extern void FUN_00412570(void);

__declspec(naked) void __fastcall FUN_006d3690(void *param_1, int param_2)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     eax, [ebx + 0x4]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00417170
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x1c], 0x79e9d8
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [g_7b8810]
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_36e4
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [ecx + 0x44]
        add     ecx, 0x44
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_36e6
L_36e4:
        xor     edi, edi
L_36e6:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jz      L_37cf
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], eax
        jz      L_37cf
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x773784
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        jz      L_36e6
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        push    0x774b3c
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        jz      L_36e6
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        push    0x774af4
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        jz      L_36e6
        push    0x0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x788754
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jnz     L_379c
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        push    0x79ea28
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x38]
        and     ecx, 0xffff
        push    ecx
        and     edx, 0xffff
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_006d2df0
        jmp     L_36e6
L_379c:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        and     edx, 0xffff
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        and     eax, 0xffff
        push    eax
        push    ecx
        mov     ecx, esp
        push    edx
        call    FUN_00412570
        mov     ecx, ebx
        call    FUN_006d2c60
        jmp     L_36e6
L_37cf:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp + 0x1c]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0x4
    }
}
