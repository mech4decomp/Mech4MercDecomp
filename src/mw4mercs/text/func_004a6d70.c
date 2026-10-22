/*
 * FUN_004a6d70 (198 B) — MLR: object constructor (__thiscall, RET 0x8).
 * Sets vtable 0x7703d0, sizes 0x26c/0x270 to 0x80, and branches on
 * param_2 < 0x19: either releases a ref-counted object (FUN_00487900)
 * or builds a new one via FUN_00412a00, then stores a handle at 0x2b4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da884;
extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_00412a00(void);

__declspec(naked) void FUN_004a6d70(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    ebp
        push    ebx
        mov     esi, ecx
        push    0x527
        call    FUN_004a9250
        cmp     ebp, 0x19
        lea     edi, [esi + 0x2bc]
        mov     eax, 0x80
        mov     dword ptr [edi], 0x0
        mov     dword ptr [esi], 0x7703d0
        mov     dword ptr [esi + 0x270], eax
        mov     dword ptr [esi + 0x26c], eax
        jge     L6dfc
        push    ebx
        call    FUN_00421e60
        push    eax
        push    ebx
        call    FUN_00487900
        add     esp, 0xc
        dec     word ptr [eax + 0x10]
        cmp     word ptr [eax + 0x10], 0x0
        jnz     L6dd9
        test    eax, eax
        jz      L6dd9
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L6dd9:
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [esi + 0x2b8]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
L6de9:
        pop     edi
        mov     dword ptr [esi + 0x2b4], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L6dfc:
        push    edi
        push    ebx
        call    FUN_00412a00
        mov     edx, dword ptr [eax]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esi + 0x2b8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [edi], 0x0
        jz      L6de9
        mov     ecx, dword ptr [g_007da884]
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x4]
        pop     edi
        mov     dword ptr [esi + 0x2b4], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
