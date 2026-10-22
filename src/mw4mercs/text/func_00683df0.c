/*
 * FUN_00683df0 (368 B) — HUD element list builder. Walks the linked list
 * (this->[0x3f8]), collects element pointers into a local array, then
 * either sorts (FUN_005cb460) or, if >=2 elements, computes aim data via
 * FUN_00683f60 / FUN_00683d40 and appends results to the output list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cb440(void);
extern void __cdecl FUN_00684320(int, int, int);
extern void __cdecl FUN_005cb460(int, int);
extern int  __cdecl FUN_00683f60(int);
extern int  __cdecl FUN_00683d40(int, int);
extern int  __cdecl FUN_00507f90(void);
extern void __cdecl FUN_005cb320(void);

__declspec(naked) int FUN_00683df0(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x60]
        mov     esi, dword ptr [edi + 0x3f8]
        lea     eax, [esp + 0x10]
        xor     ebx, ebx
        push    eax
        lea     ecx, [esp + 0x64]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_005cb440
L_683e25:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
L_683e2d:
        cmp     esi, ebx
        jz      L_683e38
        mov     ecx, dword ptr [esi]
        mov     esi, dword ptr [esi + 0x4]
        jmp     L_683e3a
L_683e38:
        xor     ecx, ecx
L_683e3a:
        cmp     ecx, ebx
        mov     dword ptr [esp + 0xc], ecx
        jz      L_683e70
        cmp     eax, edx
        jz      L_683e5d
        cmp     eax, ebx
        jz      L_683e54
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
L_683e54:
        add     eax, 0x4
        mov     dword ptr [esp + 0x18], eax
        jmp     L_683e2d
L_683e5d:
        push    0x1
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00684320
        jmp     L_683e25
L_683e70:
        mov     ecx, dword ptr [esp + 0x14]
        sub     eax, ecx
        sar     eax, 0x2
        cmp     eax, 0x2
        jnc     L_683e95
        sub     edx, ecx
        sar     edx, 0x2
        push    edx
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_005cb460
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret
L_683e95:
        lea     eax, [esp + 0x20]
        push    edi
        push    eax
        call    FUN_00683f60
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        call    FUN_00683d40
        mov     esi, dword ptr [esp + 0x74]
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0x8]
        add     esp, 0x10
        cmp     ecx, edx
        mov     dword ptr [esp + 0x60], eax
        jz      L_683ece
        cmp     ecx, ebx
        jz      L_683ec6
        mov     dword ptr [ecx], eax
L_683ec6:
        add     ecx, 0x4
        mov     dword ptr [esi + 0x4], ecx
        jmp     L_683edd
L_683ece:
        push    0x1
        lea     edx, [esp + 0x64]
        push    edx
        push    ecx
        mov     ecx, esi
        call    FUN_00684320
L_683edd:
        mov     edi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [edi + -0x4]
        mov     ecx, dword ptr [ecx + 0x198]
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_00507f90
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x20], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     dword ptr [esp + 0x30], edx
        call    FUN_00683d40
        mov     ecx, dword ptr [esi + 0x8]
        add     esp, 0x8
        cmp     edi, ecx
        mov     dword ptr [esp + 0x60], eax
        jz      L_683f41
        cmp     edi, ebx
        jz      L_683f2b
        mov     dword ptr [edi], eax
L_683f2b:
        add     edi, 0x4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x4], edi
        call    FUN_005cb320
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret
L_683f41:
        push    0x1
        lea     edx, [esp + 0x64]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_00684320
        lea     ecx, [esp + 0x14]
        call    FUN_005cb320
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret
    }
}
