/*
 * FUN_10006ee0 (455 B) - __stdcall, RET 0x8.
 * SEH-guarded switch on *param_2 (0/1/2). Case 0: FUN_1000cc10 + FUN_10001970.
 * Cases 1/2: allocate a 0x1c object (FUN_10001d50), init via FUN_1000da30/
 * FUN_1000d900, register via FUN_1000da90/FUN_1000d960, free a matching
 * param_2[1] owner, then dispatch a 5-dword struct through the object's
 * vtable method +0xc. Cleans up via FUN_1000cd00.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000cba0(void);       /* rel32 call */
extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg, returns ptr */
extern void __cdecl FUN_1000d900(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_1000d960(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10008920(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1000da30(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_1000da90(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_1000cc10(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10001970(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_1000cd00(void);       /* rel32 call */

__declspec(naked) void __stdcall FUN_10006ee0(void)
{
    __asm {
        push    -1
        push    0x100471ae
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_1000cba0
        mov     ebp, dword ptr [esp + 0x60]
        mov     eax, dword ptr [ebp]
        mov     ecx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        sub     eax, ebx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x60], ecx
        jz      L_7052
        dec     eax
        jz      L_6fbe
        dec     eax
        jnz     L_707d
        push    0x1c
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x54], 0x1
        jz      L_6f51
        mov     ecx, eax
        call    FUN_1000d900
        mov     edi, eax
        jmp     L_6f53
    L_6f51:
        xor     edi, edi
    L_6f53:
        push    ebx
        push    edi
        mov     byte ptr [esp + 0x5c], bl
        call    FUN_1000d960
        mov     esi, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, ebx
        jz      L_6f88
        mov     ebp, dword ptr [esp + 0x60]
        cmp     ebp, eax
        jnz     L_6f88
        cmp     ebp, ebx
        jz      L_6f85
        mov     ecx, ebp
        call    FUN_10008920
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_6f85:
        mov     dword ptr [esi + 0x3c], ebx
    L_6f88:
        mov     eax, dword ptr [esi + 0x30]
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     dword ptr [esp + 0x18], 0x4
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x24], ebx
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     dword ptr [esi + 0x40], 0x3
        jmp     L_707d
    L_6fbe:
        push    0x1c
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        cmp     eax, ebx
        mov     byte ptr [esp + 0x54], 0x2
        jz      L_6fe0
        mov     ecx, eax
        call    FUN_1000da30
        mov     edi, eax
        jmp     L_6fe2
    L_6fe0:
        xor     edi, edi
    L_6fe2:
        push    ebx
        push    edi
        mov     byte ptr [esp + 0x5c], bl
        call    FUN_1000da90
        mov     esi, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, ebx
        jz      L_7019
        mov     ecx, dword ptr [esp + 0x60]
        cmp     ecx, eax
        jnz     L_7019
        cmp     ecx, ebx
        jz      L_7016
        call    FUN_10008920
        mov     edx, dword ptr [esp + 0x60]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
    L_7016:
        mov     dword ptr [esi + 0x3c], ebx
    L_7019:
        mov     eax, dword ptr [esi + 0x30]
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x18], 0x4
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x24], ebx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0x44], eax
        mov     dword ptr [esi + 0x40], 0x4
        jmp     L_707d
    L_7052:
        mov     edi, dword ptr [esp + 0x5c]
        push    0x10049adc
        push    edi
        lea     eax, [esp + 0x30]
        push    eax
        call    FUN_1000cc10
        mov     esi, eax
        cmp     esi, ebx
        jl      L_707f
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edi
        call    FUN_10001970
        mov     esi, eax
        cmp     esi, ebx
        jl      L_707f
    L_707d:
        xor     esi, esi
    L_707f:
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x54], 0xffffffff
        call    FUN_1000cd00
        mov     ecx, dword ptr [esp + 0x4c]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x8
    }
}
